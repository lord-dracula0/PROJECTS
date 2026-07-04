#include <stdio.h>

int main() {
   

int a;
int b;
printf("enter a");
scanf("%d", &a);
printf("enter b");
scanf("%d",&b);

int sum = a + b;
int multiply = a * b;
float sub = a - b ;
printf("sub is %f \n", sub);

printf("pro is %d \n", a * b );

printf("sum is %d" , sum);

    return 0;
}