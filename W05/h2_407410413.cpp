#include<stdio.h>


int main(void){
int h1,h2;
float w1,w2,BMI,c;

while(1){
printf("Enter Height (-1 to exit):");
scanf("%d %d",&h1,&h2);

if (h1<0 && h2<0){
printf("Bye! 407410413\n");
return 0;}
else{
for (int i=h1;i<=h2;i++){

w1=18.5*i*i/10000.;
w2=24.0*i*i/10000.;

printf("%4d cm: %.1f ~ %.1f (kg)\n",i,w1,w2);
}

}
}

return 0;}
