#include <stdio.h>

double ary[] = { 0.1,0.3,0.5,0.7,0.9 };
double get_next(void) {
	static int index = 0;
	double sum;

	sum = ary[index];
	index++;

	return sum;
}

int main(void) {
	double res = 0;
	int i;

	for (i = 0; i < 5; i++) {

		res += get_next();
	}

	printf("%.1lf", res);

	return 0;
}