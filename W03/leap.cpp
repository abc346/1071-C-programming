#include <stdio.h> 
int main(void)
{
	int year;	
	printf("Enter year:");
	scanf("%d",&year);
	while(year>=0)
	{
		if((year%4==0&&!(year%100==0)||year%400==0))
		printf("%d�~�O�|�~\n",year);
		else 
		printf("%d�~���O�|�~\n",year);
			printf("Enter year:");
			scanf("%d",&year);
	}	


	return 0;
}
