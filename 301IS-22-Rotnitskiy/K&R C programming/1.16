#include <stdio.h>
#define MAXLINE 10

int getlinE(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = getlinE(line, MAXLINE)) > 0){
         printf("lenght is %d, line is %s", len, line);
         if (len > max){
             max = len;
             copy(longest, line);
         }
    }
    if(max > 0)
         printf("%s", longest);
    return 0;

}

int getlinE(char s[], int lim)
{
    int c, i;
    int lenght = 0;

    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
        ++lenght;
    }
    if(c == '\n'){
        s[i] = c;
        ++i;
        ++lenght;
    } else if (i >= lim - 1){
        int j;
        while((j = getchar()) != EOF && j != '\n'){
            ++lenght;
        }
        if(j == '\n')
            ++lenght;
    }

    s[i] = '\0';
    return lenght;
}

void copy(char to[], char from[])
{
    int i = 0;
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
} 
