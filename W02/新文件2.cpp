#include <stdio.h> 
int main(void)
{
	int year;	
	printf("Enter year:");
	scanf("%d",&year);
	
	if((year%4==0&&!(year%100==0)||year%400==0))
	
	printf("%d�~�O�|�~\n",year);
	else 
	
	printf("%d�~���O�|�~\n",year);

	return 0;
}
