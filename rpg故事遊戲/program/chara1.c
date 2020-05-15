#include<stdio.h>
#include<stdlib.h>
#include"header.h"
#include<windows.h>
void chara1(){
	int choice=0;
	int ending=0;//decide the ending line
	int yorn=0;// yes or no
	int watch=0;//whether to watch the daughter's room
	int lie = 0;//whether to lie
	int key1=0;//check if the user have put the gun 
	int key2=0;//check if the user have move into the daughter's room
	int key3=0;//check if the user have the gun
	int key4=0;//check the ending line
	int winorlose=0;//check game win or lose
	FILE *file;
	if((file = fopen ("preface.txt","r"))==NULL){
		printf("Cannot open file.");
	}
	else{
		char str[1000];
		while(!feof(file)){//if not meet EOF 
			fscanf(file,"%s ",str);//scanf the content
			printf("\n %s \n",str);//printf to the screen
		}
		fclose(file);
	}
	slowprint("\n.....................................................................\n\n",70);
	slowprint("\t警員:談判專家來了。\n\n",60);
	slowprint("\t母親:請你一定要救救我的女兒!!\n\n",60);
	slowprint("\t進入了犯罪現場\n\n",60);
	slowprint("\t是否與警察交談:(yes : 1/no : 0)\n\n",50);
	printf("\t# ");
	scanf("%d",&yorn);
	if(yorn==1){
		printf("\t提問 1 犯人名字? 2 犯人行為? 3 退出\n");
		printf("\t# ");
		scanf("%d",&choice);
		while(choice==1){//if the user choose 1 then the police officer will repeat the same talk
			slowprint("\t康納 : 艾倫隊長，我是康納，你知道異常者的名字嗎？\n\n\t隊長 : 我一點想法都沒有，那很重要嗎？\n\n",60);
			slowprint("\t康納 : 我需要資訊才能決定最佳辦法!\n\n\t隊長 : …… \n\n",60);
			slowprint("\t提問 1 犯人名字? 2 犯人行為? 3 退出\n\n",60);
			printf("\t# ");
		    scanf("%d",&choice);
		}
		if(choice==2){
			slowprint("\t康納 : 艾倫隊長，我是康納，你知道訪生人之前有任何異常行為嗎？\n\n",60);
			slowprint("\t隊長 : 聽好，最重要的是救出小女孩，所以你最好趕快搞定這該死的仿生人，否則我會直接解決他。\n\n",60);
			ending=41;
		}
		else if(choice==3){//if choose 3 then the user will enter the game
			system("cls");
			system("color 3F");
			game2();
			system("color 07");
			system("cls");
			printf("\n");
		}
    }
	else if(yorn==0){// if don't talk then the user will enter the game
		system("cls");
		system("color 3F");
		game2();
		system("color 07");
		system("cls");
		printf("\n");
	}
	slowprint("\t發現了一個線索是否調查? (yes : 1/no : 0)\n\n",60);
	printf("\t# ");
	scanf("%d",&yorn);
	if(yorn==1){
		slowprint("\t是個槍盒 是否重建當時現場狀況? (yes : 1/no : 0)\n\n",60);
		printf("\t# ");
		scanf("%d",&yorn);
		if(yorn==1){
			slowprint("\t仿生人拿走了爸爸的槍\n\n",60);
			ending = ending +10;
		}
		
	}
	else if(yorn==0){//if do nothing then user will enter the game
		system("cls");
		system("color 3F");
		game2();
		system("color 07");
		system("cls");
		printf("\n");
		ending = ending +0;
	}
	slowprint("\t是否調查小妹妹的臥室?(yes : 1/no : 0)\n\n",60);
	printf("\t# ");
	scanf("%d",&yorn);
	if(yorn==1){
		slowprint("\t進入了妹妹的房間。發現了線索 (觀看 : 1/退出 : 0)\n\n",60);
		printf("\t# ");
		scanf("%d",&watch);
		if(watch==1){
			slowprint("\t犯人的名字叫丹尼爾\n\n",60);
			ending = ending+6;
			key2 = key2 +1;//check if you have enter the daughter's room
		} 
		else if(watch==0){
			system("cls");//if don't watch the room then enter the game
			system("color 3F"); 
			game2();
			system("color 07");
			system("cls");
			printf("\n");
			ending=ending+0;
			key2 = key2 +1;
		}
	}
	else if(yorn==0){
		system("cls");
		system("color 3F"); 
		game2();
		system("color 07");
		system("cls");
		printf("\n");
		ending = ending +0;
	}
	slowprint("\t回到了客廳，是否調查其他線索？(yes : 1/no : 0)\n\n",60);
	printf("\t# ");
	scanf("%d",&yorn);
	if(yorn==1){
		slowprint("\t發現了爸爸的屍體 是否重建現場?(yes : 1/no : 0)\n\n",60);
		printf("\t# ");
		scanf("%d",&yorn);
		if(yorn==1){
			slowprint("\t爸爸被射殺時手裡拿著東西 是一個平板\n\n\t爸爸購買了新的仿生人，原本的仿生人將被取代。\n\n",60);
			ending = ending+5;
			key2 = key2 +1;
		}
		else if(yorn==0){
			system("cls");//enter the game
			system("color 3F");
			game2();
			system("color 07");
			system("cls");
			printf("\n");
		    ending = ending +0;
		}
	}
	else if(yorn==0){
		system("cls");// enter the game
		system("color 3F");
		game2();
		system("color 07");
		system("cls");
		printf("\n");
		ending = ending +0;
	}
	slowprint("\t這裡已經沒有線索了，我們往廚房走吧。\n\n",60);
	slowprint("\t進入了廚房 發現了線索: \n\n \t1. 分析倒地的警官 2. 分析血跡 3. 退出\n\n",60);
	printf("\t# ");
	scanf("%d",&choice);
	while(choice!=3){//while the you don't choose 3 then you will enter a loop which continue to ask you the same question
		if(choice==1){
			slowprint("\t是率先抵達現場的底特律警官，被仿生人開３槍死亡，曾開一槍擊中仿生人，且人質目睹全程。\n\n",60);
			slowprint("\t發現警官的槍，是否撿起?(yes : 1/no : 0)\n\n",60);
			printf("\t# ");
			scanf("%d",&yorn);
			if(yorn==1){
				slowprint("\t撿起了槍\n\n",60);
				ending = ending+5;
				key1++;//you have the gun
				slowprint("\t1. 分析倒地的警官 2. 分析血跡 3. 退出\n\n",60);
				printf("\t# ");
				scanf("%d",&choice);
			}
			else if(yorn==0){
				slowprint("\t把槍放回去\n\n",60);//you don't have the gun
				ending = ending+5;
				slowprint("\t1. 分析倒地的警官 2. 分析血跡 3. 退出\n\n",60);
				printf("\t# ");
				scanf("%d",&choice);
			}
		}	
		else if(choice==2){
			slowprint("\t地上有一灘血跡 如何分析: \n\t1. 採樣 2. 掃描 3.舔\n\n",60);
			printf("\t# ");
			scanf("%d",&choice);
			while(choice==1){//if you choose the wrong way you will enter a loop which continue to ask the same question
				slowprint("\t這似乎不是正確的方法\n\n",60);
				slowprint("\t地上有一灘血跡 如何分析: \n\t1. 採樣 2. 掃描 3.舔\n\n",60);
		    	printf("\t# ");
				scanf("%d",&choice);
				while(choice==2){//if you choose the wrong way you will enter a loop which continue to ask the same question
					printf("\t這似乎不是正確的方法\n\n");
					printf("\t地上有一灘血跡 如何分析: \n\t1. 採樣 2. 掃描 3.舔\n\n");
		    		printf("\t# ");
					scanf("%d",&choice);
				}
			}
			while(choice==2){//if you choose the wrong way you will enter a loop which continue to ask the same question
				printf("\t這似乎不是正確的方法\n\n",60);
				printf("\t地上有一灘血跡 如何分析:\n\t 1. 採樣 2. 掃描 3.舔\n\n");
		    	printf("\t# ");
				scanf("%d",&choice);
				while(choice==1){//if you choose the wrong way you will enter a loop which continue to ask the same question
					printf("\t這似乎不是正確的方法\n\n");
					printf("\t地上有一灘血跡 如何分析:\n\t 1. 採樣 2. 掃描 3.舔\n\n");
		    		printf("\t# ");
					scanf("%d",&choice);
				}
			}
			if(choice==3){//the only way is right
				slowprint("\t仿生人的型號是PL600 並且有負傷\n\n",60);
				ending = ending+5;
				slowprint("\t1. 分析倒地的警官 2. 分析血跡 3. 退出\n\n",60);
				printf("\t# ");
				scanf("%d",&choice);
			}
		}
		
	}
	if(choice ==3){
		slowprint("\t與犯人對峙\n\n",60);
		ending = ending +0;
	}
	
	slowprint("\t犯人與人質都在陽台\n\n",60);
	slowprint("\t前往陽台\n\n",60);
	slowprint("\t丹尼爾 : 別過來，再靠近我就要跳了！\n\n",60);
	slowprint("\t康納 : 你好，丹尼爾，我的名字是康納\n\n\t丹尼爾：你怎麼知道我的名字?\n\n\t康納 : 我很了解你，我是來幫助你脫離困境的。\n\n",60);
	ending=ending-8;
	if(key1==1){
		printf("\t1. 安撫 2. 同情\n\n");
		printf("\t# ");
		scanf("%d",&choice);
		if(choice==1){
			slowprint("\t康納：我不會傷害你，我只是想跟你談談，找出解決辦法！\n\n\t丹尼爾：談？我不想再談了！已經太遲了，太遲了…！\n\n",60);
			ending = ending +3;
		}
		else if(choice==2){
			slowprint("\t康那：我也是仿生人，就跟你一樣！我能了解你的感受！\n\n",60);
			slowprint("\t丹尼爾：你是不是仿生人有甚麼差別嗎？你是站在人類那邊的！你根本無法了解我的感受！\n\n",60);
		}
		slowprint("\t丹尼爾 : 你有帶槍嗎?(說謊 : 1/說實話 : 0)\n\n",60);
		printf("\t# ");
		scanf("%d",&lie);
		if(lie==1){
			slowprint("\t康納:沒有，我沒有帶槍！\n\n\t丹尼爾：你說謊！我知道你有槍！\n\n\t康納:我說的是實話，丹尼爾。我沒有攜帶任何武器！\n\n",60);
			key3++;//connon have the gun
		} 
		else if(lie==0){
			slowprint("\t康納把槍丟掉了\n\n",60);
			ending = ending+5;
			//connon don't have the gun
		}
	}
	if(key2==2){
		printf("\t1. 可能原因 2. 你和艾瑪\n\n");
		printf("\t# "); 
		scanf("%d",&choice);
		if(choice==1){
			slowprint("\t康納 : 他們打算把你換掉，你很不高興。是這樣對吧？\n\n",60);
			slowprint("\t丹尼爾 : 我以為我是這個家的一份子。我以為他們在乎我。結果我就只是個玩具，用完就丟的物品…\n\n",60);
			ending = ending +10;
		}
		else if(choice==2){
			slowprint("\t康納 : 我知道你跟艾瑪感情很好，你覺得他背叛了你…但她沒有做錯甚麼事\n\n",60);
			slowprint("\t丹尼爾 : 他騙我…我以為他愛我。但我錯了，他就跟其他人類一樣...\n\n",60);
			slowprint("\t艾瑪 : 丹尼爾，不是的…\n\n",60);
			ending = ending+10;
		}
	}
	printf("\t1.務實 2.責怪 3.同情\n\n");
	printf("\t# ");
	scanf("%d",&choice);
	if(choice==1){
		slowprint("\t康納 : 你逃不掉的，丹尼爾。你犯的錯誤太嚴重了現在就看你是否還要犧牲一條無辜的性命。\n\n",60);
		slowprint("\t丹尼爾 : 這跟你無關，主控權在我！如果我要死，也會拉他陪葬\n\n",60);
		ending = ending-10;
	}
	else if(choice==2){
		slowprint("\t康納 : 看看你做了甚麼!公司設計你的目的是服務人類，不是殺害他們！\n\n",60);
		slowprint("\t丹尼爾 : 公司設計我的目的是甚麼？當他們的奴隸嗎？我只是想要成為一個人…\n\n",60);
		ending = ending -20;
	}
	else if(choice==3){
		slowprint("\t康納：聽我說，我知道這不是你的錯。你現在感受到的情緒只是軟體錯誤。\n\n",60);
		slowprint("\t丹尼爾：不，這不是我的錯。我也不想這樣…我愛人類，你知道嗎？\n\n",60);
		slowprint("\t但是對他們而言，我甚麼都不是！只是使喚用的奴隸…\n\n",60);
		ending = ending+5;
	}
	slowprint("\t丹尼爾 : 啊啊啊，這直升機聲音實在太吵了…叫那台直升機離開！\n\n",60);
	printf("\t同意 : 1/拒絕 : 0\n\n");
	printf("\t# ");
	scanf("%d",&choice);
	if(choice==1){
		slowprint("\t康納 : 好，我照你的要求辦了。\n\n",60);
		ending = ending+5;
	}
	else if(choice==0){
		slowprint("\t康納 : 我想他們不會聽我的。\n\n",60);
		ending = ending-5;
	}
	printf("\t1. 最後機會 2. 取得信任 3. 虛張聲勢 \n\n");
	printf("\t# ");
	scanf("%d",&choice);
	if(choice==1){
		slowprint("\t康納 : 我是你最後的機會，丹尼爾。你一鬆懈他們就會殺了你，放走人質吧，你別無選擇。\n\n",60);
		ending = ending - 20;
	} 
	else if(choice==2){
		slowprint("\t康納 : 你必須相信我，丹尼爾。把人質放了，我保證你不會有事！\n\n",60);
		ending = ending+5;
	}
	else if(choice==3){
		slowprint("\t康納 : 你根本不想跳下去，丹尼爾，否則早就跳了。好了，把槍交給我，一切都會結束了。\n\n",60);
		slowprint("\t丹尼爾 : 別再靠近了！再靠近我發誓我一定會跳！\n\n",60);
		ending = ending-10;
		
	}
	slowprint("\t是否靠近(靠近 : 1/放棄 : 0)\n\n",60);
	printf("\t# ");
	scanf("%d",&yorn);
	if(yorn==1){
		if(ending>70){
			slowprint("\t康納和丹尼爾墜樓，成功拯救小女孩。任務完成。\n\n",60);
			printf("\tending\n\n");
			key4 = key4+1;//the key which decide the end line
		}
		else if(ending<70){
			slowprint("\t艾瑪和丹妮爾墜樓，任務失敗。\n\n",60);
			printf("\tending\n\n");
			key4 = key4 +1;//decide the end line
		}
	}
	else if(yorn==0){
		system("cls");
		system("color 3F");
		game2();
		system("color 07");
		system("cls");
		printf("\n");
	}
	if(key4==0){//conno don't enter the other end line
		slowprint("\t丹尼爾：我要所有人都離開…然後我還要一台車。我一出底特律就會放了她！\n\n",60);
		printf("\t1. 使用槍枝 2. 犧牲自己 3. 拒絕\n\n");
		printf("\t# ");
		scanf("%d",&choice);
		if(choice==1){
			if(key3==1){//connon have the gun 
				slowprint("\t康納把丹尼爾BANG不見，救回小女孩，任務完成。\n\n",60);
				printf("\tending\n\n");
			}
			while(key3!=1){//check connon have the gun or not 
				printf("\t(手上沒槍)\n\n");
				printf("\t1. 使用槍枝 2. 犧牲自己 3. 拒絕\n\n");
		    	printf("\t# ");
				scanf("%d",&choice);
				if(choice==2){
					slowprint("\t康納衝向丹尼爾，丹尼爾墜樓，墜樓前開槍打死康納，小女孩獲救，任務完成。\n\n",60);
					printf("\tending\n\n");
					key3++;
				}
				else if(choice==3){
					slowprint("\t康納 : 那是不可能的，身為機器，你必須服從。把槍放下，把人質放了。\n\n",60);
					ending = ending -20;
					slowprint("\t丹尼爾 : 我這一輩子都是聽他人命令，這一次由我做主。\n\n",60);
					slowprint("\t丹尼爾要墜樓，康納試圖追上去\n\n",60);
					if(ending>70){
		    			slowprint("\t康納和丹尼爾墜樓，成功救起小女孩。任務完成。\n\n",60);
		    			printf("\tending\n\n");
					}
					else if(ending<70){
						slowprint("\t艾瑪和丹妮爾墜樓，任務失敗。\n\n",60);
						printf("\tending\n\n");
					}
					key3++;
				}
			}
		}
		else if(choice==2){
			slowprint("\t康納衝向丹尼爾，丹尼爾墜樓，墜樓前開槍打死康納，小女孩獲救，任務完成。\n\n",60);
			printf("\tending\n\n");
		
		}
		else if(choice==3){
			slowprint("\t康納 : 那是不可能的，身為機器，你必須服從。把槍放下，把人質放了。\n\n",60);
		    ending = ending -20;
		    slowprint("\t丹尼爾 : 我這一輩子都是聽他人命令，這一次由我做主。\n\n",60);
		    slowprint("\t丹尼爾要墜樓，康納試圖追上去\n\n",60);
		    if(ending>70){
		    	slowprint("\t康納和丹妮爾墜樓，成功救起小女孩。任務完成。\n\n",60);
		    	printf("\tending\n\n");
			}
			else if(ending<70){
				slowprint("\t艾瑪和丹妮爾墜樓，任務失敗。\n\n",60);
				printf("\tending\n\n");
			}
		
		}
	}
	system("pause");
	system("cls");
	printf("\n\n\t\t不管結果如何，和我玩個遊戲吧\n\n");
	slowprint("..........................................................................",40);
	game8();
	system("md D:\\final_project\\user\\chara1");
	printf("\n\n\t\t不論遊戲贏或輸，恭喜你，獲得一包劇情回顧!!\n\n");
	system("copy D:\\final_project\\allcg\\01start.jpg D:\\final_project\\user\\chara1\\01start.jpg");
	system("copy D:\\final_project\\allcg\\02save_daughter.jpg D:\\final_project\\user\\chara1\\02save_daughter.jpg");
	system("copy D:\\final_project\\allcg\\04talk.jpg D:\\final_project\\user\\chara1\\04talk.jpg");
	system("copy D:\\final_project\\allcg\\08-1NAME.jpg D:\\final_project\\user\\chara1\\08-1NAME.jpg");
	system("copy D:\\final_project\\allcg\\10-2name.jpg D:\\final_project\\user\\chara1\\10-2name.jpg");
	system("copy D:\\final_project\\allcg\\12evidence.jpg D:\\final_project\\user\\chara1\\12evidence.jpg");
	system("copy D:\\final_project\\allcg\\21threaten.jpg D:\\final_project\\user\\chara1\\21threaten.jpg");
	system("copy D:\\final_project\\allcg\\23-1helicopter.jpg D:\\final_project\\user\\chara1\\23-1helicopter.jpg");
	system("copy D:\\final_project\\allcg\\27jump.jpg D:\\final_project\\user\\chara1\\27jump.jpg");
	
	
	
	system("pause");
	system("cls");
	int i;
	FILE *startPtr;//開頭圖片檔  
	char c;//印出開頭資料用 
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
	
	
		
}
