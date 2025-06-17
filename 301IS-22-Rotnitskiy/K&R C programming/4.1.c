#include <stdio.h>
#define MAXLINE 1000

int Getline(char line[], int max);

int strrindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main(void)
{
    char line[MAXLINE];
    int found = 0;
    int res;

    while (Getline(line, MAXLINE) > 0)
        if ((res = strrindex(line, pattern)) >= 0) {
            printf("%d", res);
            found++;
        }
    return found;
}

int Getline(char s[], int lim)
{
    int c, i;
    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

int strrindex(char s[], char t[])
{
    int i, j, k;
    int last = -1;
    for (i = 0; s[i] != '\0'; ++i) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);
            if (k > 0 && t[k] == '\0')
                last = i;
    }
    return last;
}
