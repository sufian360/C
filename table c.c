#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    int age;
};

void display_table(struct Employee employees[], int size) {
    printf("ID   | Name              | Age\n");
    printf("-----|-------------------|-----\n");

    for (int i = 0; i < size; i++) {
        printf("%-4d | %-18s | %-3d\n", employees[i].id, employees[i].name, employees[i].age);
    }
}

int main() {
    struct Employee employees[3] = {
        {1, "John Doe", 30},
        {2, "Jane Smith", 25},
        {3, "Mike Johnson", 35}
    };

    display_table(employees, 3);

    return 0;
}

