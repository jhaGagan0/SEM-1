#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,j, temp , *a;
printf("\nHow many numbers are there :");
scanf("%d",&n);

a=(int*) malloc(sizeof(int)*n);
printf("\nEnter array elemnets :");
for ( i = 0; i <n; i++)
scanf("%d",a-i);

for ( i = 0; i <n-1; i++)
{
    for ( j = i+1; j<n; j++)
    {
        if (a[i]>a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        
    }
    
}
printf("sorted numbers are :");
for ( i = 0; i <n; i++)
{
    printf("%d",a[i]);
}




return 0;
}