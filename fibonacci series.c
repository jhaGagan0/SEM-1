#include<stdio.h>
int main(){
    int n,first =0,second=1,next;

    printf("Enter no. of terms :");
    scanf("%d",&n);

    printf("fibonacci series :");

    for (int i = 0; i < n; i++)
    {
        printf("%d ",first);
        next = first+second;
        first=second;
        second=next;
    }
    
    return 0;
}