#include <stdio.h>

int a;

void assign10(void) {
	a = 10;
}

void assign10(void) {
	int a;

	a = 20;
}


int main(void) {
	printf("�Լ� ȣ�� �� a�� : %d\n", a);

	assign10();
	assign20();


	printf("�Լ� ȣ�� �� a�� : %d\n", a);


}