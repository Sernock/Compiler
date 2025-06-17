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
        } else {
            ++nc;
        }
    }

    if(nc > 0 && nc < MAXLINE){
        ++array[nc];
    }
    
    int max = 0;
    for(int i = 1; i < MAXLINE; ++i){
        if (max < array[i]){
            max = array[i];
        }
    }

    for(int row = max; row > 0; --row){
            for(int col = 1; col < MAXLINE; ++col){
                if(array[col] >= row){
                    printf(" * ");
                } else {
                    printf("   ");        
                }
            }
        putchar('\n');
    }

    for (int i = 1; i < MAXLINE; i++){
        printf(" %d ", i);
    }
    
}
