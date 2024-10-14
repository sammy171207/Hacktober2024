#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int found[100] = {0};

    for (int i = 0; i < size; i++) {
        if (found[arr[i]] == 1) {
            printf("%d ", arr[i]);
        } else {
            found[arr[i]] = 1;
        }
    }
    return 0;
}
