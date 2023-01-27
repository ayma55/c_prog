#include <stdio.h>


int func1(int a,int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    char str[10];
    int a,b;
    printf("enter nbr1");
    scanf("%d",&a);
    printf("enter nbr2");
    scanf("%d",&b);
    printf("enter the word: ");
    scanf("%s",str);
    printf("display the word",str);
    return 0;
}