#include<stdio.h>
#include<conio.h>

int main()
{
    system("COLOR 0A");
    printf("\t\t\t<<Change the console color>>\n\n");
    printf("Enter any key to change the color...");
    getch();

    system("cls");
    system("COLOR G2");
    printf("The color is changed");

    getch();
    return 0;
}
