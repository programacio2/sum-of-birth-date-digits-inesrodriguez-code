#include <stdio.h>

int main()
{
	int day, month, year;

	printf("Introdueix el dia que vas neixer: ");
	scanf_s("%i", &day);
	printf("Introdueix el mes que vas neixer: ");
	scanf_s("%i", &month);
	printf("Introdueix l'any que vas neixer: ");
	scanf_s("%i", &year);

	printf("%i + %i + %i = %i", day, month, year, day + month + year);
}