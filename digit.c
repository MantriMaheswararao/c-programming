#include <stdio.h>

int main() {
    char ch;
    printf("enter a character \n");
    scanf("%c",&ch);
    int res=(ch>='0')&&(ch<='9');
    printf("%c is a digit or not i.e is:%d",ch,res);
}