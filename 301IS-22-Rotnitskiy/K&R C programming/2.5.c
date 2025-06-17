#include <stdio.h>
#include <string.h>
#define MAXLINE 20


int any(char s1[], char s2[]);

int main(void)
{
    char s1[MAXLINE];
    char s2[MAXLINE];
    fgets(s1, MAXLINE, stdin);
    fgets(s2, MAXLINE, stdin);
    char *ps = strrchr(s1, '\n');
    if (ps != NULL) { *ps = '\0'; };
    char *pt = strrchr(s2, '\n');
    if (pt != NULL) { *pt = '\0'; };
    int result = any(s1, s2);
    printf("%d", result);
    return 0;
}

int any(char s1[], char s2[])
{
    int i, j;

    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                return i;
            }
        }
    }
    return -1;
}
