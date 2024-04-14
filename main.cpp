#include "mbed.h"
#include <cstdio>

int max_value = 10;

int fib(int n){
    if(n == 0 || n ==1) {
        return n;
    }
else{
    return (fib(n-1) + fib(n-2));
}
}
int main()
{
    printf("lab 2 start!! \r\n");

    printf("series is:");
    for (int i=0; i<max_value; i++){
        printf("%d , fib(i)");
    }

   
    
    printf("\r\n")
    while (true){

    }
}


