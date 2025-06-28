#include<stdio.h>
int main(){
    int i,num;
    int arr[5] = {10,20,30,40,50};

    printf("Enter a number to find in the array :");
    scanf("%d",&num);

    for (i = 0; i < 5; i++)
    {
        if (num == arr[i])
        {
            printf("%d found at %d position of array",num,i);
            break;
        }
    }
    if (i==5)
    {
        printf("%d Not found in entire array",num);
    }
    
    return 0;
}