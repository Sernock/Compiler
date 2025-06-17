/*
Упражнение 4.4. Добавьте команды, с помощью которых можно было бы печатать верхний элемент стека (с
сохранением его в стеке), дублировать его в стеке, менять местами два верхних элемента стека. Введите
команду очистки стека.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

#define MAXOP 100 
#define NUBMER '0' 
#define MATH '1'
#define MAXVAL 100
#define BUFSIZE 100

int getop(char s[]); 
void push(double); 
double pop(void); 
void clear(void);
double check(void);

int main(void)
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch(type) {
            case NUBMER:
                push(atof(s));
                break;
            case MATH:
                if (strcmp(s, "pow") == 0) {
                    double power = pop();
                    double base =  pop();
                    push(pow(base, power));
                } else if (strcmp(s, "exp") == 0) {
                    push(exp(pop()));
                } else if (strcmp(s, "sin") == 0) {
                    push(sin(pop()));
                } else 
                    printf("error: unknown math function\n");
                break;
            case '+':
                push(pop() + pop());
                break;
            case '*':
                push(pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop() - op2);
                break;
            case '/': 
                op2 = pop();
                if (op2 != 0.0) {   
                    push(pop() / op2);
                } else 
                    printf("error: zero devision\n");
                break;
            case '%':
                op2 = pop();
                if (op2 != 0.0) {
                    push(fmod(pop(), op2));
                } else 
                    printf("error: zero devision\n");
                break;
            case 'c': // clear
                clear();
                break;
            case 'e': // exchange
                double ch1 = pop(); 
                double ch2 = pop(); 
                push(ch1);
                push(ch2);
                break;
            case 'd': // dublicate
                double x = pop();
                push(x);
                push(x);
                break;
            case 'u': // upper
                printf("\t%.8g\n", check()); 
                break;
            case '\n':
                printf("\t%.8g\n", pop()); 
                break;
            default:
                printf("error: unknown command %s\n", s);
                break;
        }
    }
    return 0;
}

int sp = 0;
double val[MAXVAL];

void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else 
        printf("error: stack full, can't push %g\n", f);
}

double pop(void)
{
    if (sp > 0) 
        return val[--sp];
    else {
        printf("error: stack empty\n");
        return 0.0;
    }
}

void clear(void)
{
    sp = 0;
}

double check(void) // функция возвращает верхний элемент из стэка без удаления
{
    if (sp > 0) 
        return val[sp - 1];
    else 
        printf("error: stack empty\n");
        return 0.0;
}

int getch(void);
void ungetch(int);

int getop(char s[]) 
{
    int i = 0, c;

    while ((s[0] = c = getch()) == ' ' || c == '\t'); // пропуск пробельных символов     

    // s[1] = '\0';
    // если мы фиксируем знак минуса перед числом или точкой, то он будет восприниматься как знак числа, иначе это знак операции

    if (islower(c)) {
        while(islower(s[++i] = c = getch()));
        s[i] = '\0';
        if (c != EOF) {
            ungetch(c);
        }
        if (strlen(s) > 1) {
            return MATH;
        } else return s[0];
    }

    if (!isdigit(c) && c != '.' && c != '-')
        return c; // + * / % 

    if (c == '-') {
        if (isdigit(c = getch()) || c == '.') {
            s[++i] = c; 
        } else {
            if (c != EOF) {
                ungetch(c);
            }
            return '-';
        }
    }

    if (isdigit(c))
        while (isdigit(s[++i] = c = getch()));
    
    if (c == '.') 
        while (isdigit(s[++i] = c = getch()));

    s[i] = '\0';
    if (c != EOF) {
        ungetch(c);
    }
    return NUBMER;
}

char buf[BUFSIZE];
int bufp = 0;
 
int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else 
        buf[bufp++] = c;
}

// пример -12.3 
