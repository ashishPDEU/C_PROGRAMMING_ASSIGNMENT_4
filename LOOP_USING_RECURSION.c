#include <stdio.h>
void printNumbers(int n) {
    if(n == 0) return;
    printNumbers(n-1);
    printf("%d ", n);
}
int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    printNumbers(N);
    return 0;
}
