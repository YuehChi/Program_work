#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include"header.h"

int game6(){
	
	clock_t start, end;//開始時間計時與結束時間 
	char mission; //輸入的值 
	int counter = 0; //計算w輸入次數 
	int s;
	double during;//花費時間 
	char back[10];//回到遊戲 

	//遊戲前言敘述 
	printf("\n\n"); 
	slowprint("\t~緊急任務，搶救原子彈開始~\n",60); 
	slowprint("\n\t請以你最快的速度按20下 'w',來阻止漁船的前進,\n",60);
	slowprint("\n\t請記住愈快越好，超過時間就會被壞人先一步,\n",60);
	slowprint("\n\t按完20個'w'後請按Enter:\n",60); 
	slowprint("\n\t按Enter開始計算秒數:\n",60);
	
	while(1){
		if(s='\n'){
			start = clock();
	  	  	while(mission = getchar()!=EOF){
			    if(mission='w'){
					counter++;
				}//end if
	    	    if(counter>=20){
					slowprint("\n\t恭喜你，阻止了漁船\n\n\n\n",60);
			    	break;
			    }//end if
	  		}//end while
		    end = clock();
	        during = (end-start)*1000/CLK_TCK; 
		}
		    if(during<=6500){	
				slowprint("\t搶回原子彈了\n\n\t任務完成\n\n\n\n",50);
				printf("\n\t請輸入任意英文字母回到劇情:");
				gets(back);
				scanf("%s",&back);
				return 1;
			}//end if
			if(during>6500&&during<=8500){
				slowprint("\t喔不!等一下，怎麼會，可惜還是被壞蛋搶先了一步完成\n\n\t任務失敗\n\n\n\n",50);
				printf("\n\t請輸入任意英文字母回到劇情:");
				gets(back);
				scanf("%s",&back);
				return 0; 
			}//end if
			if(during>8500){
				slowprint("\t喔不!等一下，怎麼會，時間已經太晚了，原子彈被秘密運送出去了，我們完蛋了\n\n\t任務失敗......\n\n\n\n",50);
				printf("\n\t請輸入任意英文字母回到劇情:");
				gets(back);
				scanf("%s",&back);
				return 0;
			}//end if
	}//end while

	
}
