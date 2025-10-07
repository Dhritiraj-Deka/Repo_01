#include <stdio.h> 
#include <stdlib.h>
#include <time.h>


int main() 
{
//PART 1- DEFINING
    srand(time(0));
    int Score_PL,N,Score_PC,C;
    Score_PC = (rand()%(5))+17;
    Score_PL = (rand()%11)+1;
do {printf("Your score is %d. Do you want another card? (1 for Yes, 0 for No) ",Score_PL);
    scanf("%d",&N);
//EDIT 1: ADDED getchar() after scanf as the final get char read the input from leftover inpuy after scanf
    getchar();
    if (N==1)
    {
        Score_PL = Score_PL + (rand()%11)+1;
    }
} while (N==1 && Score_PL<21);


printf("\nThe House scored %d \n",Score_PC);

//PART 2- FINAL RESULT
if (Score_PL<21)
    {
        if(Score_PC<Score_PL)
            {
                if(Score_PL != Score_PC){printf("WIN!");}
                else{printf("TIE!");}
            }
        else{printf("LOSE!");}
    }
else {printf("BUST!");}
    

//PART 4- END
    getchar();
    return 0;

} 
