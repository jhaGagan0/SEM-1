#include<stdio.h>
int main(){
    char vow[50];
    int count=0;

    printf("Enter the string :");
    gets(vow);

    for (int i = 0; vow[i]!='\0'; i++)
    {
        if (vow[i] == 'a' || vow[i] == 'e' || vow[i] == 'i' || vow[i] == 'o' || vow[i] == 'u')
        count++;
    }
    
    printf("No. of vowels is %d",count);
    return 0;
}