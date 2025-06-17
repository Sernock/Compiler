1.18 
#include <stdio.h>

#define MAXLINE 100

int getLine(char line[], int maxline);
void del(char line[]);

int main()
{
    char line[MAXLINE];

    while (getLine(line, MAXLINE) > 0)
    {
        del(line);
        printf("%s", line);
    }
    
    return 0;
}

int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if ( c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void del(char s[])
{
    int i;
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    i--;

    while ((i >= 0 && (s[i] == ' ' || s[i] == '\t')))
    {
        i--;
    }

    if(i >= 0){
        i++;
        s[i] = '\0';
    } else {
        s[0] = '\0';
    }
}
