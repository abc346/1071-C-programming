#include<stdio.h>
#include <time.h>
#include <stdlib.h>

struct Pos{
int row;
int col;
};
int prarr(m[][8]){
for(int i=0;i<8;i++){
    for(int j=0;j<8;j++)
    printf("|-----|-----|-----|-----|-----|-----|-----|-----|\n")
    printf("|  %2d ",m[i][j]);
    printf("\n");
    printf("|-----|-----|-----|-----|-----|-----|-----|-----|\n");
}



}

int KnightTour(int m[][8],int row,int col){
    int moves=1;
    Pos pos;
    for(int i=2;i<=64;i++){
        pos = nextpos(access,row,col);


        moves++; //moves+1
    if(pos.row==-1 && pos.col==-1){
        break;
    }else{
    m[pos.row][pos.col]=i;
    row = pos.row;
    col = pos.col;
        }
    }
    return moves;
}

int main(void){
 int choice;
  int m[8][8]={0};
  int counting[8][8];

 while(1){
        printf("Main Menu\n");
        printf("1. Knight Tour by entering position\n");
        printf("2. Check 64 cases\n");
        printf("3. Exit\n");
        printf("=> ");
        scanf("%d",&choice);
    if (choice==3)break;
switch(choice)
 case 1:
     printf("Enter row and col for number:");
     scanf("%d %d",&row,&col);
     printf("The board for this test is:\n")
 case 2:
  for(int i=0;i<7;i++){
    for(int j=0;j<7;j++){
    counting[i][j] = knightTour(m,i,j);
    }
  }
  prarr(counting);
}






 return 0;}
