#include<stdio.h>

void merge(int A[], int left, int mid, int right);

void merge_sort(int A[], int left, int right) {
    if (left >= right) {
        return;
    }
    int mid = left + (right - left) / 2;    // Trick for avoiding integer overflow

    merge_sort(A, left, mid);
    merge_sort(A, mid + 1, right);

    merge(A, left, mid, right);
}

void merge(int A[], int left, int mid, int right) {
    int i;
    int index_a, index_l, index_r;    // index_a = index of array A    // index_l = index of array L    // index_r = index of array R
    int size_left, size_right;

    size_left = mid - left + 1;
    size_right = right - mid;

    int L[size_left], R[size_right];

    // Copying elements into array L from A[left] to A[mid]
    for (i = 0; i < size_left; i++) {
        L[i] = A[left + i];
    }
    // Copying elements into array R from A[mid+1] to A[right]
    for (i = 0; i < size_right; i++) {
        R[i] = A[mid + 1 + i];
    }
    index_l = 0;
    index_r = 0;

    for (index_a = left; index_l < size_left && index_r < size_right; index_a++) {
        if (L[index_l] < R[index_r]) {
            A[index_a] = L[index_l];
            index_l = index_l + 1;
        }
        else {
            A[index_a] = R[index_r];
            index_r = index_r + 1;
        }
    }

    while (index_l < size_left) {
        A[index_a] = L[index_l];
        index_l++;
        index_a++;
    }
    while (index_r < size_right) {
        A[index_a] = R[index_r];
        index_r++;
        index_a++;
    }

}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int A[n], i;
    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    merge_sort(A, 0, n - 1);  // A = array,  0 = left, n-1 = right

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
