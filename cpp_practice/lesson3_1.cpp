#include <iostream>

int number = 0;

int main(){
    if(number>5){
        printf("%dis bigger than 5\n",number);
    }else if(number<5){
        printf("%d is smaller than 5\n",number);
    }else{
        printf("%d is %d\n",number,number);
    }
    
   return(0);
}