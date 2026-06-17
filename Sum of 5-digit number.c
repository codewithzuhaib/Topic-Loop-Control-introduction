#include <stdio.h>

int main(){
int temp;
     int n,d1,d2,d3,d4,d5;
     printf("enter a 5-digit number ");
     scanf ("%d",&n);
     d1=n%10;
     n=n/10;
     d2=n%10;
     n=n/10;
     d3=n%10;
     n=n/10;
     d4=n%10;
     n=n/10;
     d5=n%10;
     n=n/10;
     printf("sum of digits of the number = %d",d1+d2+d3+d4+d5);
    return 0;
}