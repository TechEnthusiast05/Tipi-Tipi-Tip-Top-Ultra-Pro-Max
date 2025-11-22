#include<stdio.h>

int main()
{
    char cl; 
    int n;

    printf("Select any one colour:\n");
    printf("\n1.Red \n2.Blue \n3.Green \n4.Yellow");

    printf("\nEnter your choice (1-4): ");     
    scanf("%c", &cl);    // yaha pe instead of %s use %c                       

    printf("You have selected %c", cl);

    printf("\nEnter any number between 1 -4 : ");
    scanf("%d", &n);

// case wala thing is only applicable under the switch case statement u cannot use it directly

    if(cl == '1')        
    {
        if(n==1)
            printf("\nGood!");
        else if(n==2)
            printf("\nDonkey");
        else if(n==3)
            printf("\nWealthy!");
        else if(n==4)
            printf("\nSweet!");
        else
            printf("\nInvalid Input");
    }

   
    else if(cl == '2')     
    {
        if(n==1)
            printf("\nGreedy");
        else if (n==2)
            printf("\nMonkey");
        else if(n==3)
            printf("\nHandsome!");
        else if(n==4)
            printf("\nPagal!");
        else
            printf("\nInvalid Input");
    }


    else if(cl == '3')    
    {
        if(n==1)
            printf("\nMagical");
        else if (n==2)
            printf("\nLosser");
        else if(n==3)
            printf("\nHot!");
        else if(n==4)
            printf("\nStupid!");
        else
            printf("\nInvalid Input");
    }

   
    else if(cl == '4')    
    {
        if(n==1)
            printf("\nPretty!");
        else if (n==2)
            printf("\nlovely:)");
        else if(n==3)
            printf("\nSmart!");
        else if(n==4)
            printf("\nIdiot!");
        else
            printf("\nInvalid Input");
    }

    else
    {
        printf("\nInvalid Colour Input");   
    }

    return 0;
}
