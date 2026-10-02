#include <unistd.h>

void my_print()
{
    write(1, "func you", 8);
}