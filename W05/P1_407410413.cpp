#include<stdio.h>


int main(void){

int a,b;
    printf("Enter two integers(-1 to exit):");
    scanf("%d %d" ,&a,&b);
    if (a==-1 && b==-1){
    return 0;}
    else{
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d %% %d = %d\n",a,b,a%b);}
return 0;}

