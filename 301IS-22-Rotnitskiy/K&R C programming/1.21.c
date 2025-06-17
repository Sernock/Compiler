#include <stdio.h>
#define TABSTOP 8

int main(void)
{
        int c; // текущий символ
        int position = 1; // текущая позиция иницилизируется еденицей

        int numSpaces = 0; // счётчик для количесвта пробелоав
        int numTabs = 0; // счётчик для количества табуляций

        while((c = getchar()) != EOF){

                if(c == ' '){ // если символ является пробелом
                        if(position % TABSTOP != 0){ // если текущая позиция не кратна границе
                                ++numSpaces; // число необхожимых пробелов инкрементируется
                        } else { // если кратно границе
                                numSpaces = 0; // обнуляем все накопившиеся пробелы
                                ++numTabs; // накопление табов
                        }

                } else{ // если не пробел
                        for(int i = 0; i < numTabs; ++i){ // "выгружаем" все накопившиеся табы. Если табов не было, то цикл не выполняется
                                putchar('\t');
                        }
                        numTabs = 0; // обнуляем число табов

                        if(c == '\t'){
                                numSpaces = 0;
                                position = position + (TABSTOP - (position - 1) % TABSTOP) - 1;
                        }

                        for(int i = 0; i < numSpaces; ++i){ // выгрузка пробелов
                                putchar(' ');
                        }
                        numSpaces = 0; // обнуление числа пробелов

                        putchar(c); // вывод текущего символа

                        if(c == '\n'){
                                position = 0;
                        }
                }

                ++position;
        }

        return 0;

}
