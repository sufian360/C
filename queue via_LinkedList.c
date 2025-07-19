#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

/*----------------------------------------- MAIN() function -------------------------------------------------*/
int main()
{
    while(1){
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");

        int option;
        printf("\n\nEnter your option: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default :
                printf("Enter valid option");
                break;
        }
    }
}
/*------------------------------------------- ENQUEUE() --------------------------------------------------*/
int enqueue(int x)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
}
/*------------------------------------------- DEQUEUE() --------------------------------------------------*/
void dequeue()
{
    printf("Under construction!");
}
/*------------------------------------------- DISPLAY() --------------------------------------------------*/
void display()
{
    printf("Under construction!");
}
