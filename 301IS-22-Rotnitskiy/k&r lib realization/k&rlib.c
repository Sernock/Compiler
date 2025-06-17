#include <stdio.h>
#include "k&rlib.h"

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

void squeeze(char s1[], char s2[])
{
    enum set { NO, YES };

    int state = NO;
    int i, j, f;
    i = j = f = 0;

    for (i = 0; s1[i] != '\0'; i++) {
        state = NO;
        for (f = 0; s2[f] != '\0'; f++) {
            if (s1[i] == s2[f]) {
                state = YES;
            }
        }

        if (state == NO) {
            s1[j++] = s1[i];
        }
    }
    s1[j] = '\0';
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

int getline(char s[], int lim)
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

int strindex(char s[], char t[])
{
    int i, j, k;

    for (i = 0; s[i] != '\0'; ++i) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);
            if (k > 0 && t[k] == '\0')
                return i;
    }
    return -1;
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

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid]) 
            high = mid - 1; 
        else if (x > v[mid])
            low = mid + 1;
        else 
            return mid; 
    }
    return -1; 
}
