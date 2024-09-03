#include <stdio.h>

int weighter(){
    int weight; 

    printf("Input weight: ");
    scanf("%d", &weight);

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