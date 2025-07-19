#include<stdio.h>
//int max_paiwise_product(int n,int a[],int max);
void max_pairwise_product(int size,int a[],int max_product)
{
    max_product = 0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;i++){
            max_product = a[i] * a[j];
        }
    }
    return max_product;
}

int main()
{
    int size;
    printf("Enter the size of list: ");
    scanf("%d",&size);

    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }


    max_pairwise_product(size,a,max_product);
    printf("%d",max_pairwise_product);

    return 0;
}

