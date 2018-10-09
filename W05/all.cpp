#include<stdio.h>

void prchar(char c, int n){
    for(int i=1;i<=n;i++)
        printf("%c",c);}
void decode(int v,int a3,int b3,int c3,int d3){

    a3=(v%100/10)-5;
    d3=v%1000/100;
    c3=v/1000;
    b3=v%10;

    printf("decode(%d)=%d%d%d%d\n",v,a3,b3,c3,d3);
}
void encode(int a,int a2,int b2,int c2,int d2){

    c2=((a/1000)+5)%10;
    b2=a%10;
    d2=a%1000/100;
    a2=a%100/10;


    printf("encode(%d)=%d%d%d%d\n",a,a2,b2,c2,d2);

}
int main(void){

int k,l,choice;
int a,b,c,d,a2,b2,c2,d2,v,a3,b3,c3,d3;
int h1,h2;
float w1,w2,BMI,z;
int h;
    while(1){
        printf("Main Menu\n");
        printf("1. Arithmetic Computation\n");
        printf("2. List BMI ranges\n");
        printf("3. Draw Four Vertical Triangles\n");
        printf("4. encode(n)\n");
        printf("5. decode(n)\n");
        printf("6. Exit\n");

        printf("=> ");
        scanf("%d",&choice);
        if (choice==6)break;
switch(choice){

    case 1:
    printf("Enter two integers(-1 to exit):");
    scanf("%d %d" ,&k,&l);
    if (k==-1 && l==-1){
    printf("Bye! 407410413");
    return 0;}
    else{
    printf("%d + %d = %d\n",k,l,k+l);
    printf("%d - %d = %d\n",k,l,k-l);
    printf("%d * %d = %d\n",k,l,k*l);
    printf("%d / %d = %d\n",k,l,k/l);
    printf("%d %% %d = %d\n",k,l,k%l);}
    break;

    case 2:

while(1){
    printf("Enter Height (-1 to exit):");
    scanf("%d %d",&h1,&h2);

if (h1<0 && h2<0){
        printf("Bye! 407410413\n");
    return 0;}
else
    {for (int i=h1;i<=h2;i++){

    w1=18.5*i*i/10000.;
    w2=24.0*i*i/10000.;

    printf("%4d cm: %.1f ~ %.1f (kg)\n",i,w1,w2);
    }}}break;
case 3:

    printf("Enter height:");
    scanf("%d",&h);
    if(h==-1){
        printf("Bye! 407410413");
    return 0;}
    else {
    for(int i=1;i<=h;i++){
    for(int c=h-i;c>=0;c--)
        {printf(" ");}
        prchar('*',i);
        printf("  ");
        prchar('*',i);
        printf("\n");
        }

    }break;
case 4 :
     printf("please enter N:");
    scanf ("%d",&a);
    if (a<0 || v<0){
        printf("Bye! 407410413");
        return 0;}
    encode(a,a2,b2,c2,d2);
    break;
case 5:
    printf("please enter N:");
    scanf ("%d",&v);
    if (a<0 || v<0){
        printf("Bye! 407410413");
        return 0;}
    decode(v,a3,b3,c3,d3);
    break;

return 0;}



























    }return 0;}
