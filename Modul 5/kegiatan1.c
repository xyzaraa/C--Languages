#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int array[n];
    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    int oddCount = 0, evenCount = 0;
    int oddArray[n], evenArray[n];
    
    for (i = 0; i < n; i++) {
        if (array[i] % 2 != 0) {
            oddArray[oddCount] = array[i];
            oddCount++;
        } else {
            evenArray[evenCount] = array[i];
            evenCount++;
        }
    }
    
    printf("Odd numbers in the array: ");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", oddArray[i]);
    }
    
    printf("\nEven numbers in the array: ");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", evenArray[i]);
    }
    
    printf("\n");
    
    return 0;
}

