#include <stdio.h>

void assign(void) {
	auto int a;

	a = 10;
	printf("assign �Լ� a : %d\n", a);
}

int main(void) {

	auto int a = 0;

	assign();

	printf("main �Լ� a : %d\n", a);
}