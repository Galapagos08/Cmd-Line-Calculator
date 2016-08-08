//
//  main.c
//  Cmd Line Calculator
//
//  Created by Dan Esrey on 2016/8/8.
//  Copyright © 2016 Dan Esrey. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    printf("DAN'S COMMAND LINE CALCULATOR\n\n");
           
    printf("Which operation would you like to perform? Type 1 for addition, type 2 for subtraction, or type 3 for multiplication: \n\n");
    // this prompts user to select operation
    
    int a = -1;
    int error = -1;
    
    while (a < 0 || a >= 4) {
        fpurge(stdin);
        error = scanf("%d", &a);
        if (error != 1 || a < 0 || a >= 4 ) {
            printf("please enter 1, 2, or 3: \n\n");
            a = -1;
    // this prompts the user to enter 1, 2, or 3 if the user enters an invalid selection
        }
    
        printf("\nWhat is the first number of your operation? \n\n");
    // this asks for the number to which you are adding, from which you are subtracting, or which you are multiplying
        
        double firstNumber = 7;
        double secondNumber = 8;
        
        scanf("%lf", &firstNumber);
        printf("\nWhat is the second number of your operation? \n\n");
    // this asks for the number to be added to, subtracted from, or multiplied by the first number
        
        scanf("%lf", &secondNumber); {
        
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
        }
            printf("Would you like DAN'S COMMAND LINE CALCULATOR to perform another calculation?(1=Y/2=N)\n\n");
        int anotherCalc = -1;
        int Mistake = -1;
        
            while (anotherCalc < 1 || anotherCalc > 2) {
                fpurge(stdin);
                Mistake = scanf("%d", &anotherCalc);
                if (Mistake != 1 || anotherCalc < 1 || anotherCalc > 2) {
                    printf("Please enter 1 for yes or 2 for no: \n\n");
                    anotherCalc = -1;
                }
        
                while (anotherCalc == 1) {{
                    
                        printf("\nWhich operation would you like to perform? Type 1 for addition, type 2 for subtraction, or type 3 for multiplication: \n\n");
                        // this prompts user to select operation
                        
                        int a = -1;
                        int error = -1;
                        
                        while (a < 0 || a >= 4) {
                            fpurge(stdin);
                            error = scanf("%d", &a);
                            if (error != 1 || a < 0 || a >= 4 ) {
                                printf("please enter 1, 2, or 3: \n\n");
                                a = -1;
                                // this prompts the user to enter 1, 2, or 3 if the user enters an invalid selection
                            }
                            
                            printf("\nWhat is the first number of your operation? \n\n");
                            // this asks for the number to which you are adding, from which you are subtracting, or which you are multiplying
                            
                            double firstNumber = 7;
                            double secondNumber = 8;
                            
                            scanf("%lf", &firstNumber);
                            printf("\nWhat is the second number of your operation? \n\n");
                            // this asks for the number to be added to, subtracted from, or multiplied by the first number
                            
                            scanf("%lf", &secondNumber); {
                                
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
                            }
                            printf("Would you like DAN'S COMMAND LINE CALCULATOR to perform another calculation?(1=Y/2=N)\n\n");
                            scanf("%df", &anotherCalc);}
                                                }}}}
                
                    
        return 0;}

