#include <stdio.h>
#define MAXLINE 100
enum bool{ NO, YES, LIM = 100 };

int Getline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void)
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = Getline(line, MAXLINE)) > 0){
        if (len > max){
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0){
        printf("%s\n", longest); 
    }
    return 0;
}

int Getline(char s[], int lim)
{

    int i = 0, c;
    int state = YES;

    /* замена цикла for
    for (i = 0; i < lim - 1 && (c = getchar()) != '\n && c != EOF; ++i)
    */
    while (state == YES){
        if (!(i < lim - 1)){
            state = NO;
        } else if (!((c = getchar()) != '\n')){
            state = NO;
        } else if (!(c != EOF)){
            state = NO;
        }
        else {
            s[i] = c;
            ++i;
        }
    }
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0; 
    while ((to[i] = from[i]) != '\0')
        ++i;
}

