#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include"header.h"

//global variable
int first_card,sec_card,thr_card,for_card,fif_card;//separately represent the order of the card you have 
int ans;//answer of the depreciation
int computer_first;//the rand number of first card for computer
int computer_sec;//the rand number of second  card for computer
int computer_thr;//the rand number of third card for computer
int computer_for;//the rand number of forth card for computer


void game1(){
	
	system("cls");
	//遊戲前言敘述 
	srand(time(NULL));//randomize random number generator using current time 
	slowprint("\n Because you enter the wrong string,so\n",60);
	slowprint("\n  Welcome to play special 22 points!\n",60);
	slowprint("\n  In this game,your rival is computer\n",60);
	slowprint("\n So,good luck and be careful! Don't exceed 22\n",60);
	printf("\nYour first number is %d\n",first_card=rand()%13+1);//first card 
	printf("\nDO you want another card yes=1 or no=2 ?\n");//another card
	scanf("%d",&ans);//answer
	
	if(ans==1){
		
		srand(time(NULL));//randomize random number generator using current time 
		printf("Your second number is %d\n",sec_card=rand()%13+1);//second card
		printf("Now you have %d %d\n",first_card,sec_card);
			
		if(first_card+sec_card>22){//判斷你的卡牌點數總和是否超過22點 
			printf("Sorry! You lose the game TAT\n");
			printf("\nDo you want to play again yes=1 or no= 2?\n");
			scanf("%d",&ans);//answer
			if(ans==1){
				again();// play the game again
			}// end if
			if(ans==2){
				goto stop; 
				}// end if	
			}//end if 
			
		printf("Do you want another card yes=1 or no=2 ?\n");//another card
		scanf("%d",&ans);//answer
		
		if(ans==1){
			srand(time(NULL));//randomize random number generator using current time 
			printf("Your third number is %d\n",thr_card=rand()%13+1);//third card
			printf("Now you have %d %d %d\n",first_card,sec_card,thr_card);
			
			if(first_card+sec_card+thr_card>22){//判斷你的卡牌點數總和是否超過22點 
				printf("Sorry! You lose the again TAT \n");
				printf("\nDo you want to play again yes=1 or no= 2?\n");
				scanf("%d",&ans);//answer
				if(ans==1){
					again();// play the game again
				}// end if
				if(ans==2){
					goto stop; 
				}// end if	
			}// end if
			
			printf("Do you want another card yes=1 or no=2 ?\n");//another card
			scanf("%d",&ans);//answer
			
			if(ans==1){
				srand(time(NULL));//randomize random number generator using current time 
				printf("Your forth number is %d\n",for_card=rand()%13+1);//forth card
				printf("Now you have %d %d %d %d\n",first_card,sec_card,thr_card,for_card);
				
				if(first_card+sec_card+thr_card+for_card>22){//判斷你的卡牌點數總和是否超過22點 
				printf("Sorry! You lose the again TAT \n");
				printf("\nDo you want to play again yes=1 or no= 2?\n");
					scanf("%d",&ans);//answer
					if(ans==1){
						again();// play the game again
					}// end if
					if(ans==2){
						goto stop; 
					}// end if	
				}// end if
				
				printf("DO you want another card yes=1 or no=2 ?\n");//another card
				scanf("%d",&ans);//answer
				
				if(ans==1){
					srand(time(NULL));//randomize random number generator using current time 
					printf("Your fifth number is %d\n",fif_card=rand()%13+1);//fifth card
					printf("Now you have %d %d %d %d %d\n",first_card,sec_card,thr_card,for_card,fif_card);
					
					if(first_card+sec_card+thr_card+for_card+fif_card>22){//判斷你的卡牌點數總和是否超過22點 
						printf("Sorry! You lose the again TAT \n");
						printf("\nDo you want to play again yes=1 or no= 2?\n");
						scanf("%d",&ans);//answer
						if(ans==1){
							again();// play the game again
						}// end if
						if(ans==2){
							goto stop; 
						}// end if	
					}// end if
					
					else{//如果你的卡牌點數總和小於等於22點，將贏得遊戲 
						printf("Congration! You win the game \\(^#^)/\n");
						printf("\nDo you want to play again yes=1 or no= 2?\n");
						scanf("%d",&ans);//answer
						if(ans==1){
							again();// play the game again
						}// end if
						if(ans==2){
							goto stop; 
						}// end if	
					}// end else		
				}// end if
				
				else if(ans==2){
					srand(time(NULL));//randomize random number generator using current time 
					computer_first=rand()%13+1;//computer first card
					computer_sec=rand()%13+1;//computer sceond card
					computer_thr=rand()%13+1;//computer third card
					computer_for=rand()%13+1;//computer forth card
					 
					if(computer_first+computer_sec+computer_thr+computer_for>22){//判斷電腦的卡牌是否大於22點
						printf("Congration! You win the game\\(^7^)/\n");
						printf("The computer's number is %d %d %d %d and your number is %d %d %d %d \n",computer_first,computer_sec,computer_thr,computer_for,first_card,sec_card,thr_card,for_card);
						printf("\nDo you want to play again yes=1 or no= 2?\n");
						scanf("%d",&ans);//answer
						if(ans==1){
							again();// play the game again
						}// end if
						if(ans==2){
							goto stop; 
						}// end if				
					}// end if	
					
				 	else if(computer_first+computer_sec+computer_thr+computer_for>first_card+sec_card+thr_card+for_card){//判斷電腦的卡牌是否大於你的卡牌 
						printf("Sorry! You lose the game TAT\n");
						printf("The computer's number is %d %d %d %d and your number is %d %d %d %d \n",computer_first,computer_sec,computer_thr,computer_for,first_card,sec_card,thr_card,for_card);
						printf("\nDo you want to play again yes=1 or no= 2?\n");
						scanf("%d",&ans);//answer
						if(ans==1){
							again();// play the game again
						}// end if	
						if(ans==2){
							goto stop; 
						}// end if	
					}// end else if	
					
					else if(computer_first+computer_sec+computer_thr+computer_for==first_card+sec_card+thr_card+for_card){//判斷電腦的卡牌是否等於你的卡牌 
						printf("The game ended in a tie\n");
						printf("The computer's number is %d %d %d %d and your number is %d %d %d %d \n",computer_first,computer_sec,computer_thr,computer_for,first_card,sec_card,thr_card,for_card);
						printf("\nDo you want to play again yes=1 or no= 2?\n");
						scanf("%d",&ans);//answer
						if(ans==1){
							again();// play the game again
						}// end if	
						if(ans==2){
							goto stop; 
						}// end if	
					}// end else if	
					
					else if(computer_first+computer_sec+computer_thr+computer_for<first_card+sec_card+thr_card+for_card){//判斷電腦的卡牌是否小於你的卡牌 
						printf("Congration! You win the game\\(^7^)/\n");
						printf("The computer's number is %d %d %d %d and your number is %d %d %d %d \n",computer_first,computer_sec,computer_thr,computer_for,first_card,sec_card,thr_card,for_card);
						printf("\nDo you want to play again yes=1 or no= 2?\n");
						scanf("%d",&ans);//answer
						if(ans==1){
							again();// play the game again
						}// end if	
						if(ans==2){
							goto stop; 
						}// end if					
					}// end else if		
	
				}// end if
			}// end if
	
			else if(ans==2){
				srand(time(NULL));//randomize random number generator using current time 
				computer_first=rand()%13+1;//computer first card
				computer_sec=rand()%13+1;//computer second card
				computer_thr=rand()%13+1;//computer third card
				 
				if(computer_first+computer_sec+computer_thr>22&&first_card+sec_card+thr_card<=22){//判斷電腦的卡牌是否大於22點 
					printf("Congration! You win the game\\(^8^)/\n");
					printf("The computer's number is %d %d %d and your number is %d %d %d\n",computer_first,computer_sec,computer_thr,first_card,sec_card,thr_card);
					printf("\nDo you want to play again yes=1 or no= 2?\n");
					scanf("%d",&ans);//answer
					if(ans==1){
						again();// play the game again
					}// end if
					if(ans==2){
						goto stop; 
					}// end if			
				}// end if	
				
			 	else if(computer_first+computer_sec+computer_thr>first_card+sec_card+thr_card){//判斷電腦的卡牌是否大於你的卡牌 
					printf("Sorry! You lose the game TAT\n");
					printf("The computer's number is %d %d %d and your number is %d %d %d\n",computer_first,computer_sec,computer_thr,first_card,sec_card,thr_card);
					printf("\nDo you want to play again yes=1 or no= 2?\n");
					scanf("%d",&ans);//answer
					if(ans==1){
						again();
					}// end if	
					if(ans==2){
						goto stop; 
					}// end if	
				}// end else if	
				
				else if(computer_first+computer_sec+computer_thr==first_card+sec_card+thr_card){//判斷電腦的卡牌是否等於你的卡牌 
					printf("The game ended in a tie\n");
					printf("The computer's number is %d %d %d and your number is %d %d %d\n",computer_first,computer_sec,computer_thr,first_card,sec_card,thr_card);
					printf("\nDo you want to play again yes=1 or no= 2?\n");
					scanf("%d",&ans);//answer
					if(ans==1){
						again();// play the game again
					}// end if	
					if(ans==2){
						goto stop; 
					}// end if	
				}// end else if	
				
				else if(computer_first+computer_sec+computer_thr<first_card+sec_card+thr_card){//判斷電腦的卡牌是否小於你的卡牌 
					printf("Congration! You win the game\\(^8^)/\n");
					printf("The computer's number is %d %d %d and your number is %d %d %d\n",computer_first,computer_sec,computer_thr,first_card,sec_card,thr_card);
					printf("\nDo you want to play again yes=1 or no= 2?\n");
					scanf("%d",&ans);//answer
					if(ans==1){
						again();// play the game again
					}// end if	
					if(ans==2){
						goto stop; 
					}// end if			
				}// end else if		
			}// end if
		}// end if
		
		else if(ans==2){
			srand(time(NULL));//randomize random number generator using current time 
			computer_first=rand()%13+1;//computer first card
			computer_sec=rand()%13+1;//computer second card
	
			if(computer_first+computer_sec>22){//判斷電腦的卡牌是否大於22點
				printf("Congration! You win the game\\(^*^)/\n");
				printf("The computer's number is %d %d and your number is %d %d\n",computer_first,computer_sec,first_card,sec_card);
				printf("\nDo you want to play again yes=1 or no= 2?\n");
				scanf("%d",&ans);//answer
				if(ans==1){
					again();// play the game again
				}// end if
				if(ans==2){
					goto stop; 
				}// end if	
			}// end if
			
			
		 	else if(computer_first+computer_sec>first_card+sec_card){//判斷電腦的卡牌是否大於你的卡牌 
				printf("Sorry! You lose the game TAT\n");
				printf("The computer's number is %d %d and your number is %d %d \n",computer_first,computer_sec,first_card,sec_card);
				printf("\nDo you want to play again yes=1 or no= 2?\n");
				scanf("%d",&ans);//answer
				if(ans==1){
					again();// play the game again
				}// end if
				if(ans==2){
					goto stop; 
				}// end if	
			}// end else if 
			
			else if(computer_first+computer_sec==first_card+sec_card){//判斷電腦的卡牌是否等於你的卡牌 
				printf("The game ended in a tie\n");
				printf("The computer's number is %d %d and your number is %d %d \n",computer_first,computer_sec,first_card,sec_card);
				printf("\nDo you want to play again yes=1 or no= 2?\n");
				scanf("%d",&ans);//answer
				if(ans==1){
					again();// play the game again
				}// end if
				if(ans==2){
					goto stop; 
				}// end if	
			}// end else if
			
			else if(computer_first+computer_sec<first_card+sec_card){//判斷電腦的卡牌是否小於你的卡牌 
				printf("Congration! You win the game\\(^*^)/\n");
				printf("The computer's number is %d %d and your number is %d %d \n",computer_first,computer_sec,first_card,sec_card);
				printf("\nDo you want to play again yes=1 or no= 2?\n");
				scanf("%d",&ans);//answer
				if(ans==1){
					again();// play the game again
				}// end if	
				if(ans==2){
					goto stop; 
				}// end if				
			}// end else if
		}// end if
	
	}// end if	
				
	else if(ans==2){
		
		srand(time(NULL));//randomize random number generator using current time 
	 	computer_first=rand()%13+1;//computer first card
	 	
	 	
	 	if(computer_first>first_card){//判斷電腦的卡牌是否大於你的卡牌 
			printf("Sorry! You lose the game TAT\n");
			printf("The computer's number is %d and your number is %d\n",computer_first,first_card);
			printf("\nDo you want to play again yes=1 or no= 2?\n");
			scanf("%d",&ans);//answer
			if(ans==1){
				again();// play the game again
			}// end if
			if(ans==2){
				goto stop; 
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
			}// end if
			if(ans==2){
				goto stop; 
			}// end if	
			
		}// end if
		
		if(computer_first<first_card){//判斷電腦的卡牌是否小於你的卡牌 
			printf("Congration! You win the game \\(^3^)/ \n");
			printf("The computer's number is %d and your number is %d\n",computer_first,first_card);
			printf("\nDo you want to play again yes=1 or no= 2?\n");
			scanf("%d",&ans);//answer
			if(ans==1){
				again();// play the game again
			}// end if	
			if(ans==2){
				goto stop; 
			}// end if		
		}// end if
 	}// end else if
 	stop: slowprint( "	Goodbye! See you next time~(>_<)~",60); 
	system("cls"); 
}


 
