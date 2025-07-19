#include<stdio.h>

void partition(l,h)
{
    int pivot = A[l];
    i=l;    j=h;

    while(i<j){
        do{
            i++;
        }while(A[i]<=pivot);
        do{
            j--;
        }while(A[j]>pivot);
    }
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int A[size];
}
