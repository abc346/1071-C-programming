#include <stdio.h>
int main(void)
{
float w,h,a,BMI;
printf("�п�J����(cm):");
scanf("%f",&h);
printf("�п�J�魫(kg):");
scanf("%f",&w);
	while(h>=0 || w>=0){
		a=(h/100);
		BMI=w/(a*a);
		printf("�A��BMI�� %.1f\n",BMI);
		if(BMI<18.5){
		printf("�A���魫�L��\n");
		}else if(BMI>=18.5 && BMI<24){
		printf("�A���魫�����`�d��\n");}
		else if(BMI>=24 && BMI<27){
		printf("�A���魫�����`�d��:�L��\n");}
		else if (BMI>=27 && BMI<30){
		printf("�A���魫�����`�d��:���תέD\n");}
		else if (BMI>=30 && BMI<35){
		printf("�A���魫�����`�d��:���תέD\n");}
		else{
		printf("�A���魫�����`�d��:���תέD\n");} 
		printf("�п�J����(cm):");
		scanf("%f",&h);
		printf("�п�J�魫(kg):");
		scanf("%f",&w);}
	return 0;
	}

