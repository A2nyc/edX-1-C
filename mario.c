#include <stdio.h>
#include <cs50.h>

int main(void)
{

 //First Initialize Input variable a Integer.
 int Input;
 
 //Will ask the user to input an integer and will check if it is within the rules.
    do
    {
    printf("Please choose a Height between 1-23?: ");
    Input = GetInt();
    }
    while (Input < 1 || Input > 23);
    
 //After Input test is True, This will start the Mario Algorithm with nested For loops.
    for(int i = 1; i <= Input; i++)

        {
          //prints spaces while taking 1 away for each space being printed.
          for(int spaceLength = Input - i; spaceLength > 0; spaceLength--)
        
          {
          printf(" ");       
          }
          
          //prints hashes.
          for(int hashCount = 0; hashCount <= i; hashCount++)
          
          {
          printf("#");
          }
          
          //prints new line.
          printf("\n");
        }
        
         
}    

