#include <stdio.h>
int main(void)
{
float w,h,a,BMI;
printf("請輸入身高(cm):");
scanf("%f",&h);
printf("請輸入體重(kg):");
scanf("%f",&w);
	while(h>=0 || w>=0){
		a=(h/100);
		BMI=w/(a*a);
		printf("你的BMI為 %.1f\n",BMI);
		if(BMI<18.5){
		printf("你的體重過輕\n");
		}else if(BMI>=18.5 && BMI<24){
		printf("你的體重為正常範圍\n");}
		else if(BMI>=24 && BMI<27){
		printf("你的體重為異常範圍:過重\n");}
		else if (BMI>=27 && BMI<30){
		printf("你的體重為異常範圍:輕度肥胖\n");}
		else if (BMI>=30 && BMI<35){
		printf("你的體重為異常範圍:中度肥胖\n");}
		else{
		printf("你的體重為異常範圍:重度肥胖\n");} 
		printf("請輸入身高(cm):");
		scanf("%f",&h);
		printf("請輸入體重(kg):");
		scanf("%f",&w);}
	return 0;
	}

