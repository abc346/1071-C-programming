#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
int counter=0;
FILE *fp;
struct Date{
   int year;
   int month;
   int day;
};

struct Lotto{
   Date date;
   int num[6];
};


int duplicate(int num[], int pos){
  for(int i=0;i<pos;i++){
    if(num[i]==num[pos]) return 1;
  }
  return 0;
}
void randgen(Lotto lottos[],int n){
    int temp;
    for(int i=0;i<n;i++){
     lottos[counter].date.year = rand()%11+2010;
     lottos[counter].date.month = rand()%12+1;
     lottos[counter].date.day = rand()%31+1;

     //printf("%d/%02d/%02d   ", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day );
     for(int j=0;j<6;j++){
        do{
           temp = rand()%49+1;
        }while(duplicate(lottos[counter].num,j));

        lottos[counter].num[j] = temp;
        //printf("%02d ", lottos[i].num[j]);
     }
     //printf("\n");
    counter++;
   }

}
void writefile(Lotto lottos[],int n){
    int choice;
    char filename[80];
    printf("Enter filename:");
    scanf("%s",filename);
    printf("Choice 1 for write over, 2 for append\n=> ");
    scanf("%d",&choice);
    if(choice==1)
        fp = fopen(filename,"w");
    else
        fp = fopen(filename,"a");
    if(fp==NULL){
        printf("End of writing..");
        exit(1);
    }else{
        for(int i=0;i<=n;i++){
            fprintf(fp,"%d/%02d/%02d   ", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day);
        for(int j=0;j<6;j++){
            fprintf(fp,"%02d ", lottos[i].num[j]);
    }
    fprintf(fp,"\n");
    }
  }
   fclose(fp);
   printf("%d lotto data written to file %s successfully",n,filename);
}
void showlotto(Lotto lottos[],int n){
 printf("\n");
 for(int i=0;i<n;i++){
  printf("%d/%02d/%02d   ", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day );
   for(int j=0;j<6;j++){
  printf("%02d ", lottos[i].num[j]);

  }
 printf("\n");
 }
}
int main(){
   Lotto lottos[MAX];
   int n;

   printf("Enter N: ");
   scanf("%d", &n);
   randgen(lottos,n);
   showlotto(lottos,counter);

   randgen(lottos,n);
   showlotto(lottos,counter);
   writefile(lottos,n);
}
