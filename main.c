//
//  main.c
//  DollarAmount
//
//  Created by Zain Hemani on 2014-11-12.
//  Copyright (c) 2014 Zain Hemani. All rights reserved.
//

#include <stdio.h>
//Prototype for pay_amount function
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *toonies, int *lonnie);
//Main method to display the smallest amount of bills and coins
int main (void)
{
    int dollars, twenties, tens, fives, toonies, lonnie;
    //Entering the dollar amount you want to go through the function
    printf("Enter dollar amount: ");
    scanf("%d", &dollars);
    if (dollars >= 1) {
    //Calling the pay_amount function
    pay_amount(dollars, &twenties, &tens, &fives, &toonies, &lonnie);
    //Printing the amount of bills and coins
    printf("Dollar amount %d can be paid with: \n", dollars);
    printf("twenty dollar bills: %d \nten dollar bills: %d \nfive dollar bills: %d \ntoonies: %d \nloonies: %d \n", twenties, tens, fives, toonies, lonnie);
    }
    else {
        printf("Enter a dollar value greater than or equal to 1, next time! \n");
    }
    return 0;
}//End of main function
//pay_amount function to get the smallest amount of bills and coins
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *toonies, int *lonnie)
{
    *twenties = dollars / 20; //Reference/ pointer to twenty declared
    dollars %= 20; //Remainder to get what is left
    
    *tens = dollars / 10; //Reference/ pointer to ten declared
    dollars %= 10; //Remainder to get what is left
    
    *fives = dollars / 5; //Reference/ pointer to five declared
    dollars %= 5; //Remainder to get what is left
    
    *toonies = dollars / 2; //Reference/ pointer to toonies declared
    dollars %= 2; //Remainder to get what is left
    
    *lonnie = dollars; //Reference/ pointer to loonie declared
}//End of class
