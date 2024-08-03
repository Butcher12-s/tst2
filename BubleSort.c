#include <stdio.h>

void bubble_sort(int *ptr, int size) {
    for (int i = 0; i < size  ; i++) {
        for (int j = i+1; j < size - i-1 ; j++) {
            if (ptr[j] > ptr[j + 1]) {
                // Swap the elements
                int temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
     
}

int main() {
    int ptr[] = {68, 34, 25,8678 ,12, 22, 11, 90};
    int size = sizeof(ptr) / sizeof(ptr[0]);
    
    printf("Array before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    bubble_sort(ptr, size);
    printf("Array after sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

   

    return 0;
}
