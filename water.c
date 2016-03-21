/* 
Author: Ariel E.  
Date: Spring 2016
Class: CS50
File: vigenere.c 
 
*/ 


#include <stdio.h>
#include <cs50.h>

int math(int i);

int main(void)
{

int input;

    do
   {
       printf("Enter how many minutes you were in the shower: ");
       input = GetInt();
   }
   while (input < 1);
   
    int bottles = math(input);
    printf("Bottles of water used: %i \n", bottles);

    return 0;
}

int math(int i)   
   {
   int ounces = 128;
   float gallonsPerMinute = 1.5;
   int waterBottle = 16;  
   int total = gallonsPerMinute * ounces / waterBottle * i;
   
   return total;
   }

