// gcd of 2 numbers
#include<stdio.h>
int gcd(int a, int b);
int main(){
int a, GCD, b;
printf("enter a value");
scanf("%d",&a);
printf("enter b value");
scanf("%d",&b);
GCD=gcd(a,b);
printf("the gcd of 2 numbers is %d",a,b,GCD);
}
int gcd(int a, int b){
if(b==0)
return a;
else
return gcd(b,a%b);
}
