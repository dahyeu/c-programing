#include <stdio.h>

int main(void)
{
	int age;

	printf("나이입력 :");
	scanf_s("%d", &age);

	if (age < 20)
	{
		printf("미성년자입니다.\n");
	}
	else
	{
		printf("성인입니다.\n");
	}
	return 0;
}