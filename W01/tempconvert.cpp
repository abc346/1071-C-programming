#include <stdio.h>

int main(void)
	{
	float C,F;
		printf("�п�J���ū�:\n");
		scanf("%f",&C);
		F=C*9/5+32;
		printf("%.1f C=%.1f F",C,F);
	return 0;
	}

/*
�п�J���ū� C:
20.5 C=68.9 F
*/
#include <stdio.h>

int main(void){
	float C,F;
	printf("�п�J�ؤ�ū�:");		
		scanf("%f",&F);
		C=(F-32)*5/9; 
		printf("%.1f C=%.1f F\n",C,F);
	}
/*
�п�J�ؤ�ū� F:
80.5 F=26.9 C
*/ 
