#include <stdio.h>

int main() {
    char ch;
    printf("enter a character \n");
    scanf("%c",&ch);
    int res=(ch>='a')&&(ch<='z');
    printf("%c is a lowercase alphabet i.e is:%d",ch,res);
}