//
//  main.c
//  Cmd Line Calculator
//
//  Created by Dan Esrey on 2016/8/8.
//  Copyright © 2016 Dan Esrey. All rights reserved.
//

#include <stdio.h>
int runCalc();

int main(int argc, const char * argv[]) {
    
    printf("DAN'S COMMAND LINE CALCULATOR\n\n");
    
    int anotherCalc = 1;
    while (anotherCalc == 1) {
        anotherCalc = runCalc();
    }
    printf("\nGoodbye!\n\n");
    
    return 0;
}
int runCalc() {
    printf("Which operation would you like to perform? Type 1 for addition, type 2 for subtraction, type 3 for multiplication, or type 4 for division: \n\n");
    
    int a = -1;
    int error = -1;
    
    while (a < 0 || a >= 5) {
        fpurge(stdin);
        error = scanf("%d", &a);
        if (error != 1 || a < 0 || a >= 5 ) {
            printf("please enter type 1 for addition, type 2 for subtraction, type 3 for multiplication, or type 4 for division: \n\n");
            a = -1;
        }
    }
    printf("\nWhat is the first number of your operation? \n\n");
    
    double firstNumber = 10000;
    while (firstNumber < -9999 || firstNumber > 9999) {
        fpurge(stdin);
        error = scanf("%lf", &firstNumber);
        if (error != 1 || firstNumber < -9999 || firstNumber > 9999) {
            printf("Please enter a valid number\n\n");
            firstNumber = 10000;
        }
    }
    printf("\nWhat is the second number of your operation? \n\n");
    
    double secondNumber = 10000;
    while (secondNumber < -9999 || secondNumber > 9999) {
        fpurge(stdin);
        error = scanf("%lf", &secondNumber);
        if (error != 1 || secondNumber < -9999 || secondNumber > 9999) {
            printf("Please enter a valid number\n\n");
            secondNumber = 10000;
        }
    }
    if (a == 1) {
        double result = firstNumber + secondNumber;
        printf("\nThe sum is %lf\n\n", result);
    }
    
    if (a == 2) {
        double result = firstNumber - secondNumber;
        printf("\nThe difference is %lf\n\n", result);
    }
    
    if (a == 3) {
        double result = firstNumber * secondNumber;
        printf("\nThe product is %lf\n\n", result);
    }
    if (a == 4) {
        if (secondNumber == 0) {
            printf("\nI'm sorry, but you cannot divide by zero!\n\n");
        } else {
            double result = firstNumber / secondNumber;
            printf("\nThe quotient is %lf\n\n", result);}
    }
    
    printf("Would you like DAN'S COMMAND LINE CALCULATOR to perform another calculation?(1=Y/2=N)\n\n");
    
    int anotherCalc = -1;
    int Mistake = -1;
    
    while (anotherCalc < 1 || anotherCalc > 2) {
        fpurge(stdin);
        Mistake = scanf("%d", &anotherCalc);
        if (Mistake != 1 || anotherCalc < 1 || anotherCalc > 2) {
            printf("Please enter 1 for yes or 2 for no: \n\n");
        }
    }
    return anotherCalc;
}
