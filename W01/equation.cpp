#include <stdio.h>
#include <math.h>
int main(void){

int a,b,c; double X1,X2;
printf("½Ð¿é¤Ja b c:");
scanf("%d %d %d",&a,&b,&c);
	if(b^2-4*a*c>=0)
{	X1=(-b+sqrt(b*b-4*a*c))/(2*a)
	;X2=(-b-sqrt(b*b-4*a*c))/(2*a) ;
    	printf("For equation 2 x^2-3 x + 1, two roots are\n");
	printf("X1=%.1f\n",X1);
    printf("X2=%.1f\n",X2);
	}else{
	printf("no real roots\n");
	}
return 0;}
