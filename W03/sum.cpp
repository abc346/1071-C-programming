#include<stdio.h>
int main()
{
int n1,n2;
int sum=0;
printf("�п�Jn1 n2:");
scanf("%d %d",&n1,&n2);
while(n1>=0&&n2>=0){
	sum=0;
for(int i=n1;i<=n2;i++)
{	sum=sum+i;}

	printf("sum(%d,%d)=%d\n",n1,n2,sum);
	printf("�п�Jn1 n2:");
	scanf("%d %d",&n1,&n2);
	
}
return 0;	
}
