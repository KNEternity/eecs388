#include <stdio.h>

int weighter(){
    //init var
    int weight; 

    //get user variables
    printf("Input weight: ");
    scanf("%d", &weight);

    //if-else block based on weight of car: print letter
    if (weight < 10000){
        printf("l");
    }
    else if (weight < 26000){
        printf("m");
    }
    else{
        printf("h");
    }
    return 0;

}

int main(){
    weighter();
    return 0;
}