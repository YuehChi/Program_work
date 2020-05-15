#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include"header.h" 

void game4(){

	system("cls");
	int usersys[3]={0};//玩家的點數 
	int comsys[3]={0};//電腦的點數
	int sum_user=0,sum_sys=0;//玩家,電腦的數字和 
	int ans;
	
	slowprint("\n\t歡迎來到命運骰骰樂~\n",60);
	slowprint("\n\t在這裡你可以用自己的單手來決定你的命運 \\(^*^)//\n",60);
	slowprint("\n\t來吧~來賭吧\n",60);
	slowprint("\n\t你與你的對手都將擁有3個骰子,3個骰子的總和將決定你的命運\n",60);
    slowprint("\n\t抉擇吧~ 1.比大\t2.比小\n",50);
    printf("\n\t請輸入你的抉擇:");

	scanf("%d",&ans);//輸入大或小
	
	if(ans!=1&ans!=2){
		printf("\n\t請輸入1決定比大或是輸入2決定比小\n");
		ans=0;
		scanf("%d",&ans);
	}
	
	printf("\n\t請開始骰骰子\n\n");
	system("pause");
	
	srand(time(NULL));
	
	int i;
	
	printf("\n\n\t 對手的骰子:\n\n");
    //電腦的	
	for(i=0;i<3;i++){
		comsys[i] = rand()%6+1;
		printf("\t %d",comsys[i]);
	//總和 
		sum_sys=sum_sys+comsys[i];		
	} 
	
	printf("\n\n");
	system("pause");
	printf("\n\n");
	
	printf("\t 你的骰子:\n\n");
	//玩家的 
	for(i=0;i<3;i++){
		usersys[i] = rand()%6+1;
		printf("\t %d",usersys[i]);
	//總和 
		sum_user=sum_user+usersys[i];
	} 
	
  
	printf("\n\n\t總和:       \n");
	printf("\n\t    對手的:%d \n",sum_sys);
	printf("\n\t    你的:%d  \n",sum_user);
	  
	//判斷大小 
	switch(ans){
		
	case 1:
		if(sum_sys > sum_user){
			slowprint("\n...........................太可惜.....你輸了\n",60);
			break;
		}
		else if(sum_sys < sum_user){
			slowprint("\n...........................恭喜......你贏了\n\t",60);
			break;
		}
		else{
			slowprint("\n...........................竟然.....平手\n\t",60);
			break;
		}
	case 2:
		if(sum_sys < sum_user){
			slowprint("\n...........................太可惜.....你輸了\n",60);
			break;
		}
		else if(sum_sys > sum_user){
			slowprint("\n...........................恭喜......你贏了\n\t",60);
			break;
		}
		else{
			slowprint("\n...........................竟然.....平手\n\t",60);
			break;
		}
    }
	printf("\n");
	system("pause");
	system("cls");
}
