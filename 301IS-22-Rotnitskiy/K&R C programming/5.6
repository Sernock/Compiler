#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAXLINE 100

int getline(char line[], int maxline);
int getline_second(char line[], int maxline);
void copy(char *to, const char *from);
int atoi(char *s);
void itoa(int n, char s[]);
void reverse(char *s);
int strindex(const char *s, const char *t);

int main()
{
    char line[MAXLINE];
    char line2[] = "cal";
    getline(line, MAXLINE);
    //reverse(line);
    printf("%d", strindex(line, line2));
    
    return 0;
}

int getline(char *s, int lim)
{
    char *pt = s;
    int c;
    for (; (s - pt) < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++s) 
        *s = c;
    if (c == '\n') {
        *s++ = c;
    }
    *s = '\0';
    return s - pt;
}

void copy(char *to, const char *from)
{
    while (*to++ = *from++);
}

int getline_second(char *s, int lim)
{
    char *ptr = s;
    int c;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        *s++ = c;
    if (c == '\n') 
        *s++ = c;
    *s = '\0';
    return s - ptr; 
}

int atoi(char *s)
{
    int n = 0, sign;
    for (; isspace(*s); ++s);
    sign = (*s == '-') ? -1 : 1;
    if (*s == '-' || *s == '+') ++s;

    for (n = 0; isdigit(*s); ++s) {
        n = 10 * n + (*s - '0');
    }

    return sign * n;
}

void reverse(char *s)
{
    char *start = s;
    char *end = s + strlen(s) - 1;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        ++start;
        --end;
    }
}


int strindex(const char *s, const char *t)
{
    const char *st = s;

    for (; *s; ++s) {

        const char *n = s;
        const char *r = t;

        while (*r && *n == *r) {
            ++r;
            ++n;
        }

        if (!*r) {
            return s - st;
        }
    }

    return -1;
}
