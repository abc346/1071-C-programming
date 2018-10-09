#include<stdio.h>

void prchar(char c, int n){
    for(int i=1;i<=n;i++)
        printf("%c",c);
}
int main(void){
int h;
    printf("Enter height:");
    scanf("%d",&h);
if(h==-1){
printf("Bye! 407410413");
}
else {
    for(int i=1;i<=h;i++){
    for(int c=h-i;c>=0;c--)
        {printf(" ");}
    prchar('*',i);
    printf("  ");
    prchar('*',i);
    printf("\n");
        }

}

return 0;}
