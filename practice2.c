//write a c program to calculate  a simple interest//
#include<stdio.h>

int main(){
    int principal=11521, rate=8;
    float years=2.5;
    int simpleInterest = (principal * rate * years)/100;
    printf("the value of simpleinterest is %f", simpleInterest);
    return 0;
}
