## *This project has been created as part of the 42 curriculum by chchoi*

### Description
* C 언어에서 사용되는 유용한 함수를 직접 구현
* 구현한 함수의 사용법과 원리의 이해

### Instruction
* 프로젝트 목표
* 프로젝트 목표
* 프로젝트 목표

### Resources
* man function
* glibc 미러 저장소 - https://github.com/bminor/glibc
* 각종 블로그 포스트

#### AI 사용
이 프로젝트에서 AI는 학습 및 디버깅을 보조하는 도구로 사용하였다.
주요 사용 용도는 다음과 같다.
- C 표준 라이브러리 함수의 동작과 C 언어 개념 확인
- 경계값 및 예외적인 입력을 포함한 테스트 케이스 검토 및 추가 테스트 케이스 구성
- 테스트 실패 및 예상하지 못한 동작의 원인 분석
- 사설 테스터의 테스트 케이스와 원본 함수의 동작 비교
- 프로젝트 Subject의 요구사항 확인 및 해석
- 구현 방법 검토 및 작성한 코드에서 발생할 수 있는 문제점 확인

### 과제에서 인상적인 부분

#### 정수 승격과 산술 변환

##### - 승격 법칙
- `char`, `unsigned char`, `short` 등의 작은 정수형은 연산이나 비교 과정에서 `int` 등의 타입으로 승격될 수 있다. 단 모든 값을 표현하지 못한 경우 `unsigned int`로 승격됨.
- 서로 다른 타입의 경우 통상 산술 변환 발생. 지정된 정수 변환 순위에 따라 타입이 바뀌어 계산됨.
- `(unsigned char)a - (unsigned char)b`와 같은 연산에서도 캐스팅 이후 실제 산술 연산을 수행할 때 정수 승격이 발생한다.
- signed 정수형과 unsigned 정수형을 함께 연산하거나 비교할 경우 usual arithmetic conversions에 의해 예상하지 못한 타입 변환이 발생할 수 있다.
- `size_t`와 같은 unsigned 정수형에서는 `0 - 1`이나 `(size_t)-1`과 같은 연산의 결과가 큰 양수로 표현될 수 있다.

#### char와 unsigned char

- `memcmp`, `memchr` 등의 메모리 관련 함수에서는 메모리의 각 바이트를 `unsigned char` 값으로 취급한다.
- `char`가 signed인 환경에서는 `0x80` 이상의 바이트가 음수로 해석될 수 있으므로 비교 결과에 영향을 줄 수 있다.
- `memchr`의 검색값 역시 `unsigned char`에 해당하는 값으로 변환하여 비교한다.

#### static, extern과 Linkage

- 파일 범위에서 선언된 식별자가 모두 동일한 방식으로 외부에 노출되는 것은 아니다.
- `static`을 사용하면 internal linkage를 가지므로 해당 translation unit 내부에서만 접근할 수 있다.
- external linkage를 가지는 심볼은 다른 translation unit에서도 참조할 수 있다.
- `extern`을 통해 다른 위치에서 정의된 객체나 함수를 참조할 수 있다.
- 정적 라이브러리(`.a`)에 object file을 포함시키는 것만으로 각 함수가 자동으로 private이 되는 것은 아니다.

#### glibc ctype 계열의 구현

- glibc의 `isalpha()` 등의 문자 분류 함수는 단순한 문자 범위 비교만으로 구현되어 있지 않다.
- 문자별 속성을 나타내는 분류 테이블과 비트 플래그를 이용하여 문자의 속성을 판별하는 구조를 사용한다.
- `_ISupper`, `_ISlower`, `_ISalpha`, `_ISbit()` 등의 값이 문자 분류에 사용된다.
- 표준 `isalpha()`는 참인 경우 반드시 `1`을 반환해야 하는 것은 아니다.
- Libft의 `ft_isalpha` 등의 함수는 Subject의 요구사항에 따라 참이면 `1`, 거짓이면 `0`을 반환해야 한다.

#### 문자열과 메모리의 차이

- 문자열 함수에서 `'\0'`은 문자열의 끝을 의미한다.
- 반면 `memcpy`, `memmove`, `memcmp`, `memchr` 등의 메모리 함수에서는 `'\0'` 역시 하나의 바이트 값일 뿐이다.
- 따라서 메모리 함수는 처리 범위 내에 `'\0'`이 존재하더라도 이를 문자열의 끝으로 취급해서는 안 된다.

#### strchr

- `strchr`에서는 문자열을 구성하는 문자뿐만 아니라 문자열 끝의 `'\0'`도 검색 대상이 된다.
- 따라서 `strchr(s, '\0')`은 문자열의 마지막 NUL 문자의 주소를 반환한다.
- 검색할 `int` 값은 문자 비교에 적합한 값으로 변환되어 처리된다.

#### memcpy와 memmove

- `memcpy`는 source와 destination 영역이 겹치지 않는 경우의 메모리 복사를 수행한다.
- `memmove`는 메모리 영역이 겹치는 경우에도 원본 데이터가 손상되지 않도록 복사한다.
- 같은 동작을 목적으로 하나 지향하는 바의 차이에서 구분됨. dst랑 src가 겹쳐도 되냐 안되냐의 차이로 갈라져서 쌍둥이 탄생

