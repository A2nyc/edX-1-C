#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)

{

  float Input;
  int counter = 0;
  int cash;
  
    do
    // Asks the user for input that has to be a float or will ask again.
    {
     printf("How much change is owed?: ");
     Input = GetFloat();     
    }
    while (Input <= 0.0);
    
    //This will convert the decimal into an Integer
    cash = Input*100;
      
        while (cash >= 25)// Counts number of Quarters and Subtracts that amount
        {
        counter++;
        cash = cash - 25;
        } 
        
        while (cash >= 10)// Counts number of Dimes and Subtracts that amount
        {
        counter++;
        cash = cash - 10;
        } 
        
        while (cash >= 5)// Counts number of Nickles and Subtracts that amount
        {
        counter++;
        cash = cash - 5;
        } 
        
        while (cash >= 1)// Counts number of Pennies and Subtracts that amount
        {
        counter++;
        cash = cash - 1;
        } 

    printf("%d\n", counter + cash);// prints out results by adding up the result of 'cash'
    
    return 0;
}
 
