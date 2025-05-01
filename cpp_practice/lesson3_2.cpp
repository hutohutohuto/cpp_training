#include <iostream>

int number = 0;
int count = 1;
int main(){
    while(count<=100){
        number = number + count;
        count ++;
    }
    printf("1から100までの合計は%dです\n",number);
   return(0);
}