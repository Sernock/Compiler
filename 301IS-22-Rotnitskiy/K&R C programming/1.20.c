// 1.20 as separate programm. Index starts from 1
// Пример работы для всего входного потока до EOF.
#include <stdio.h>
#define TABSTOP 4

int main(void)
{
    int c;

    int numberOfBlanks;
    int position = 1;

    while((c = getchar()) != EOF){
        if(c == '\t'){
            numberOfBlanks = TABSTOP - (position - 1) % TABSTOP; // пример с индексацией с еденицы, а не с нуля
            for(int i = 0; i < numberOfBlanks; ++i){
                putchar(' ');
                ++position;
            }
        } else if(c == '\n'){
            putchar(c);
            position = 1;
        } else {
            putchar(c);
            ++position;
        }
    }

    return 0;
}
//Тестовый пример
//Пример как набора строк, а не всего текста.
//line      Hello\tworld\n\0
//result    Hello---world\n\0   4 - 4 % 5 = 3. Три пробела будет добавлено для выравнивания 
// 1.20 as function in main. Index starts with 0.
#include <stdio.h>

#define MAXLINE 100
#define TABSTOP 4
int getLine(char line[], int maxline);
void detab(char line[]);

int main()
{
    char line[MAXLINE];

    while (getLine(line, MAXLINE) > 0)
    {
        detab(line);
    }

    return 0;
}

int getLine(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if ( c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void detab(char line[])
{
        int position = 0;
        int count_of_whitespaces;

        for(int i = 0; line[i] != '\0'; ++i){

                if(line[i] == '\t'){
                        count_of_whitespaces = TABSTOP - position % TABSTOP;
                        for(int j = 0; j < count_of_whitespaces; ++j){
                                putchar(' ');
                                ++position;
                        }
                } else if(line[i] == '\n'){ // смысл обнуления, если массив при встрече \n, следующим символом добавит \0 и символьный массив будет завершён. Последующие строки будут как ввод нового массива с автоматическим обнуленим. Будет ли этот блок лишним?
                        putchar(line[i]);
                        position = 0;
                } else{
                        putchar(line[i]);
                        ++position;
                }
        }
}
