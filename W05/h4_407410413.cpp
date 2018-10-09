#include<stdio.h>


void encode(int a,int a2,int b2,int c2,int d2){

    c2=((a/1000)+5)%10;
    b2=a%10;
    d2=a%1000/100;
    a2=a%100/10;


    printf("encode(%d)=%d%d%d%d\n",a,a2,b2,c2,d2);

}
void decode(int v,int a3,int b3,int c3,int d3){

    a3=(v%100/10)-5;
    b3=v%1000/100;
    c3=v/1000;
    d3=v%10;

    printf("decode(%d)=%d%d%d%d\n",v,a3,b3,c3,d3);
}
int main(void){
int a,b,c,d,a2,b2,c2,d2,v,a3,b3,c3,d3;
    printf("please enter N:");
    scanf ("%d",&a);
    if (a<0 || v<0){
        printf("Bye! 407410413");
        return 0;
    }
    encode(a,a2,b2,c2,d2);

printf("please enter N:");
    scanf ("%d",&v);
    decode(v,a3,b3,c3,d3);



return 0;}
