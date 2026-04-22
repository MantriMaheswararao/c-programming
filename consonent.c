#include <stdio.h>

int main() {
    char ch;
    printf("enter a character \n");
    scanf("%c",&ch);
    int res=!((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'));
    printf("%c is a consonent i.e is:%d",ch,res);
}