#include <stdio.h>
int calculator()
{
    int num1;
    char operator; 
    int num2;
    float answer;

    printf("Enter 1st operand: ");
    scanf("%d", &num1);

    printf("Enter operation: ");
    scanf(" %c", &operator);

    if (operator == 's')
    {
        num1 *= num1;
        printf("%d", num1);
        return 0;
    }


    printf("Enter 2nd operand: ");
    scanf("%d", &num2);    


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
    printf("Answer: %f", answer);
    return 0;
}


int main()
{
    calculator();
    return 0;
}