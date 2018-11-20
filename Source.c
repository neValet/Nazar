//Vasya
#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	double maxVariableValue, b, cycleStep, z, mathFunction = 0, endSum = 0, x, k = 0;
	scanf_s("%lf", &maxVariableValue);
	scanf_s("%lf", &b);
	scanf_s("%lf", &h);
	scanf_s("%lf", &z); 


	for (x = maxVariableValue; x <= b+cycleStep; x += cycleStep) {
		k = 1;
		do {
			mathFunction = (pow(-1, k)*pow(x, 2 * k + 3)) / ((2 * k + 1)*(2 * k + 3));
			endSum += mathFunction;
		}
		while (mathFunction > z);
		printf("\n");
		printf("Змінна x = %lf ", x);
		printf("Кінцева сума рівна f = %lf", endSum);

	}
	_getch();
}