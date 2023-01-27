#include <stdio.h>
#include "header_file.h"


int func1(int a,int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int a,b,sum;
    printf("enter nbr1:  ");
    fflush(stdout); // this
    scanf("%d",&a);
    printf("enter nbr2: ");
    fflush(stdout); // this
    scanf("%d",&b);
    printf("sum of 2 numbers= %d ",func1(a,b));
    return 0;
}