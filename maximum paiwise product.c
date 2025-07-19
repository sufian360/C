#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the list: ");
    scanf("%d", &size);

    int a[size], i, j;
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    int max_product = a[0] * a[1]; // Initialize to the first product in the list

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            int product = a[i] * a[j];
            if (product > max_product) {
                max_product = product;
            }
        }
    }

    printf("Pair of The maximum product is: [%d, %d]\n", i, j);
    printf("The maximum pairwise product is: %d\n", max_product);

    return 0;
}
