#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
	double a, b, h, z, y = 0, s = 0, x, k=0;
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);
	scanf_s("%lf", &h);
	scanf_s("%lf", &z); 


	for (x = a; x <= b+h; x += h) {
		k = 1;
		do { 
			y = (pow(-1, k)*pow(x, 2 * k + 3)) / ((2 * k + 1)*(2 * k + 3)); 
			s += y;
		}
		while (y > z);
		printf("\n");
		printf("x=%lf s=%lf", x, s);

	}
	_getch();
}