#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int i = 0, j = n - 1;

    while(i < j) {
        if(a[i] % 2 == 0) {
            i++;
        }
        else if(a[j] % 2 != 0) {
            j--;
        }
        else {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }

    printf("Rearranged array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}