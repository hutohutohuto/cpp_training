#include<iostream>
    const float GRAVITY = 9.8;

    int main(){
        int sec = 5;
        float big;
        big = (float)sec*sec*GRAVITY/2;
        printf("落下距離は大体%fです\n",big);
        return(0);
    }
