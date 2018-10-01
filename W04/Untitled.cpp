#include <stdio.h>

int main(void){
int choice,h,w,type;

    while(1){
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Straight triangle\n");
        printf("3. Exit\n");
        printf("=> ");
        scanf("%d",&choice);
    if (choice==3)break;
    switch(choice){
    case 1:
        printf("Enter height and width:");
        scanf ("%d %d",&h,&w);
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
            if(i==1 || i==h || j==1 || j==w)
                printf("*");
            else
                printf(" ");
            }
            printf("\n");
        }

    break;
    case 2:
        printf ("Enter height and type:");
        scanf("%d %d",&h,&type);
    switch(type){

    case 1:
        for(int i=1;i<=h;i++){
            for(int j=1;j<=h;j++){
            if (j==1||i==j||i==h)
            printf("*");
            else
                printf(" ");
            }
            printf("\n");
            }
            break;
     case 2:
        for(int i=1;i<=h;i++){
            for(int j=h;j>=1;j--){
            if (i==j || j==1 || i==h)
            printf("*");
            else
                printf(" ");
            }
            printf("\n");
            }
            break;
    case 3:
        for(int i=h;i>=1;i--){
            for(int j=1;j<=i;j++){
            if (j==1||i==j||i==h)
            printf("*");
            else
                printf(" ");
            }
            printf("\n");
            }
            break;
    case 4:
        for(int i=1;i<=h;i++){
            for(int j=1;j<=h;j++){
            if (i==1 || i==j || j==h)
            printf("*");
            else
                printf(" ");
            }
            printf("\n");
            }
        }break;
    }
    }
return 0;
}
