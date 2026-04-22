#include <stdio.h>

int main() {
    char ch;
    printf("enter a character \n");
    scanf("%c",&ch);
    int res=!((ch>='A')&&(ch<='Z'))&&!((ch>='a')&&(ch<='z'))&&!((ch>='0')&&(ch<='9'));
    printf("%c is a symbol or not i.e is:%d",ch,res);
}