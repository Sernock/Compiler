#include <stdio.h>

int main()
{
    char prev_sym = '@';
    int c;

    while ((c = getchar()) != EOF){
        if(c != ' ' || prev_sym != ' '){
            putchar(c);
        }
        prev_sym = c;
    }
    
