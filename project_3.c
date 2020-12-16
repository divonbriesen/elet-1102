/*************************************************************************************

Matthew DiVittorio

Project 3

**************************************************************************************/






#include <stdio.h>

int main()
{
    // Inputs //
    float Credit;
    int Day_ST;         //Start time AM or Pm//
    int Hours_ST;       // Start Time Hour??
    int Minutes_ST;     //Start Time Minutes//
    int Exit_ST;        //Start Exit//
    int Exit_SP;        //Stop Exit//
    int Exit_Diff;      // Difference in Exits.//
    int Day_Alt;        // Weekday or Weekend/Holiday//
    float Charge;       //This is the total amount of the toll charge as it moves through the code//
    int seats;          // Number of People in the Car//
    float Balance;
    // Gathering user Information //

        Credit = 33.00;

    printf("Thank you for choosing this awful toll road we put in!!!!!!!!!!!!!!.\n\nWe can't wait to show much how much you will be paying just to drive on a road.\n\n");

    printf("Let's get a little information from you.\n\n What time of day is it?\n\n(AM press 0)\t(PM press 1)\n\n");
    scanf ("%d", &Day_ST);

    printf("Now enter the time.\n\n I know, I should probably be programed to know this.\n\nI AM PROGRAMED TO AQUIRE IF YOU LIED OR NOT SO DON'T YOU LIE\n\n");

    printf("Please enter the time in the following format\n\n HH:MM\n\n");
    scanf ("%d:%d", &Hours_ST, &Minutes_ST);
    // Converting The Time //***************************************************//
   
    if (Day_ST < 1)
    {
        Hours_ST  = Hours_ST + 0;
    }
    else 
    {
        Hours_ST  = Hours_ST + 12;
    }
        
    printf("%d:%d",Hours_ST,Minutes_ST);
    // Time of Type of Day Charges //****************************************************//

    printf("\n\nAgain I should know this.\n\n Is it a Holiday or Weekend?\n\n");

    printf("(No press 0)\t(Yes press 1)\n\n");
    scanf("%d", &Day_Alt);

        
        if (Day_Alt < 1)
        {
            if (Hours_ST < 6)
            {
                Charge = 1;
            }
    
            else if (Hours_ST >= 6 && Hours_ST < 10)
            {
                Charge = 2.65;
            }
            
            else if (Hours_ST >= 10 && Hours_ST < 18)
            {
                Charge = 2.35;
            }
            
            else 
            {
                Charge = 2.23;
            }
        
        }
        
    else 
        {
            if (Hours_ST < 8)
            {
                Charge = 1;
            }
            
            else if (Hours_ST >= 8 && Hours_ST < 12)
            {
                Charge = 2.05;
            }
            
            else if (Hours_ST >= 12 && Hours_ST < 16)
            {
                Charge = 2.45;
            }
            
            else if (Hours_ST >= 16 && Hours_ST < 19)
            {
                Charge = 2.60;
            }
            
            else if (Hours_ST >= 19 && Hours_ST < 22)
            {
                Charge = 2.05;
            }
            
            else 
            {
                Charge = 0.55;
            }
            
        }
        
    // Time of Type of Day Charges //****************************************************//
        


    printf("\n\nI am goint to need more info in order to charge you more money.\n\n");

    printf("Please enter your starting exit.\n\n");

    scanf("%d", &Exit_ST);

    printf("Please enter your  exit you will be getting of at.\n\n");

    scanf("%d", &Exit_SP);

    Exit_Diff = Exit_ST - Exit_SP;
        
    Charge = Charge + (Exit_Diff * .10);
    // Bonus and Conclusion //****************************************************//

    printf("\n\nHow many people do you have in the car?\n\n");
    scanf("%d", &seats);

    if(seats >= 3)
    {
        Charge = Charge - .5;
    }
    else
    {
        Charge = Charge - 0;
    }

    Balance = Credit - Charge;

    printf("Here is the fun Part!\n\n THE BILL!\n\n");

    printf("|\tAccount\t$%.2f\n", Credit);
    printf("|\tCharges\t$%.2f\n", Charge);
    printf("|\tRemaing Balance\t$%.2f\n", Balance);

    return 0; 