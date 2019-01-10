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
	printf("함수 호출 전 a값 : %d\n", a);

	assign10();
	assign20();


	printf("함수 호출 후 a값 : %d\n", a);


}