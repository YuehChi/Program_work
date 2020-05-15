#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
 

int game9() {
    int i=0,count=0,hold;
    int question[9]={0};
    
	printf("\n\tNow you'll have to solve at least 3 problems\n\n\tTake your time!\n\n");
    sleep(2);
    srand(time(NULL));
    
	for (i=1;count<3 && i<=9 ; i++) {//cnditon:the number of questioned correctly is less than 3, and i is less than the ammount of the whole questions
        
        if(question[hold=(rand()%9)]<1){//randomly take question and make sure if specific answers have been chosen
        
        	printf("\t%dth question:\n\n",i);
            if(playRiddle(hold)==1){//recognize if the player answered the questions correctly
                count++;//if the player answered the question correctly, the variable increases
            }
        }
        else{
        	i--;
		}//if the question has been chosen, the iteration has to be run again
        
        if (i==9&&count<3) {
            printf("\tYou failed to answer 3 questions correctly. Game over!\n\n");
            system("pause");
            return 0;
        }
        question[hold]++;//to note that the question has already been chosen
    }
    printf("\tCongratulations! you have answered 3 questions correctly! You win the game!\n\n");
    system("pause");
    return 1;
}
 



