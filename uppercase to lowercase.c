#include<stdio.h>

int main()
{
    printf("\t\t LOWERCASE TO UPPERCASE\t\n\n");


    printf("Enter the String Size : ");
    int size;
    scanf("%d",&size);

    printf("Enter the lowercase String : ");
    char country[size];
    scanf("%s",country);

    for(int i=0;i<size;i++){
        if(country[i]>=97 && country[i]<=122){
            country[i]='A' + (country[i] - 'a');
        }
    }

    printf("Uppercase String : %s",country);

    return 0;
}


