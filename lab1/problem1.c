#include <stdio.h>
int calculator()
{
    //init variables
    int num1;
    char operator; 
    int num2;
    float answer; 

    //get user inputs
    printf("Enter 1st operand: ");
    scanf("%d", &num1);

    printf("Enter operation: ");
    scanf(" %c", &operator);

    //Square num, exit
    if (operator == 's')
    {
        num1 *= num1;
        printf("%d", num1);
        return 0;
    }

    //get user input
    printf("Enter 2nd operand: ");
    scanf("%d", &num2);    

    //if-else block based on operator
    if (operator == '+')
    {
        answer = num1 + num2; 
    }
    else if (operator == '-')
    {
        answer = num1 - num2;
    }
    else if (operator == '*')
    {
        answer = num1 * num2; 
    }
    else if (operator == '/')
    {
        if (num2 != 0)
        {
            answer = (float) num1 / num2;
        }
        else
        {
            printf("0 not valid denominator!");
        }
    }
    else
    {
        printf("invalid operator");
    }

    //print final answer
    printf("Answer: %f", answer);
    return 0;
}


int main()
{
    calculator();
    return 0;
}