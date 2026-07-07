#include <stdio.h>

int menu;
int first_num, second_num;
int result;

int main(void)
{
	while (1)
	{
		printf("1. 덧셈\n");
		printf("2. 뺄셈\n");
		printf("3. 곱셈\n");
		printf("4. 나눗셈\n");
		printf("5. 종료\n");

		printf("메뉴 선택 :");
		scanf_s("%d", &menu);

		if (menu == 5)
		{
			printf("프로그램을 종료합니다.");
			break;
		}

		printf("첫 번째 숫자 :");
		scanf_s("%d", &first_num);

		printf("두 번째 숫자 :");
		scanf_s("%d", &second_num);

		if (menu == 1)
		{
			result = first_num + second_num;
			printf("결과:%d\n", result);
		}

		else if (menu == 2)
		{
			result = first_num - second_num;
			printf("결과:%d\n", result);
		}

		else if (menu == 3)
		{
			result = first_num * second_num;
			printf("결과:%d\n", result);
		}

		else if (menu == 4)
		{
			result = first_num / second_num;
			printf("결과:%d\n", result);
		}

		else
		{
			printf("잘못 입력하셨습니다.");
		}
	}
	return 0;
}