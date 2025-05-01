#include <iostream>

const int GRAVITY = 9;
int main(){
    GRAVITY = 10000;
    float pi = 3.14;
    printf("重力加速度は大体%dで、円周率は%fです.\n", GRAVITY, pi);
    return(0);
}