#include<stdio.h>
int main() {
    int mat[3][3], *p, max, min;
    printf("Enter 9 elements:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d", &mat[i][j]);
    p = &mat[0][0];
    max = min = *p;
    for(int i=0;i<9;i++) {
        if(*(p+i) > max) max = *(p+i);
        if(*(p+i) < min) min = *(p+i);
    }
    printf("Max: %d\nMin: %d\n", max, min);
    return 0;
}
