#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	int Max=0, Min=0;
	
	scanf("%d %d %d", &a, &b, &c);
	if(a>=b && a>=c)	Max = a;
	if(b>=a && b>=c)	Max = b;
	if(c>=a && c>=b)	Max = c;
	
	if(a<=b && a<=c)	Min = a;
	if(b<=a && b<=c)	Min = b;
	if(c<=a && c<=b)	Min = c;
	
	printf("Max is %d,	Min is %d\n", Max, Min);
	system("pause");
	return 0;
}
