// example with for in htoi
#include <stdio.h>
#define MAXLINE 10

int htoi(char s[]);

int main(void)
{
    char line[MAXLINE];
    fgets(line, MAXLINE, stdin);
    int res = htoi(line);
    printf("%d", res);
    return 0;
}

int htoi(char s[])
{
    int i, n = 0;
    int position = 0;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        position = 2;
        }
    for (i = position; s[i] != '\0'; i++) {

        if (s[i] >= '0' && s[i] <= '9') n = 16 * n + (s[i] - '0');
            else if (s[i] >= 'A' && s[i] <= 'F') n = 16 * n + (s[i] - 'A' + 10);
                else if (s[i] >= 'a' && s[i] <= 'f') n = 16 * n + (s[i] - 'a' + 10);
    }
    return n;
}

// example with while in htoi
#include <stdio.h>
#define MAXLINE 10

int htoi(char s[]);

int main(void)
{
    char line[MAXLINE];
    fgets(line, MAXLINE, stdin);
    int res = htoi(line);
    printf("%d", res);
    return 0;
}

int htoi(char s[])
{
    int end = 0, n = 0;
    int position = 0;
    while (s[end] != '\0') {
        ++end;
    }
    --end;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
            position = 2;
    }

    for (int i = position; i <= end; ++i) {

        if (s[i] >= '0' && s[i] <= '9') n = 16 * n + (s[i] - '0');
            else if (s[i] >= 'A' && s[i] <= 'F') n = 16 * n + (s[i] - 'A' + 10);
                else if (s[i] >= 'a' && s[i] <= 'f') n = 16 * n + (s[i] - 'a' + 10);
    }
    return n;
}
