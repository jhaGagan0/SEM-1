#include<stdio.h>
int main(){
   char name[50];
   int i,j,n=0,pal=1;

   printf("Enter a string :");
   gets(name);
   printf("Entered string is : %s",name);

   for ( i = 0; name[i]!='\0'; i++)
   {
      n++;
   }
   
   for ( i = 0,j=n-1; i<n/2; i++,j--)
   {
      if (name[i]!=name[j])
      {
         pal = 0;
         break;
      }
   }
   if (pal ==1)
   {
      printf("\nstring is palindrome ");
   }
   if(pal==0)
   printf("\nstring is not palindrome");
   return 0;
}