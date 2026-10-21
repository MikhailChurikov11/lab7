#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    char c;
    setlocale(LC_ALL, "Russian");

    printf("Введите символ: ");
    scanf("%c", &c);

    switch (c)
    {
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        printf("'%c' - это цифра\n", c);
        break;

    case 'а': case 'б': case 'в': case 'г': case 'д': case 'е':
    case 'ё': case 'ж': case 'з': case 'и': case 'й': case 'к':
    case 'л': case 'м': case 'н': case 'о': case 'п': case 'р':
    case 'с': case 'т': case 'у': case 'ф': case 'х': case 'ц':
    case 'ч': case 'ш': case 'щ': case 'ъ': case 'ы': case 'ь':
    case 'э': case 'ю': case 'я':
    case 'А': case 'Б': case 'В': case 'Г': case 'Д': case 'Е':
    case 'Ё': case 'Ж': case 'З': case 'И': case 'Й': case 'К':
    case 'Л': case 'М': case 'Н': case 'О': case 'П': case 'Р':
    case 'С': case 'Т': case 'У': case 'Ф': case 'Х': case 'Ц':
    case 'Ч': case 'Ш': case 'Щ': case 'Ъ': case 'Ы': case 'Ь':
    case 'Э': case 'Ю': case 'Я':
        printf("'%c' - это буква\n", c);
        break;

    default:
        printf("'%c' - не буква и не цифра\n", c);
    }
	zadanie2();
    return 0;

}

int zadanie2()
{
    float x, y, result;
    char c;

    printf("Введите выражение:\n");

    if (scanf("%f%c%f", &x, &c, &y) != 3) {
        printf("Ошибка ввода!\n");
        return 1;
    }

    switch (c)
    {
    case '+':
        printf("=%f\n", x + y);
        break;

    case '-':
        printf("=%f\n", x - y);
        break;

    case '*':
        printf("=%f\n", x * y);
        break;

    case '/':
        if (y == 0.0f) {
            printf("Ошибка: деление на ноль!\n");
        }
        else {
            printf("=%f\n", x / y);
        }
        break;

    case '^':
        printf("=%f\n", pow(x, y));
        break;

    case '%':
        if ((int)y == 0)
            printf("Ошибка: деление на ноль!\n");
        else
            printf("=%d\n", (int)x % (int)y);
        break;

    default:
        printf("Неизвестная операция '%c'\n", c);
    }

    return 0;
}