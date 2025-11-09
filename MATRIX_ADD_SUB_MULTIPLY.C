#include <stdio.h>
#define SIZE 3
void add(int a[SIZE][SIZE], int b[SIZE][SIZE], int c[SIZE][SIZE]) {
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            c[i][j] = a[i][j] + b[i][j];
}
void subtract(int a[SIZE][SIZE], int b[SIZE][SIZE], int c[SIZE][SIZE]) {
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++)
            c[i][j] = a[i][j] - b[i][j];
}
void multiply(int a[SIZE][SIZE], int b[SIZE][SIZE], int c[SIZE][SIZE]) {
    for(int i=0;i<SIZE;i++)
        for(int j=0;j<SIZE;j++) {
            c[i][j]=0;
            for(int k=0;k<SIZE;k++)
                c[i][j] += a[i][k]*b[k][j];
        }
}
void print(int a[SIZE][SIZE]) {
    for(int i=0;i<SIZE;i++) {
        for(int j=0;j<SIZE;j++) printf("%d ", a[i][j]);
        printf("\n");
    }
}
int main() {
    int a[SIZE][SIZE] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[SIZE][SIZE] = {{9,8,7},{6,5,4},{3,2,1}};
    int c[SIZE][SIZE];
    add(a, b, c); printf("Addition:\n"); print(c);
    subtract(a, b, c); printf("Subtraction:\n"); print(c);
    multiply(a, b, c); printf("Multiplication:\n"); print(c);
    return 0;
}
