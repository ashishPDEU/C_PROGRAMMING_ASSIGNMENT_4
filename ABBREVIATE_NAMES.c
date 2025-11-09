#include<stdio.h>
#include<string.h>
void abbreviate(char str[]) {
    int len=strlen(str), i=0,last=0,space=0;
    for(i=0;i<len;i++) {
        if(str[i]!=' ' && (i==0||str[i-1]==' ')) {
            space++;
            if(space>1) printf("%c. ",str[i]);
            else printf("%c. ",str[i]);
            last=i;
        }
    }
    for(i=last;i<len;i++)
        if(str[i]!=' ')
            printf("%c",str[i]);
    printf("\n");
}
int main() {
    char name[100];
    printf("Enter name: ");
    fgets(name,100,stdin);
    abbreviate(name);
    return 0;
}
