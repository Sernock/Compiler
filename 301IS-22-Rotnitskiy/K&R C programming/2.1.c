#include <limits.h>
#include <float.h>
#include <stdio.h>

int main(void)
{
    printf("Char is from %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("Short is from %hd to %hd\n", SHRT_MIN, SHRT_MAX);
    printf("Int is from %d to %d\n", INT_MIN, INT_MAX);
    printf("Long is from %ld to %ld\n", LONG_MIN, LONG_MAX);

    putchar('\n');

    printf("Unsigned char is from 0 to %u\n", UCHAR_MAX);
    printf("Unsigned short is from 0 to %hu\n", USHRT_MAX);
    printf("Unsigned int is from 0 to %u\n", UINT_MAX);
    printf("Unsigned long is from 0 to %lu\n", ULONG_MAX);
    
    putchar('\n');

    printf("Float is from %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Double if from %le to %le\n", DBL_MIN, DBL_MAX);

    return 0;
}
