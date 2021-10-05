#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    int number;
   
    srand(time(0));
    number = rand()%3+1;
    printf("random number is = %d",number);

    return 0;
}