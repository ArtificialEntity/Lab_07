#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	int k;

	puts("Введите день:");

	scanf("%d", &k);

	int jan;

	puts("Введите день недели 1 января (1 - 7):");

	scanf("%d", &jan);

	int weekday = (jan - 1 + k - 1) % 7;

	switch (weekday)
	{
	case 0:
		puts("Понедельник\n");

		break;

	case 1:
		puts("Вторник\n");

		break;

	case 2:
		puts("Среда\n");

		break;

	case 3:
		puts("Четверг\n");

		break;

	case 4:
		puts("Пятница\n");

		break;

	case 5:
		puts("Суббота\n");

		break;

	case 6:
		puts("Воскресенье\n");

		break;

	default:
		puts("Ошибка определения дня недели\n");
	}

	return 0;
}