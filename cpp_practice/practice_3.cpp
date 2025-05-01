#include <iostream>
int main(){
    for(int number= 1;number<=100;number++){
        if(number%15 == 0){
            printf("%dfizzbazz\n",number);
        }else if(number%3 == 0){
            printf("%dfizz\n",number);
        }else if(number%5 == 0){
            printf("%dbazz\n",number);
        }else{
            printf("%d\n",number);
        }
    }
   return(0);
}