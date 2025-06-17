
/*
Напишите функцию expand(s1,s2), которая бы разворачивала сокращенную запись наподобие a-z в строке s1 в полный список abc...xyz в строке s2.
 Учитывайте буквы в любом регистре, цифры, а также записи вида a-b-c, a-z0-9 и -a-z. 
 Сделайте так, чтобы знаки - в начале и в конце строки воспринимались буквально, а не как символы развертывания
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAXLINE 100

void expend(char s1[], char s2[]);

int main(void)
{
    char s1[MAXLINE];
    char s2[MAXLINE];
    fgets(s1, MAXLINE, stdin);
    expend(s1, s2);
    printf("%s", s2);
}

void expend(char s1[], char s2[])
{
    int i, j;
    i = j = 0;
    int last = strlen(s1) - 1;

    if (s1[0] == '-') {
        s2[j++] = s1[0];
    }

    for (i = 0; s1[i] != '\0'; ++i) {
        if (s1[i] == '-') {
            if (isdigit(s1[i-1]) && isdigit(s1[i+1])) {
                int left = s1[i-1];
                int right = s1[i+1];
                
                while (left <= right) {
                    s2[j++] = left;
                    ++left;
                }

            } else if (isalpha(s1[i-1]) && isalpha(s1[i+1])) {
                char l = s1[i-1];
                char r = s1[i+1];

                if (islower(l) && islower(r)) {
                    while (l <= r) {
                        s2[j++] = l;
                        ++l;
                    }
                    
                } else if (isupper(l) && isupper(r)) {
                    while (l <= r) {
                        s2[j++] = l;
                        ++l;
                    }
                }
            }
        } 
    }

    if (s1[last] == '-') {
        s2[j++] = s1[last];
    }
    s2[j] = '\0';
}

// Решение Тондо-гимпела

#include <stdio.h>
#define MAXLINE 100

void expand(char s1[], char s2[]); 

int main(void)
{
    char s1[MAXLINE];
    char s2[MAXLINE];
    fgets(s1, MAXLINE, stdin);
    expand(s1, s2);
    printf("%s", s2);
}

void expand(char s1[], char s2[])
{
    char c;
    int i, j;
    i = j = 0;

    while ((c = s1[i++]) != '\0') {
        if (s1[i] == '-' && s1[i+1] >= c) {
            i++;
            while (c < s1[i]) 
                s2[j++] = c++;
        } else  
            s2[j++] = c;
    }

    s2[j] = '\0';
}
