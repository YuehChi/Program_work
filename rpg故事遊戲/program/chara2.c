#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include"header.h"

void chara2(){
	FILE *file1;//讀檔序章 
	FILE *file2;//讀檔第一章之一 
	FILE *file3;//讀檔第一章之二 
	FILE *file4;//讀檔第一章之三 
	FILE *file5;//讀檔第一章之四 
	FILE *file6;//讀檔第一章之五 
	FILE *file7;//讀檔第一章之六 
	FILE *file8;//讀檔第二章之一 
	FILE *file9;//讀檔第二章之二 
	FILE *file10;//讀檔第二章之三 
	FILE *file11;//讀檔第二章之四 
	FILE *file12;//讀檔第二章之五 
	FILE *file13;//讀檔第二章之六 
	FILE *file14;//讀檔第二章之七 
	FILE *end1;//讀檔結局一 
	FILE *end2;//讀檔結局二 
	char wait[100];
	char keep[100];//等待銜接字,輸入錯將進入遊戲1  
	char keep2[100];//等待銜接字 2,輸入錯將進入遊戲1 
	char keep3[100];//等待銜接字 3,輸入錯將進入遊戲1 
	char keep4[100];//等待銜接字 4,輸入錯將進入遊戲1  
	char keep5[100];//等待銜接字 5,輸入錯將進入遊戲1  
	char keep6[100];//等待銜接字 6,輸入錯將進入遊戲1  
	int ans=0;//回答問題 
	int count=0;//計算好感度 
	int i;
	
	system("color 74");
	if( (file1= fopen("序章.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file1)){
	    	fscanf(file1,"%s ",string);
			printf("\n  %s \n",string);
		}
	}

	fclose(file1);
	
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter a\\(>~<)/:");
	scanf("%s",&keep);
	
	i=0;
	while(keep[i]!='\0'){
		if(keep[i]!='a'){
			game1();//如果沒有輸入正確字母將進入小遊戲 
		}
	i++;
	} 
	printf("\n");
	
	system("cls");
	for( i=0;i<100;i++){
		printf("*");
	}
	
	if( (file2= fopen("第一章之一.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file2)){
	    	fscanf(file2,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file2);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter b\\(>@<)/:");
	scanf("%s",&keep2);
	i=0;
	while(keep2[i]!='\0'){
		if(keep2[i]!='b'){
			game1();//如果沒有輸入正確字母將進入小遊戲
		}
	i++;
	} 
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");	
	
	slowprint("\n請選擇你想回復的話!\n",60);
	slowprint("\n 南宮月：\n",60);
	slowprint("\n(1)怎樣就是完成不了…\n",60);
	slowprint("\n(2)感覺還要一些時間才能完成哪…\n",60);
	slowprint("\n(3)不知道有沒有什麼資料可以參考哪…\n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//計算好感度 
    switch(ans){
    	
    	case 1:
    		count= count+5;
    		break;
    	case 2:
    		count= count+3;
    		break;
    	case 3:
    		count= count+4;
    		break;
	}
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n 錯誤!請輸入正確的數字~");
		scanf("%d",&ans);
	}
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	
	slowprint("\n我苦笑著，試圖輕描淡寫地帶過，一面看著鷹司。\n",60);
	slowprint("\n南宮月：鷹司你怎麼回來了？\n",60);
	slowprint("\n鷹司：快到家的時候，發現手機忘了拿啊。\n",60);
	slowprint("\n鷹司走近自己的辦公桌，拿起了手機給我看。\n",60);
	slowprint("\n鷹司：果然在這。\n",60);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter c\\(>3<)/:");
	scanf("%s",&keep3);
	i=0;
	while(keep3[i]!='\0'){
		if(keep3[i]!='c'){
			game1();//如果沒有輸入正確字母將進入小遊戲
		}
	i++;
	} 
	
	printf("\n");
	
	for( i=0;i<100;i++){
		printf("*");
	}
	printf("\n");	
	slowprint("\n請選擇你想回復的話!\n",60);
	slowprint("\n 南宮月：\n",60);
	slowprint("\n(1)鷹司其實意外有點迷糊?\n",60);
	slowprint("\n(2)鷹司也會忘記東西的啊? \n",60);
	slowprint("\n(3)鷹司在工作上明明就很能幹，但卻很不穩重呢! \n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//計算好感度 
    switch(ans){
    	
    	case 1:
    		count= count+4;
    		break;
    	case 2:
    		count= count+3;
    		break;
    	case 3:
    		count= count+5;
    		break;
	}
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n 錯誤!請輸入正確的數字~");
		scanf("%d",&ans);
	}
		
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file3= fopen("第一章之二.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file3)){
	    	fscanf(file3,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file3);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter abc\\(>4<)/:");
	
	scanf("%s",&wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n請選擇你想回復的話!\n",60);
	slowprint("\n 南宮月：\n",60);
	slowprint("\n(1)真的很感謝你，鷹司。\n",60);
	slowprint("\n(2)謝謝你，鷹司。你實在幫了我一個大忙。 \n",60);
	slowprint("\n(3)謝謝鷹司你的幫忙。 \n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//計算好感度 
    switch(ans){
    	
    	case 1:
    		count= count+3;
    		break;
    	case 2:
    		count= count+5;
    		break;
    	case 3:
    		count= count+4;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n 錯誤!請輸入正確的數字~");
		scanf("%d",&ans);
	}
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n南宮月：但是卻害你留到這麼晚。\n",60);
	slowprint("\n鷹司：別在意。\n",60);
	slowprint("\n鷹司站了起來，將椅子歸位後露出了微笑。\n",60);
	slowprint("\n鷹司：我們是同期的吧？ 怎麼能袖手旁觀呢?\n",60);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter worry\\(>3<)/:");
	scanf("%s",wait);
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n請選擇你想回復的話!\n",60);
	slowprint("\n 南宮月：\n",60);
	slowprint("\n(1)是這樣子的嗎?好像只有鷹司會這麼說呢?\n",60);
	slowprint("\n(2)好像只有鷹司會這樣對我說。 \n",60);
	slowprint("\n(3)會這樣對我說的就只有鷹司了。 \n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//計算好感度 
    switch(ans){
    	
    	case 1:
    		count= count+3;
    		break;
    	case 2:
    		count= count+4;
    		break;
    	case 3:
    		count= count+5;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n 錯誤!請輸入正確的數字~");
		scanf("%d",&ans);
	}
	
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file4= fopen("第一章之三.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file4)){
	    	fscanf(file4,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file4);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter love\\(>5<)/:");
	
	scanf("%s",&wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file5= fopen("第一章之四.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file5)){
	    	fscanf(file5,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file5);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter y\\(>6<)/:");
	
	scanf("%s",&keep4);
	
	
	i=0;
	while(keep4[i]!='\0'){
		if(keep4[i]!='y'){
			system("cls");
			game1();//如果沒有輸入正確字母將進入小遊戲
		}
	i++;
	} 
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file6= fopen("第一章之五.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file6)){
	    	fscanf(file6,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file6);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter n\\(>7<)/:");
	
	scanf("%s",&keep5);
	
	i=0;
	while(keep5[i]!='\0'){
		if(keep5[i]!='n'){
			system("cls");
			game1();//如果沒有輸入正確字母將進入小遊戲
		}
	i++;
	} 
	
	printf("\n");
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n請選擇你想回復的話!\n",60);
	slowprint("\n 南宮月：\n",60);
	slowprint("\n(1)啊…嗯…… \n",60);
	slowprint("\n(2) ……還行… \n",60);
	slowprint("\n(3) …… \n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//計算好感度 
    switch(ans){
    	
    	case 1:
    		count= count+5;
    		break;
    	case 2:
    		count= count+4;
    		break;
    	case 3:
    		count= count+3;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n 錯誤!請輸入正確的數字~");
		scanf("%d",&ans);
	}
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file7= fopen("第一章之六.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file7)){
	    	fscanf(file7,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file7);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter k\\(>8<)/:");
	
	scanf("%s",&keep6);
	
	
	i=0;
	while(keep6[i]!='\0'){
		if(keep6[i]!='k'){
			system("cls");
			game1();//如果沒有輸入正確字母將進入小遊戲
		}
	i++;
	} 
	
	system("cls");
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\t第二話：\n",50);
	slowprint("\n  鷹司手上拿著兩杯紙杯裝的咖啡叫住了我。\n",60);
	slowprint("\n  鷹司：我也買了妳的份喔。\n",60);
	slowprint("\n  鷹司突然叫住了我，讓我心跳漏了一拍。\n",60);
		
	slowprint("\n 請選擇你想回復的話!\n",60);
	slowprint("\n 南宮月：\n",60);
	slowprint("\n(1)咦？ \n",60);
	slowprint("\n(2)......\n",60);
	slowprint("\n(3)我的份，為什麼？\n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//計算好感度 
    switch(ans){
    	
    	case 1:
    		count= count+4;
    		break;
    	case 2:
    		count= count+3;
    		break;
    	case 3:
    		count= count+5;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n 錯誤!請輸入正確的數字~");
		scanf("%d",&ans);
	}
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file8= fopen("第二章之一.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file8)){
	    	fscanf(file8,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file8);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter kid\\(>`<)/:");
	
	scanf("%s",wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n 請選擇你想回復的話!\n",60);
	slowprint("\n 南宮月：\n",60);
	slowprint("\n(1)那又怎麼樣? \n",60);
	slowprint("\n(2)正是如此，怎麼?\n",60);
	slowprint("\n(3)沒錯，因為我不是像鷹司一樣能幹的人。\n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//計算好感度 
    switch(ans){
    	
    	case 1:
    		count= count+3;
    		break;
    	case 2:
    		count= count+4;
    		break;
    	case 3:
    		count= count+5;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n 錯誤!請輸入正確的數字~");
		scanf("%d",&ans);
	}
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file9= fopen("第二章之二.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file9)){
	    	fscanf(file9,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file9);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter red\\(>9<)/:");
	
	scanf("%s",wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n 請選擇你想回復的話!\n",60);
	slowprint("\n 南宮月：\n",60);
	slowprint("\n(1)我遷怒於你，你不生氣嗎？ \n",60);
	slowprint("\n(2)你不生氣嗎？\n",60);
	slowprint("\n(3)你沒有生氣嗎？\n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//計算好感度 
    switch(ans){
    	
    	case 1:
    		count= count+5;
    		break;
    	case 2:
    		count= count+4;
    		break;
    	case 3:
    		count= count+3;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n 錯誤!請輸入正確的數字~");
		scanf("%d",&ans);
	}
	

	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file10= fopen("第二章之三.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file10)){
	    	fscanf(file10,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file10);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter beautiful\\(>0<)/:");
	
	scanf("%s",wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file11= fopen("第二章之四.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file11)){
	    	fscanf(file11,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file11);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter hihi\\(>11<)/:");
	
	scanf("%s",wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n 請選擇你想回復的話!\n",60);
	slowprint("\n 南宮月：\n",60);
	slowprint("\n(1)嗯……  \n",60);
	slowprint("\n(2)是這樣嗎?能變得像鷹司一樣能幹嗎？\n",60);
	slowprint("\n(3)是這樣嗎……? \n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//計算好感度 
    switch(ans){
    	
    	case 1:
    		count= count+4;
    		break;
    	case 2:
    		count= count+5;
    		break;
    	case 3:
    		count= count+3;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n 錯誤!請輸入正確的數字~");
		scanf("%d",&ans);
	}
	

	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file12= fopen("第二章之五.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file12)){
	    	fscanf(file12,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file12);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter thank\\(>#<)/:");
	
	scanf("%s",wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n 請選擇你想回復的話!\n",60);
	slowprint("\n 南宮月：\n",60);
	slowprint("\n(1)嗯，因為到時候贏的人一定是我。  \n",60);
	slowprint("\n(2)嗯，反正贏的人會是我。\n",60);
	slowprint("\n(3)嗯，到時候可不要後悔喔!\n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//計算好感度 
    switch(ans){
    	
    	case 1:
    		count= count+3;
    		break;
    	case 2:
    		count= count+5;
    		break;
    	case 3:
    		count= count+4;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n 錯誤!請輸入正確的數字~");
		scanf("%d",&ans);
	}
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file13= fopen("第二章之六.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file13)){
	    	fscanf(file13,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file13);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter neer\\(>*<)/:");
	
	scanf("%s",wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file14= fopen("第二章之七.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file14)){
	    	fscanf(file14,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file14);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter final\\(>&<)/:");
	
	scanf("%s",wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
		
	system("cls");
	
	system("color 47");
	
	game5();//進入遊戲5找尋真愛密碼 
	
	system("cls");
	
	//好感度超過或等於40分進入結局一 
	if(count>=40){
		if( (end1= fopen("結局一.txt","r")) == NULL){
			printf("Error, the file %s is not opened!\n");
		}

		else{
			char string[5000];
			while(!feof(end1)){
	    		fscanf(end1,"%s ",string);
				printf("\n  %s \n",string);
			}
		}
		slowprint("               <LOVE END>",50);
	fclose(end1);
	}
	//好感度低於40分進入結局二 
	else if(count<40){
		if( (end2= fopen("結局二.txt","r")) == NULL){
			printf("Error, the file %s is not opened!\n");
		}

		else{
			char string[5000];
			while(!feof(end2)){
	    		fscanf(end2,"%s ",string);
				printf("\n  %s \n",string);
			}
		}
		slowprint("                <NORMAL END>",50);
	fclose(end2);
	}
	system("pause");
	system("color 07");
	system("cls");
	int choice=0;
	FILE *picPtr;//開頭圖片檔  
	char c;//印出開頭資料用 
	picPtr = fopen("welcome to2.txt","r");
	if (picPtr) {
    	while (( c= fgetc(picPtr)) != EOF)
        putchar(c);
    	fclose(picPtr);
	}
	puts("\n");
	
	slowprint("\t\t\t\t\t\t\t\t請選擇想要的路線 #  ",60);
	scanf("%d",&choice);
	
	if(choice == 1){
		music();
		slowprint("----------------loading-----------------------------------------------------------",50);
		system("cls");
		for(i=0;i<84;i++){
			printf("..");
		}
		printf("\n");
		chara1();
	}
	else if(choice==2){
		music();
		slowprint("----------------loading-----------------------------------------------------------",50);
		system("cls");
		chara2();
	}
	else if(choice==3){
		music();
		slowprint("----------------loading-----------------------------------------------------------",50);
		system("cls");
		for(i=0;i<84;i++){
			printf("..");
		}
		printf("\n");
		chara3();
	}
	else if(choice==4){
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t遊戲結束\n\n\n\n\n\n\n\n\n\n");
	}
	
	
}
	
	
	


