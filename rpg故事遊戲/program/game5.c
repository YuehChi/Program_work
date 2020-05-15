#include <stdio.h>
#include <stdlib.h>
#include"header.h"

void game5(){
	
	int key=0;//輸入的值 
	int back=0;//回到遊戲 
	//遊戲前言敘述 
	printf("\n\n");
	slowprint("   歡迎來到南宮月*充滿愛的回憶相簿*,",60);
	slowprint("這裡埋藏著所有過去的美好畫面,",60);
	slowprint("請輸入那代表愛的密碼(0000~9999),來獲取那珍貴的回憶畫廊:\n\n",60);
	slowprint("--------------------------------",10);
	printf("請開始尋找真愛密碼:\n\n");
	printf(" 請輸入真愛密碼(0000~9999):");
	scanf("%d",&key);
	
	//真愛版終極密碼 
	while(key!=EOF){
		if(key>1015&&key<9999){
			printf("\n 請再想想是不是太多了\n");
			printf("\n 請輸入真愛密碼(0000~9999):");
			scanf("%d",&key);
		}
		if(key<1015&&key>0000){
			printf("\n 請再想想是不是太少了\n");
			printf("\n 請輸入真愛密碼(0000~9999):");
			scanf("%d",&key);
		}
		
		if(key==1015){
			slowprint("\n 真愛密碼1015代表著10月15日，也是南宮月愛上鷹司的那天。\n",60);
			slowprint("\n 愛的力量真是偉大~\n",60);
			slowprint("\n 恭喜，可以檢查看看資料夾是不是多了一本愛的相簿喔~\n\n",60);
			system("md D:\\final_project\\user\\chara2");
			system("copy D:\\final_project\\allcg\\1起初.png D:\\final_project\\user\\chara2\\1起初.png");
			system("copy D:\\final_project\\allcg\\2煩惱.png D:\\final_project\\user\\chara2\\2煩惱.png");
			system("copy D:\\final_project\\allcg\\3專注.png D:\\final_project\\user\\chara2\\3專注.png");
			system("copy D:\\final_project\\allcg\\4心花怒放.png D:\\final_project\\user\\chara2\\4心花怒放.png");
			system("copy D:\\final_project\\allcg\\5覺察.png D:\\final_project\\user\\chara2\\5覺察.png");
			system("copy D:\\final_project\\allcg\\6無言以對.png D:\\final_project\\user\\chara2\\6無言以對.png");
			system("copy D:\\final_project\\allcg\\7咦.png D:\\final_project\\user\\chara2\\7咦.png");
			system("copy D:\\final_project\\allcg\\8擔心.png D:\\final_project\\user\\chara2\\8擔心.png");
			system("copy D:\\final_project\\allcg\\9自信.png D:\\final_project\\user\\chara2\\9自信.png");
			system("copy D:\\final_project\\allcg\\10努力.png D:\\final_project\\user\\chara2\\10努力.png");
			system("copy D:\\final_project\\allcg\\11下班後的兩人.png D:\\final_project\\user\\chara2\\11下班後的兩人.png");
			system("copy D:\\final_project\\allcg\\12怦然心動.png D:\\final_project\\user\\chara2\\12怦然心動.png");
			system("copy D:\\final_project\\allcg\\13難為情.png D:\\final_project\\user\\chara2\\13難為情.png");
			system("copy D:\\final_project\\allcg\\14擁抱.png D:\\final_project\\user\\chara2\\14擁抱.png");
			system("copy D:\\final_project\\allcg\\15歸途.png D:\\final_project\\user\\chara2\\15歸途.png");
			system("copy D:\\final_project\\allcg\\16回答.png D:\\final_project\\user\\chara2\\16回答.png");
			system("copy D:\\final_project\\allcg\\17安心.png D:\\final_project\\user\\chara2\\17安心.png");
			system("copy D:\\final_project\\allcg\\18接近.png D:\\final_project\\user\\chara2\\18接近.png");
			system("copy D:\\final_project\\allcg\\19窺探.png D:\\final_project\\user\\chara2\\19窺探.png");
			break;
		}
		
		if(key<0000||key>9999){
			printf(" error!\n");
			printf("\n請輸入真愛密碼(0000~9999):");
			scanf("%d",&key);
		}								
	} // end while
	
	slowprint("----------------------------------------------------------\n\n",20);
	slowprint("  請按1回到遊戲觀看結局:",20); 
	scanf("%d",&back);
}
	
