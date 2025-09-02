// ncr value
#include <stdio.h>
int fact(int n);
int main(){
int n,r,d;
int factorial_n,factorial_r,factorial_d;
int nCr;
printf("enter n value");
scanf("%d",&n);
printf("\n enter r value");
scanf("%d",&r);
d = n-r;
printf("\n n-r value is: %d",d);
factorial_n = fact(n);
factorial_r = fact(r);
factorial_d = fact(d);
printf("\nthe factorial of %d is %d",n,factorial_n);
printf("\nthe factorial of %d is %d",r,factorial_r);
printf("\nthe factorial of %d is %d",d,factorial_d);
nCr = factorial_n/(factorial_r * factorial_d);
printf("\n%d is the ncr",nCr);
}
int fact(int n){
if (n==0||n==1)
    return 1;
else
    return n*fact(n-1);
}

