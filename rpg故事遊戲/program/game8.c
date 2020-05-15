#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void game8(){
	system("cls");
	int ans=0;
	int user_ans=0;
	slowprint("\n\n\t\t請問一隻青蛙，三隻蚊子，一隻蛇放在一起有幾隻腳？\n\n",50);
	slowprint("\t\t# ",50);
	scanf("%d",&user_ans);
	if(ans==user_ans){
		slowprint("\n\t恭喜答對了，就是0阿~因為大家都被吃掉了，只剩下蛇了",60);
		system("pause");
	}
	else{
		slowprint("\n\t哈哈，答錯了XD，是0才對喔~因為大家都被吃掉了，只剩下蛇了，蛇是沒有腳的，你知道吧~",60);
		system("pause");
	} 
} 
