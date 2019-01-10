#include <stdio.h>

void auto_func(void) {
	auto int a = 0;

	a++;
	printf("%d\n", a);

}

void static_func(void) {

	static int a;

	a++;
	printf("%d\n", a);
}

int main(void)
{
	int i;

	printf("auto 지역 변수를 사용한 함수....\n");
	for (i = 0; i < 3; i++) {
		auto_func();
	}

	printf("static 지역 변수를 사용한 함수...\n");
	for (i = 0; i < 3; i++) {
		static_func();
	}

	return 0;

}