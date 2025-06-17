#include <stdio.h>
#define MAXLINE 1000

int getlinE(char line[], int maxline);
void reverse(char line[]);
int main()
{
    int len;
    char line[MAXLINE];

    while((len = getlinE(line, MAXLINE)) > 0){
        reverse(line);
        printf("%s", line);
    }

    return 0;
}

int getlinE(char s[], int lim)
{
    int i, c;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(char line[])
{
    int start = 0;
    int end = 0;

    while (line[end] != '\0')
        end++;

    end--; 

    if(line[end] == '\n'){
        end--;
    }
    while (start < end) {
        int temp = line[start];
        line[start] = line[end];
        line[end] = temp;
        start++;
        end--;
    }
}
