#include <stdio.h>
#include <stdlib.h>

int main()
{
	float BMI, height, weight;
	printf("��J����(����) �M �魫(����)�A�H�ťէ@���j\n");
	scanf("%f %f", &height, &weight);
	
	BMI = weight	/	((height/100)*(height/100));
	printf("BMI is %.2f\n",BMI);
	
	if(BMI<18.5)				printf("Underweight\n");
	if(BMI>18.5 && BMI<=24.9)	printf("normal\n");
	if(BMI>=25 && BMI<=29.9)	printf("Overweight\n");
	if(BMI>=30)	printf("Obese\n");
	
	
	system("pause");
	return 0;
}
