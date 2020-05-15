#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//global variable
int first_card,sec_card,thr_card,for_card,fif_card;//separately represent the order of the card you have 
int ans;//answer of the depreciation
int computer_first;//the rand number of first card for computer
int computer_sec;//the rand number of second  card for computer
int computer_thr;//the rand number of third card for computer
int computer_for;//the rand number of forth card for computer


//function prototype	
void again();// play the game again
void round2();// give the second card and judge the cards whether they over 22 or not
void round3();// give the third card and judge the cards whether they over 22 or not
void round4();// give the forth card and judge the cards whether they over 22 or not
void round5();// give the fifth card and declare win or lose when you have five cards
void statue1();//declare win or lose when you have one card
void statue2();//declare win or lose when you have two cards
void statue3();//declare win or lose when you have three cards
void statue4();//declare win or lose when you have four cards

int main(void)
{
	srand(time(NULL));//randomize random number generator using current time 
	

	printf("\nWelcome to play special 22 points!\n");
	printf("Your first number is %d\n",first_card=rand()%13+1);//first card 
	printf("DO you want another card yes=1 or no=2 ?\n");//another card
	scanf("%d",&ans);//answer
	
	if(ans==1){
		
		round2();// give the second card and judge the cards whether they over 21 or not
	
	}// end if	
				
	else if(ans==2){
		
		statue1();//declare win or lose when you have one card	
		
 	}// end else if
    
}// end main

 void statue1()
 {
 	srand(time(NULL));//randomize random number generator using current time 
 	computer_first=rand()%13+1;//computer first card
 	
 	
 	if(computer_first>first_card){//判斷電腦的卡牌是否大於你的卡牌 
 	
		printf("Sorry! You lose the game TAT\n");
		printf("The computer's number is %d and your number is %d\n",computer_first,first_card);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if	
		
	}// end if
	
	if(computer_first==first_card){//判斷電腦的卡牌是否等於你的卡牌 
	
		printf("The game ended in a tie!\n");
		printf("The computer's number is %d and your number is %d\n",computer_first,first_card);
		printf("All your number is %d\n",computer_first);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if	
		
	}// end if
	
	if(computer_first<first_card){//判斷電腦的卡牌是否小於你的卡牌 
	
		printf("Congeration! You win the game \\(^3^)/ \n");
		printf("The computer's number is %d and your number is %d\n",computer_first,first_card);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if	
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if		
		
	}// end if
	
 }// end function statue1
 
void round2()
{
	srand(time(NULL));//randomize random number generator using current time 
	printf("Your second number is %d\n",sec_card=rand()%13+1);//second card
	printf("Now you have %d %d\n",first_card,sec_card);
		
	if(first_card+sec_card>22){//判斷你的卡牌點數總和是否超過22點 
	
		printf("Sorry! You lose the game TAT\n");
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
			}// end if
			
			if(ans==2){
				
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
			}// end if	
			
		}//end if 
		
	printf("Do you want another card yes=1 or no=2 ?\n");//another card
	scanf("%d",&ans);//answer
	
	if(ans==1){
		
		round3();// give the third card and judge the cards whether they over 22 or not
		return;
		
	}// end if
	
	else if(ans==2){
		
		statue2();//declare win or lose when you have two cards
		return;
		
	}// end if
}

void round3()
{
	srand(time(NULL));//randomize random number generator using current time 
	printf("Your third number is %d\n",thr_card=rand()%13+1);//third card
	printf("Now you have %d %d %d\n",first_card,sec_card,thr_card);
	
	if(first_card+sec_card+thr_card>22){//判斷你的卡牌點數總和是否超過22點 
	
		printf("Sorry! You lose the again TAT \n");
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if	
		
	}// end if
	
	printf("Do you want another card yes=1 or no=2 ?\n");//another card
	scanf("%d",&ans);//answer
	
	if(ans==1){
		
		round4();// give the forth card and judge the cards whether they over 22 or not
		return;
		
	}// end if
	
	else if(ans==2){
		
		statue3();//declare win or lose when you have three cards
		return;
		
	}// end if
	
}// end function round3

void round4()
{
	srand(time(NULL));//randomize random number generator using current time 
	printf("Your forth number is %d\n",for_card=rand()%13+1);//forth card
	printf("Now you have %d %d %d %d\n",first_card,sec_card,thr_card,for_card);
	
	if(first_card+sec_card+thr_card+for_card>22){//判斷你的卡牌點數總和是否超過22點 
	
		printf("Sorry! You lose the again TAT \n");
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
	
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if	
		
	}// end if
	
	printf("DO you want another card yes=1 or no=2 ?\n");//another card
	scanf("%d",&ans);//answer
	
	if(ans==1){
		
		round5();// give the fifth card and declare win or lose when you have five cards
		return;
		
	}// end if
	
	else if(ans==2){
		
		statue4();//declare win or lose when you have four cards
		return;
		
	}// end if
	
}// end function round4

void round5(){
	
	srand(time(NULL));//randomize random number generator using current time 
	printf("Your fifth number is %d\n",fif_card=rand()%13+1);//fifth card
	printf("Now you have %d %d %d %d %d\n",first_card,sec_card,thr_card,for_card,fif_card);
	
	if(first_card+sec_card+thr_card+for_card+fif_card>22){//判斷你的卡牌點數總和是否超過22點 
	
		printf("Sorry! You lose the again TAT \n");
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if	
		
	}// end if
	
	else{//如果你的卡牌點數總和小於等於22點，將贏得遊戲 
	
		printf("Congeration! You win the game \\(^#^)/\n");
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if	
		
	}// end else
	
}// end function round5

void statue2(){
	
	srand(time(NULL));//randomize random number generator using current time 
	computer_first=rand()%13+1;//computer first card
	computer_sec=rand()%13+1;//computer second card
	
	if(computer_first+computer_sec>22){//判斷電腦的卡牌是否大於22點
	
		printf("Congeration! You win the game\\(^*^)/\n");
		printf("The computer's number is %d %d and your number is %d %d\n",computer_first,computer_sec,first_card,sec_card);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if	
		
	}// end if
	
 	else if(computer_first+computer_sec>first_card+sec_card){//判斷電腦的卡牌是否大於你的卡牌
	  
		printf("Sorry! You lose the game TAT\n");
		printf("The computer's number is %d %d and your number is %d %d \n",computer_first,computer_sec,first_card,sec_card);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if	
		
	}// end else if 
	
	else if(computer_first+computer_sec==first_card+sec_card){//判斷電腦的卡牌是否等於你的卡牌 
	
		printf("The game ended in a tie\n");
		printf("The computer's number is %d %d and your number is %d %d \n",computer_first,computer_sec,first_card,sec_card);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if	
		
	}// end else if
	
	else if(computer_first+computer_sec<first_card+sec_card){//判斷電腦的卡牌是否小於你的卡牌 
	
		printf("Congeration! You win the game\\(^*^)/\n");
		printf("The computer's number is %d %d and your number is %d %d \n",computer_first,computer_sec,first_card,sec_card);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if	
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if		
				
	}// end else if
	
}// end function statue2

void statue3(){
	
	srand(time(NULL));//randomize random number generator using current time 
	computer_first=rand()%13+1;//computer first card
	computer_sec=rand()%13+1;//computer second card
	computer_thr=rand()%13+1;//computer third card
	 
	if(computer_first+computer_sec+computer_thr>22&&first_card+sec_card+thr_card<=22){//判斷電腦的卡牌是否大於22點 
	
		printf("Congeration! You win the game\\(^8^)/\n");
		printf("The computer's number is %d %d %d and your number is %d %d %d\n",computer_first,computer_sec,computer_thr,first_card,sec_card,thr_card);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if	
				
	}// end if	
	
 	else if(computer_first+computer_sec+computer_thr>first_card+sec_card+thr_card){//判斷電腦的卡牌是否大於你的卡牌 
 	
		printf("Sorry! You lose the game TAT\n");
		printf("The computer's number is %d %d %d and your number is %d %d %d\n",computer_first,computer_sec,computer_thr,first_card,sec_card,thr_card);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if	
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if	
		
	}// end else if	
	
	else if(computer_first+computer_sec+computer_thr==first_card+sec_card+thr_card){//判斷電腦的卡牌是否等於你的卡牌 
	
		printf("The game ended in a tie\n");
		printf("The computer's number is %d %d %d and your number is %d %d %d\n",computer_first,computer_sec,computer_thr,first_card,sec_card,thr_card);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if	
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if	
		
	}// end else if	
	
	else if(computer_first+computer_sec+computer_thr<first_card+sec_card+thr_card){//判斷電腦的卡牌是否小於你的卡牌 
	
		printf("Congeration! You win the game\\(^8^)/\n");
		printf("The computer's number is %d %d %d and your number is %d %d %d\n",computer_first,computer_sec,computer_thr,first_card,sec_card,thr_card);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if	
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if		
			
	}// end else if		
	
}// end function statue3

void statue4(){
	
	srand(time(NULL));//randomize random number generator using current time 
	computer_first=rand()%13+1;//computer first card
	computer_sec=rand()%13+1;//computer sceond card
	computer_thr=rand()%13+1;//computer third card
	computer_for=rand()%13+1;//computer forth card
	 
	if(computer_first+computer_sec+computer_thr+computer_for>22){//判斷電腦的卡牌是否大於22點
	
		printf("Congeration! You win the game\\(^7^)/\n");
		printf("The computer's number is %d %d %d %d and your number is %d %d %d %d \n",computer_first,computer_sec,computer_thr,computer_for,first_card,sec_card,thr_card,for_card);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if		
				
	}// end if	
	
 	else if(computer_first+computer_sec+computer_thr+computer_for>first_card+sec_card+thr_card+for_card){//判斷電腦的卡牌是否大於你的卡牌 
 	
		printf("Sorry! You lose the game TAT\n");
		printf("The computer's number is %d %d %d %d and your number is %d %d %d %d \n",computer_first,computer_sec,computer_thr,computer_for,first_card,sec_card,thr_card,for_card);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if	
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if	
		
	}// end else if	
	
	else if(computer_first+computer_sec+computer_thr+computer_for==first_card+sec_card+thr_card+for_card){//判斷電腦的卡牌是否等於你的卡牌 
	
		printf("The game ended in a tie\n");
		printf("The computer's number is %d %d %d %d and your number is %d %d %d %d \n",computer_first,computer_sec,computer_thr,computer_for,first_card,sec_card,thr_card,for_card);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if	
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if	
		
	}// end else if	
	
	else if(computer_first+computer_sec+computer_thr+computer_for<first_card+sec_card+thr_card+for_card){//判斷電腦的卡牌是否小於你的卡牌 
	
		printf("Congeration! You win the game\\(^7^)/\n");
		printf("The computer's number is %d %d %d %d and your number is %d %d %d %d \n",computer_first,computer_sec,computer_thr,computer_for,first_card,sec_card,thr_card,for_card);
		printf("\nDo you want to play again yes=1 or no= 2?\n");
		scanf("%d",&ans);//answer
		
		if(ans==1){
			
			again();// play the game again
			return;
			
		}// end if	
		
		if(ans==2){
			
			printf("Goodbye! See you next time~(>_<)~");
			return;
			
		}// end if		
					
	}// end else if		
}// end function statue4

 void again(){
 	
 	srand(time(NULL));//randomize random number generator using current time 
	
	printf("\nWelcome to play special 22 points!\n");
	printf("Your first number is %d\n",first_card=rand()%13+1);//first card 
	printf("Do you want another card yes=1 or no=2 ?\n");//another card
	scanf("%d",&ans);//answer
	
	if(ans==1){
		
		round2();// give the second card and judge the cards whether they over 21 or not
	
	}// end if	
				
	else if(ans==2){
		
		statue1();//declare win or lose when you have one card
			
 	}// end else if
 	
 }// end function again
 
 
 
 
