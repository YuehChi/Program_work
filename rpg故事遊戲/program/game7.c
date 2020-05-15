#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include"header.h" 
int game7(){
	int num;
	int i;
	int ans=1;
	int user_ans;
	srand(time(NULL));//with time change
	num=rand()%10+1;//random create number
	for(i=1;i<=num;i++){
		ans = ans * i; 
	}
	printf("\n\n\t\t所謂勇者要越過難關才能繼續遊戲...\n\n");
	printf("\t\t所以我們來玩吧 \n\n");
	printf("\t\t%d ! = ", num);
	scanf("%d",&user_ans);
	if(user_ans==ans){
		slowprint("\n\t\t恭喜你...贏了挑戰\n\n",50);
		system("pause");
		return 1;
	}
	else if(user_ans!=ans){
		slowprint("\n\t\t可惜...挑戰失敗\n\n",50);
		system("pause");
		return 0;
	}
} 

