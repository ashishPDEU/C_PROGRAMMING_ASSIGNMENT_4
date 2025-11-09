#include <stdio.h>
#define N 4
void sort(int arr[], int n) {
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]>arr[j]) {
                int t=arr[i]; arr[i]=arr[j]; arr[j]=t;
            }
}
int main() {
    int mat[N][N] = { {16,2,3,13},{5,11,10,8},{9,7,6,12},{4,14,15,1} };
    int arr[N*N], k=0;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            arr[k++] = mat[i][j];
    sort(arr, N*N);
    printf("Sorted array:\n");
    for(int i=0;i<N*N;i++) printf("%d ", arr[i]);
    return 0;
}
