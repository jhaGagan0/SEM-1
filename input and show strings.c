#include<stdio.h>
int main(){
    int str[5][20];

    printf("Enter a string :");
    for (int i = 0; i <5; i++)
    {
        scanf("%s",&str[i]);
    }
    
     printf("Entered string is :");
    for (int i = 0; i <5; i++)
    {
        printf("\n%s",str[i]);
    }
    return 0;
}