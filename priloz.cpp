﻿//библиотеки
#include <stdio.h>
#include <math.h>

int main()
{

	int x;
	float y, k;

	printf("Vvedite celoe polozhitelnoe chislo x: ");

	do //проверочка на то, что число положительное
	{
		scanf("%d", &x);
		if (x <= 0)
		{
			printf("Error. Vvedite celoe polozhitelnoe chislo x: ");
		}
	} while (x <= 0);

	y = sqrt(pow(2, x));

	printf("Result = %f", y);



	return 0;
}