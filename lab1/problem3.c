#include <stdio.h>

int isPrime(int n){
    //function to check prime

    //base case
    if (n == 2 || n == 3){
        return 1;
    }
    //not prime numbers 
    if (n <= 1 || n % 2 == 0 || n % 3 == 0){
        return 0; 
    }

    //eecs210 method to check for prime
    for (int i = 5; i*i <= n; i++){
        if (n % i == 0 || n % (i+2) == 0){
            return 0; 
        }
    }
    return 1; 
}


int main(){
    //init var
    int number;

    //get user var 
    printf("Enter number: "); 
    scanf(" %d", &number);

    //iterate through users num and print prime
    for (int i = 0; i < number; i++){
        if (isPrime(i) == 1){
            printf("%d ", i);
        }
    }
    return 0; 
}