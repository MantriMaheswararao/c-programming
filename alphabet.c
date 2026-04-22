#include <stdio.h>

int main() {
    char ch;
    printf("enter a character \n");
    scanf("%c",&ch);
    int res=(ch>='A')||(ch<='Z')||(ch>='a')||(ch<='z');
    printf("%c is a alphabet or not i.e is:%d",ch,res);
}