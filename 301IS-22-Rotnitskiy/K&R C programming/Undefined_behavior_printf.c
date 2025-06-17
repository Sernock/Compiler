#include <stdio.h>

int main(int argc, char *argv[])
{
    while (--argc > 0) 
        printf((argc > 1) ? "%s " : "%s", *++argv);
    putchar('\n');
    return 0;
}

// Поведение printf не определено, поскольку между вызовами аргументов нет точек следования.
// То есть при передачи неподсчитанных аргументов порядок их вычисления компилятором неопредёлен и он сам волен решать в каком порядке выполнять работу
// Annex C https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf страница 17
//3.5.4
//1 unspecified behavior
//behavior, that results from the use of an unspecified value, or other behavior upon which this
//document provides two or more possibilities and imposes no further requirements on which is
//chosen in any instance
//2 Note 1 to entry: J.1 gives an overview over properties of C programs that lead to unspecified behavior.
//3 EXAMPLE An example of unspecified behavior is the order in which the arguments to a function are evaluated.
