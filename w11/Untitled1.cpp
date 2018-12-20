#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date{
int day;
int month;
int year;

};

struct ListNode {
   int id;
   Date birth;
   ListNode *nextPtr;
   char *name;
};


typedef ListNode *ListNodePtr;


void insert( ListNodePtr *sPtr, ListNode item );
int del( ListNodePtr *sPtr, ListNode item);
int isEmpty( ListNodePtr sPtr );
void printList( ListNodePtr currentPtr );
void instructions();

int main()
{
   ListNodePtr startPtr = NULL;
   int choice;
   ListNode item;
    item.name=(char *)malloc(sizeof(char)*80);
   instructions();
   printf( ": " );
   scanf( "%d", &choice );

   while ( choice != 3 ) {

      switch ( choice ) {
         case 1:
            printf( "Enter a id: " );
            scanf( "\n%d", &item.id );
            printf("Enter Birthday:");
            scanf("%d %d %d",&item.birth.year,&item.birth.month,&item.birth.day);
            fflush(stdin);
            printf("Enter Name:");
            gets(item.name);
            insert( &startPtr, item );
            printList( startPtr );
            break;
         case 2:
            if ( !isEmpty( startPtr ) ) {
               printf( "Enter character to be deleted: " );
               scanf( "\n%d", &item );
               if ( del( &startPtr, item ) ) {
                  printf( "%d deleted.\n", item );
                  printList( startPtr );
               }else{
                  printf( "%d not found.\n\n", item );}
            }else {
               printf( "List is empty.\n\n" );}
            break;
         default:
            printf( "Invalid choice.\n\n" );
            instructions();
            break;}
        printf( ": " );
      scanf( "%d", &choice );}
   printf( "End of run.\n" );
   return 0; }

void instructions( void )
{
   printf( "Enter your choice:\n"
      "   1 to insert an element into the list.\n"
      "   2 to delete an element from the list.\n"
      "   3 to end.\n" );
}

void insert( ListNode **sPtr,ListNode item )
{
   ListNodePtr newPtr;
   ListNodePtr previousPtr;
   ListNodePtr currentPtr;
   newPtr = (ListNode *)malloc(sizeof(ListNode));
   newPtr->name=(char *)malloc(sizeof(char)*80);
   if ( newPtr != NULL ) {
      newPtr->id = item.id;
      newPtr->birth.year = item.birth.year;
      newPtr->birth.month = item.birth.month;
      newPtr->birth.day  = item.birth.day;
      strcpy(newPtr->name,item.name);
      newPtr->nextPtr = NULL;

       previousPtr = NULL;
       currentPtr = *sPtr;
      while ( currentPtr != NULL && item.id > currentPtr->id ) {
         previousPtr = currentPtr;
         currentPtr = currentPtr->nextPtr;}
      if ( previousPtr == NULL ) {
         newPtr->nextPtr = *sPtr;
         *sPtr = newPtr;
      }else {
         previousPtr->nextPtr = newPtr;
         newPtr->nextPtr = currentPtr;
      }
   }else {
      printf( "%d not inserted. No memory available.\n", item.id );
   }
}


int del( ListNodePtr *sPtr, ListNode item )
{
   ListNodePtr previousPtr;
   ListNodePtr currentPtr;
   ListNodePtr tempPtr;

   if ( item.id == ( *sPtr )->id ) {
      tempPtr = *sPtr;
      *sPtr = ( *sPtr )->nextPtr;
      free( tempPtr );
      return item.id;
   }else {
      previousPtr = *sPtr;
      currentPtr = ( *sPtr )->nextPtr;
      while ( currentPtr != NULL && currentPtr->id != item.id ) {
         previousPtr = currentPtr;
         currentPtr = currentPtr->nextPtr;}
      if ( currentPtr != NULL ) {
         tempPtr = currentPtr;
         previousPtr->nextPtr = currentPtr->nextPtr;
         free( tempPtr );
         return item.id;
      }
   }
   return '\0';}

int isEmpty( ListNodePtr sPtr )
{
   return sPtr == NULL;
}

void printList( ListNodePtr currentPtr )
{
   if ( currentPtr == NULL ) {
      printf( "List is empty.\n\n" );
   }else{
      printf( "The list is:\n" );
      while ( currentPtr != NULL ) {
         printf( "-->\n" );
         printf("id=%d,Birthday:%4d/%02d/%02d,Name:%s\n",currentPtr->id,currentPtr->birth.year,currentPtr->birth.month,currentPtr->birth.day,currentPtr->name);
         currentPtr = currentPtr->nextPtr;}
      printf( "NULL\n\n" );
   }
}
