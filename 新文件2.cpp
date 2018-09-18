#include <stdio.h> 
int main(void)
{
	int year;	
	printf("Enter year:");
	scanf("%d",&year);
	
	if((year%4==0&&!(year%100==0)||year%400==0))
	
	printf("%d年是閏年\n",year);
	else 
	
	printf("%d年不是閏年\n",year);

	return 0;
}
