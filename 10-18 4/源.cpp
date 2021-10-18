#include<stdio.h>
int main()
{
	int a;
	printf(" ‰»Î ±º‰£ª");
	scanf("%d", &a);
	if (a <= 12)
		printf("%d", a);
	else
		switch (a) {
		case 13:printf("1");
			break;
		case 14:printf("2");
			break;
		case 15:printf("3");
			break;
		case 16:printf("4");
			break;
		case 17:printf("5");
			break;
		case 18:printf("6");
			break;
		case 19:printf("7");
			break;
		case 20:printf("8");
			break;
		case 21:printf("9");
			break;
		case 22:printf("10");
			break;
		case 23:printf("11");
			break;
		case 24:printf("12");
			break;
		}
	return 0;
}
