#include<stdio.h>
void main() {
    char *books[3], temp[50];
    for(int i=0;i<3;i++) {
        printf("Enter book name %d: ", i+1);
        fgets(temp, 50, stdin);
        books[i] = strdup(temp);
    }
    printf("Books entered:\n");
    for(int i=0;i<3;i++)
        printf("%s", books[i]);
}
