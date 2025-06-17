#include <stdio.h>
#include <ctype.h>

double atof(char s[]);
int degree(int exp);

int main(void)
{
    double atof_custom(char s[]); // объявление локального прототипа
    char s[] = "123.56E-4";
    printf("%lf", atof_custom(s));  
    return 0;
}

double atof_custom(char s[])
{
    double val, power;
    int degree(int exp); // объявление локального прототипа функции
    int i = 0, sign;

    while (isspace(s[i])) i++;

    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') i++;

    for (val = 0.0; isdigit(s[i]); i++)
        val = 10.0 * val + (s[i] - '0');

    if (s[i] == '.') {
        i++;
        for (power = 1.0; isdigit(s[i]); i++) {
            val = 10.0 * val + (s[i] - '0');
            power *= 10.0;
        }
        val /= power;
    }

    val *= sign;

    if (s[i] == 'e' || s[i] == 'E') {
        i++;

        int exp_sign = 1;
        int exp = 0;

        exp_sign = (s[i] == '-') ? -1 : 1;
        if (s[i] == '+' || s[i] == '-') i++;

        for (exp = 0; isdigit(s[i]); i++) {
            exp = 10 * exp + (s[i] - '0');
        }

        if (exp_sign == 1) {
            val *= degree(exp);
        } else {
            val /= degree(exp);
        }
    }

    return val;
}

int degree(int exp)
{
    int res = 1;
    for (int i = 0; i < exp; ++i) {
        res *= 10;
    }
    return res;
}
int main(void)
{
    char line[] = "123.56E-4";
    printf("%lf", atof(line));
    return 0;
}

double atof(char s[])
{
    int sign, i;
    double power, val;

    for (i = 0; isspace(s[i]); ++i);

    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '-' || s[i] == '+') ++i;

    for (val = 0.0; isdigit(s[i]); ++i) {
        val = 10.0 * val + (s[i] - '0');
    }

    if (s[i] == '.') ++i;

    for (power = 1.0; isdigit(s[i]); ++i) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10;
    }

    val = val * sign / power;

    if (s[i] == 'e' || s[i] == 'E') {
        ++i;

        int exp, exp_sign;
        exp_sign = (s[i] == '-') ? -1 : 1;
        if (s[i] == '-' || s[i] == '+') ++i;

        for (exp = 0; isdigit(s[i]); ++i) {
            exp = 10 * exp + (s[i] - '0');
        }

        if (exp_sign == 1) {
            val *= degree(exp);
        } else val /= degree(exp);
    }

    return val;
}

int degree(int exp)
{
    int i;
    int num = 10;
    int res = 1;

    for (i = 0; i < exp; ++i) {
        res *= num;
    }

    return res;
}
