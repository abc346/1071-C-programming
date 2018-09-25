#include <stdio.h>
int main(void)
{
int sec,hh,mm,ss;


	while(sec>=0)
	{		printf("please enter second:");
		scanf("%d",&sec);}

		hh=sec/3600;
		mm=sec%3600/60;
		ss=sec%60;
		printf("%dsec=%02d:%02d:%02d\n",sec,hh,mm,ss);

	return 0;
	
}
