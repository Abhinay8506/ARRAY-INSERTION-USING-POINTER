#include<stdio.h>
#include<stdlib.h>
void insert(int*,int);
int main()
{
    int arr[70];
    int i,n;
    printf("enter no. of elements for array:");
    scanf("%d",&n);
    insert(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
void insert(int* v,int n)
{   printf("enter\n");
    int i,*p;
    p=v;
    for(i=0;i<n;i++)
    {  
        scanf("%d",p);
        p++;
    }
    
}


