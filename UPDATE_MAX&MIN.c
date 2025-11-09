#include <stdio.h>
void updateMaxMin(int arr[], int n, int *max, int *min) {
    *max = *min = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > *max) *max = arr[i];
        if(arr[i] < *min) *min = arr[i];
    }
}
int main() {
    int arr[5] = {10, 40, 5, 23, 16}, max, min;
    updateMaxMin(arr, 5, &max, &min);
    printf("Max = %d, Min = %d\n", max, min);
    return 0;
}
