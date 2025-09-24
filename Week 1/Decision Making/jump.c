#include <stdio.h>

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int key = 6; //The one I am finding
    // int size = 6; //Total Number

    for (int i = 0; i <= 5; i++) {
        if (arr[i] == key) {
            printf("Element found at position: %d",
                   (i + 1));
            break;
        }
    }

    return 0;
}