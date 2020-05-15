#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h> 
#include"header.h"
int main(void){

	
	int choice=0;
	int i;
	FILE *startPtr;//開頭圖片檔  
	char c;//印出開頭資料用 
	
	puts("\n");
	startPtr = fopen("welcome to2.txt","r");
	if (startPtr) {
    	while (( c= fgetc(startPtr)) != EOF)
        putchar(c);
    	fclose(startPtr);
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
	
	return 0;
} 
