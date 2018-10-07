#include <stdio.h>

void prchar(char c, int n){
    for(int i=1;i<=n;i++)
        printf("%c",c);
}
void drawRect(int h, int w, int filled)
{
    for(int i=1; i<=h; i++){
        if (filled){
        prchar('*',w);
        printf("\n");
        }else{
        for(int j=1; j<=w; j++){
        if(i==1 || i==h || j==1 || j==w)
            printf("*");
        else
            printf(" ");
            }
        printf("\n");
    }
}}
void drawVertTri(int h,int type,int filled)
{
    switch(type)
    {
    case 1:
        for(int i=1; i<=h; i++){
        if (filled){
        prchar('*',i);
        printf("\n");
        }else{
        for(int j=1; j<=h; j++){
        if (j==1||i==j||i==h)
            printf("*");
        else
            printf(" ");
            }
            printf("\n");
        }}
        break;
    case 2:
        for(int i=1; i<=h; i++){
        if (filled){
        prchar(' ',h-i);
        prchar('*',i);
        printf("\n");
        }else{
        for(int j=h; j>=1; j--){
        if (i==j || j==1 || i==h)
            printf("*");
        else
            printf(" ");
            }
            printf("\n");
        }}
        break;
    case 3:
        for(int i=h; i>=1; i--){
        if (filled){
        prchar('*',i);
        printf("\n");
        }else{
        for(int j=1; j<=i; j++){
            if (j==1||i==j||i==h)
                printf("*");
            else
                printf(" ");
            }
            printf("\n");
        }}
        break;
    case 4:
        for(int i=1; i<=h; i++){
        if (filled){
        prchar(' ',i-1);
        prchar('*',h-i+1);
        printf("\n");
        }else{
        for(int j=1; j<=h; j++){
            if (i==1 || i==j || j==h)
                printf("*");
            else
                printf(" ");
            }
            printf("\n");
        }
    }
}}
void drawisoscelesTri(int h, int type1, int filled){

	switch(type1){

	case 1:
	if (filled){
	for(int i=1;i<=h;i++){
    for(int j=1;j<=h-i;j++){
        printf(" ");}
    for (int a=1;a<=2*i-1;a++){
        printf("*");}
    printf("\n");}}
    else{
    for(int i=1;i<=h;i++){
    for(int j=1;j<=2*h-1;j++){
    if (i+j==6 || i==h || j-i==4)
        printf("*");
    else
        printf(" ");
    }
    printf("\n");
    }}

    break;
	case 2:
	if (filled){
	for(int i=h;i>=1;i--){
    for(int j=0;j<=h-i;j++){
       printf(" ");}
    for(int a=2*i-1;a>=1;a--){
    printf("*");}
 	printf("\n");}}
 	else{
    for(int i=1;i<=h;i++){
    for(int j=1;j<=2*h-1;j++){
    if(i==j || i==1 || i+j==2*h)
    printf("*");
    else
    printf(" ");
    }
    printf("\n");}


 	}
	}}
int main(void){
int choice,h,w,type,type1;
int filled;
    while(1){
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical triangle\n");
        printf("3. Isosecles triangle\n");
        printf("4. Exit\n");
        printf("=> ");
        scanf("%d",&choice);
    if (choice==4)break;
    switch(choice){
    case 1:
        printf("Enter height width and filled:");
        scanf ("%d %d %d",&h,&w,&filled);
        drawRect(h,w,filled);
    break;
    case 2:
        printf ("Enter height type and filled:");
        scanf("%d %d %d",&h,&type,&filled);
        drawVertTri(h,type,filled);
        break;
    case 3:
        printf("Enter height type1 and filled:");
        scanf("%d %d %d",&h,&type1,&filled);
        drawisoscelesTri(h,type1,filled);
        }
    }
  return 0;  }
