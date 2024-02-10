#include <stdio.h>
#include <string.h>
#include <clocale>



void findSpace(char* str);

int main() {
    setlocale(LC_ALL, "rus");
    char input[100];
    printf("Введите строку символов: ");
    fgets(input, sizeof(input), stdin);

    findSpace(input);

    return 0;
}

void findSpace(char* str) {
    int removedSpaces = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            for (int j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            removedSpaces++;
            len--;
            i--;
        }
    }

    printf("Преобразованный текст: %s\n", str);
    printf("Количество удаленных пробелов: %d\n", removedSpaces);
}
