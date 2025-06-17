#include <stdio.h>
#define MAXLINE 100

void is_lower(char s[]);

int main(void)
{
    char line[MAXLINE];
    fgets(line, MAXLINE, stdin);
    is_lower(line);
    printf("%s", line);
    return 0;
}

void is_lower(char s[])
{
    for (int i = 0; s[i] != '\0'; ++i) {
        s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? (s[i] + 'a' - 'A') : s[i];
    }
}
