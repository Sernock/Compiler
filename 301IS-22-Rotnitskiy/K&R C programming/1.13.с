#include <stdio.h>

#define MAXLINE 11

int main()
{
    int c, nc = 0, array[MAXLINE] = {0};
    
    while ((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            if(nc > 0 && nc < MAXLINE){
                ++array[nc];
            }
            nc = 0;
        }

        else {
            ++nc;
        }
    }

    if(nc > 0 && nc < MAXLINE){
        ++array[nc];
    }

    for(int i = 1; i < MAXLINE; ++i){
        printf("%d:", i);
            for(int j = 1; j <= array[i]; ++j){
                printf("#");
            }
        putchar('\n');
    }
    
}
