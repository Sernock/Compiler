#include <stdio.h>
#define MAXLINE 100

void escape(char s[], char t[]);

void unescape(char s[], char t[]);

int main(void)
{
    char t[MAXLINE];
    char s[MAXLINE];
    fgets(t, MAXLINE, stdin);
    unescape(s, t);
    printf("%s", s);
    return 0;
}

void escape(char s[], char t[])
{

    int i = 0, j = 0;
    for (i = 0; t[i] != '\0'; ++i) {
        switch (t[i]) {
        case '\n':
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        case '\t':
            s[j++] = '\\';
            s[j++] = 't';
            break;
        default:
            s[j++] = t[i];
        }
    }
    s[j] = '\0';
}

void unescape(char s[], char t[])
{
    int i = 0, j = 0;
    for (i = 0; t[i] != '\0'; i++) {
        if (t[i] == '\\' && t[i+1] != '\0') {
            ++i;
            switch (t[i])
            {
            case 'n':
                s[j++] = '\n';
                break;
            case 't':
                s[j++] = '\t';
                break;
            default:
                s[j++] = '\\';
                s[j++] = t[i];
                break;
            }
        } else s[j++] = t[i];
    }
    s[j] = '\0';
}
