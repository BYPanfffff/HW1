#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("輸入兩個數，判斷是否為倍數\n");
	int a, b;
	scanf("%d %d", &a, &b);
	if(a%b==0 || b%a==0)	printf("it is multiple");
	else					printf("is not multiple");
	system("pause");
	return 0;
}
