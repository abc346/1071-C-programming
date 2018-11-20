#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct Pos{
int row;
int col;
};

void prArr(int m[8][8]){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            printf("%2d ",m[i][j]);
        }
        printf("\n");
    }
}

Pos nextpos(int access[][8],int row,int col)
{
    int h[8]={2,1,-1,-2,-2,-1,1,2};
    int v[8]={-1,-2,-2,-1,1,2,2,1};
    Pos pos;
    int nextrow,nextcol;
    int min=9;
    int minrow=-1;
    int mincol=-1;
    access[row][col]=0;
    for (int i=0;i<8;i++){
        nextrow =row + v[i];
        nextcol =col + h[i];
    if(nextrow>=0 && nextrow<=7 && nextcol>=0 && nextcol<=7 && access[nextrow][nextcol]>0){
        access[nextrow][nextcol]--;
        if(access[nextrow][nextcol]<min){
        min = access[nextrow][nextcol];
        minrow=nextrow;
        mincol=nextcol;
        }
        }
    }
    pos.row=minrow;
    pos.col=mincol;
    return pos;
}




int main(){
    int m[8][8]={0};
    int access[8][8]=
   {2, 3, 4, 4, 4, 4, 3, 2,
    3, 4, 6, 6, 6, 6, 4, 3,
    4, 6, 8, 8, 8, 8, 6, 4,
    4, 6, 8, 8, 8, 8, 6, 4,
    4, 6, 8, 8, 8, 8, 6, 4,
    4, 6, 8, 8, 8, 8, 6, 4,
    3, 4, 6, 6, 6, 6, 4, 3,
    2, 3, 4, 4, 4, 4, 3, 2
    };
    Pos pos;
    int moves=1;//從1開始+
    srand(time(NULL));
    int row= rand()%8;
    int col= rand()%8;
    m[row][col] = 1;
    printf("1:(row,col)=(%d,%d)\n\n",row,col);
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
    prArr(m);
    printf("\nTotal moves:%d\n",moves);
return 0;
}

