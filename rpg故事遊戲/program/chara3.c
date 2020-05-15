#include<stdio.h>
#include<stdlib.h>
#include"header.h"
#include<windows.h>
void chara3(){
	int choice=0;
	int end1=0,end2=0,end3=0,end4=0;//check the user have reach each ending line
	int end5=0,end6=0,end7=0,end8=0;
	int end=0;//this ending line's content is ending5
	int key=0;//check user's choice that lead to different ending line
	int winorlose =0;//check user win or lose the game
	slowprint("\n\t1945年，第二次世界大戰結束。美國和蘇聯在戰爭結束以後時常各自進行發射人造衛星、核彈試爆等等的實驗，也因此世界情勢逐漸走向冷戰…\n\n",60);
	slowprint("...................................................................\n\n",60);
	slowprint("\tSolo : 我是Solo，過去在二戰結束後我曾作為佔領軍駐守於德國，並且發現了戰後黑市潛在的巨大利潤，因此我開始竊盜並販售高級藝術品。",20);
	slowprint("我做過的案件上過歐洲各國的頭版，因此我遭到了各國警察的圍捕，被他們曉倖抓住了。",20);
	slowprint("但我的才能也正好被中情局看上了，因此我現在的身份是美國特務，藉由為他們工作來抵消自己的刑期。",20);
	slowprint("而我的上司，Adrian Sanders說了要指派任物給我，所以我現在正要去見他。\n\n",20);
	slowprint("....................................................................\n\n",20);
	slowprint("\tAdrian Sanders : 你來啦。\n\n",20);
	slowprint("\tSolo : 嗯…\n\n",20);
	slowprint("\tAdrian Sanders : 我想你應該知道吧。",20);
	slowprint("希特勒最愛的科學家，Dr. Udo Teller戰後曾為我國核武計畫效力，坐著美國夢。但是2年前，他如人間蒸發般地消失了。所以…\n\n",20);
	printf("\t(突然有一個人沒來由地襲擊我，我便和他扭打了起來)\n\n");
	slowprint("\tAdrian Sanders : 夠了，別第一天就殺掉自己的同伴。\n\n",20);
	printf("\t( Illya將Solo甩開)\n\n");
	slowprint("\tSolo : 這傢伙有病吧…等等，同伴?\n\n",20);
	slowprint("\tAdrian Sanders:我現在要跟你詳細地說明任務內容。原子彈的重點在於濃縮U，Dr. Udo Teller已經快研究出大幅簡化該步驟的方法了。",20);
	slowprint("我們懷疑位於羅馬的溫奇圭拉航運公司其實是前納粹犯罪組織的掩護身份。",20);
	slowprint("其創始人賽奇˙溫奇圭拉是墨索里尼的朋友。據傳掩護納粹將黃金運到南美洲的就就是他。",20);
	slowprint("要是濃縮U的技術落入他們手裡，那麼形容為世界末日也不會誇大，因此美蘇只好合作了。\n\n",20);
	slowprint("\tSolo & Illya : !?\n\n",20);
	slowprint("\tAdrian Sanders：你們的任務就是潛入組織，救回Dr. Udo Teller。",20);
	slowprint("Solo的偽裝身份是一名古董商，溫奇圭拉航運公司正好擁有一件頂級的收藏品，",20);
	slowprint("而Illya則作為蘇聯的建築師，為了考察而前往羅馬。\n\n",20);
	slowprint("\tSolo & Illya : …\n\n",20);
	slowprint(".................過了一天.....................\n\n",50);
	slowprint("\tIllya : 我已經大概聽說過你的背景了，那腐敗的犯罪前科。被抓到以後，你為CIA工作。",20);
	slowprint("我很好奇你怎麼會甘心為他們工作，我想這就像是矮人夾住了你的蛋蛋，迫使你低頭，這樣的屈辱使你不得不為CIA工作。\n\n",20);
	slowprint("\tSolo: …\n\n",20);
	printf("\t1.嘲諷回去 2.閉嘴 3.直接走人 \n\n");
	printf("\t# ");
	scanf("%d",&choice);
	if(choice==1){
		slowprint("\tSolo : 我想應該沒人比你更懂的屈辱的滋味了吧？\n\n",20);
		slowprint("\tIllya : 怎麼說？\n\n",20);
		slowprint("\tSolo : 昨天見識過你的身手後，我也試著了解一下你的經歷。真是悲慘啊!你的父親作為斯大林摯友，是政府高層，最後卻被發現挪用黨派基金。",20);
		slowprint("他被送往古拉格集中營的時候你幾歲? 10? 還是11?你是從那時開始患上神經病的嗎？\n\n",20);
		printf("\tIllya : (皺眉頭)\n\n");
		slowprint("\tSolo : 不過你還是克服了，還成為KGB年紀最小也最優秀的特工。",20);
		slowprint("我在想驅使你達成的是你父親的屈辱抑或是你母親的名聲？我聽說在你父親被送往集中營後，她在父親的朋友圈中很受歡迎…\n\n",20);
		printf("\t(Illya突然站起來翻桌)\n\n");
		slowprint("\tSolo : 真是個性格火爆的人啊…希望你別搞砸任務了。\n\n",20);
		slowprint("\tIllya : 我倒希望你別扯我的後腿。\n\n",20);
	}
	else if(choice==2){
		slowprint("\tSolo : …\n\n",20);
		slowprint("\tIllya : 看來我所說的讓你無法反駁呢\n\n",20);
		slowprint("\tSolo: …\n\n",20);
		slowprint("\tIllya : 希望你在任務進行的時候不會扯我的後腿，羅馬見。\n\n",20);
	}
	else if(choice==3){
		printf("\tSolo : (直接走人)\n\n");
		slowprint("\tIllya : 因為無法反駁所以只好直接走人?\n\n",20);
		slowprint("\tSolo : …\n\n",20);
		slowprint("\tIllya : 希望在任務進行時你不會像現在一樣逃走。\n\n",20);
		slowprint("\tSolo : 我只希望你不要扯我的後腿，我們羅馬見。\n\n",20);
	}
	printf("\t(於是兩人便前往羅馬出任務了。)\n\n");
	printf("\t(Solo在入住的飯店大廳發現了一些人在跟蹤Illya，這些人的目的是來試探Illya是否真的是來羅馬考察的建築師)\n\n");
	printf("\t1. 警告Illya 2. 無視，反正Illya會自己搞定\n\n");
	printf("\t# ");
	scanf("%d",&choice);
	if(choice==1){
		printf("\t(Solo緩緩走向Illya)\n\n");
		slowprint("\tIllya : 你在幹嘛？你不該在這裡跟我講話的。\n\n",20);
		slowprint("\tSolo : 他們要來試探你是不是真的建築師。\n\n",20);
		slowprint("\tIllya : 我可以自己處理。\n\n",20);
		slowprint("\tSolo : 你的意思是交出錢，表現自己很害怕的樣子嗎？\n\n",20);
		slowprint("\tIllya : 這不是俄國人的行事風格！\n\n",20);
		slowprint("\tSolo : 該怎麼做你也清楚吧。別一個不小心鑄下大錯。\n\n",20);
		slowprint("\tIllya: …\n\n",20);
		printf("\t(Illya走到暗巷，真的遭到了一些流氓的埋伏)\n\n");
		slowprint("\t混混1：你的鞋子不錯看啊\n\n",20);
		slowprint("\tIllya : 謝謝\n\n",20);
		slowprint("\t混混1 : 不如給我吧\n\n",20);
		slowprint("\tIllya : 對你來說可能會有點大\n\n",20);
		slowprint("\t混混2：那不如給我些咖啡錢吧。\n\n",20);
		printf("\t(Illya拿出了自己的皮夾)\n\n");
		slowprint("\t混混2：你的錶也不錯看\n\n",20);
		printf("\t(Illya有些猶豫)\n\n");
		printf("\t(流氓開始打Illya)\n\n");
		printf("\t(Illya不情願地把手錶給了混混)\n\n");
		printf("\t(Illya的手開始抖動，然後打了其中一個流氓)\n\n");
		printf("\t(混混2亮出刀子)\n\n");
		printf("\t(Solo從後頭出現，將2個混混打暈)\n\n");
		slowprint("\tSolo : 看來只能讓他們以為是黑手黨幹的了，你還真不擅長處理這種小事啊。\n\n",20);
		slowprint("\tIllya : 他們拿走了我父親的錶！\n\n",20);
		slowprint("\tSolo : 你不是建築師嗎？\n\n",20);
		slowprint("\tIllya : 建築師也會打架，而特工會殺了他們。勸你不要再管我的事，我們就會相安無事。\n\n",20);
		slowprint("\tSolo : 這人還真固執…(os)\n\n",20); 
	}
	else if(choice==2){
		slowprint("\t混混1：你的鞋子不錯看啊\n\n",20);
		slowprint("\tIllya : 謝謝\n\n",20);
		slowprint("\t混混1 : 不如給我吧\n\n",20);
		slowprint("\tIllya : 對你來說可能會有點大\n\n",20);
		slowprint("\t混混2：那不如給我些咖啡錢吧。\n\n",20);
		printf("\t(Illya拿出了自己的皮夾)\n\n",20);
		slowprint("\t混混2：你的錶也不錯看\n\n",20);
		printf("\t(Illya有些猶豫)\n\n");
		printf("\t(流氓開始打Illya，結果Illya將混混全部打倒)\n\n");
		printf("\t(結果CIA和KGB合作的事情被納粹發現了，任務宣告失敗)\n\n");
		printf("\tending\n\n");
		end1++;//become ending 1
	}
	if(end1==0){//if not ending 1 story continue
		printf("\tSolo: 1. 繼續吵 2. 理性說服他\n\n");
		printf("\t# ");
		scanf("%d",&choice);
		if(choice==1){
			slowprint("\tSolo : 你到底知不知道你剛剛做了什麼蠢事？我不相信會有特工像你這麼蠢的。\n\n",20);
			slowprint("\tIllya : 這就是俄國人的行事風格，不認同就閉嘴！\n\n",20);
			slowprint("\tSolo : 我是不得已得要跟你合作好嗎？現在搞的我得要當你的老媽了？\n\n",20);
			slowprint("\tIllya : 以為我很想跟美國佬合作嗎？要不是因為命令，我大可立刻殺了你。\n\n",20);
			slowprint("\tSolo : 不要把話說那麼滿，真要講的話也是我殺了你吧。\n\n",20);
			slowprint("\tIllya : 好啊，來試試看啊！\n\n",20);
			printf("\t(Solo和Illya開始大打出手，結果不分勝負)\n\n",20);
			slowprint("\tSolo : …好了，我們都冷靜點吧。\n\n",20);
			slowprint("\tIllya : …\n\n",20);
			printf("\t(兩人不歡而散)\n\n");
		}
		else if(choice==2){
			slowprint("\tSolo : 這個任務需要我們兩個不被發現身份的狀態下才能順利進行。你剛剛做的事情就讓你的身份差點被發現，這樣有多危險你懂不懂？\n\n",20);
			slowprint("\tIllya : 少囉唆，這就是我的行事風格，少用這種高高在上的語氣命令我!\n\n",20);
			slowprint("\tSolo : 我不是在命令你，我只是在給你建議，能不要這麼咄咄逼人嗎？\n\n",20);
			slowprint("\tIllya: …好吧…\n\n",20);
		}
		slowprint("...........................隔天...................................\n\n",50);
		printf("\t(Illya去參加溫奇圭拉航運公司50週年的派對並用特殊相機拍攝了一些公司的高層，發現他們曾接觸過高濃度的伽瑪射線)\n\n");
		slowprint("\tIllya : 這是我使用的底片，他能感應高濃度的伽瑪射線，上面這些模糊的線條表示他們過去24小時內曾接觸高濃度輻射性物質。\n\n",20);
		slowprint("\tSolo : 看來我得好好計畫了。\n\n",20);
		printf("\t(晚上Solo獨自來到溫奇圭拉航運公司的造船工廠調查，燈突然滅了，還意外發現Illya也在這裡)\n\n");
		slowprint("\tSolo : 你怎麼會在這裡？\n\n",20);
		slowprint("\tIllya : 這就是你說的好好計劃？\n\n",20);
		slowprint("\tSolo : 我習慣單打獨鬥。\n\n",20);
		slowprint("\tIllya : 真巧，我也是。\n\n",20);
		slowprint("\tSolo : 我猜燈會熄滅是你用的\n\n",20);
		slowprint("\tIllya : 不客氣。\n\n",20);
		slowprint("\tSolo : 我不會走的。\n\n",20);
		slowprint("\tIllya : 距離電力恢復還有10分鐘，如果你想繼續無所事事聊天\n\n",20);
		printf("\tSolo:  選擇：\n\n\t1.好吧，我讓你跟，但是誰都不知道我們來過，明早我們也忘了這件事。\n\n\t2.看來我們只好合作了。記得別扯我後腿\n\n\t3.你在這裡只會扯我後腿，麻煩你滾好嗎？\n\n");
		printf("\t# ");
		scanf("%d",&choice);
		if(choice==1||choice==2){
			slowprint("\tIllya : 沒問題。那我走上面。\n\n",20);
			slowprint("\tSolo : 那我走下面。\n\n",20);
			printf("\t(Illya開始開鎖)\n\n",20);
			slowprint("\tSolo : 需要我幫忙嗎？\n\n",20);
			slowprint("\tIllya : 你能幫最大的忙就是閉嘴。\n\n",20);
			printf("\t(巡邏的警衛快走過來了。)\n\n");
			slowprint("\tSolo : 還是我來吧。\n\n",20);
			slowprint("\tIllya : 好吧…\n\n",20);
			
			system("cls");
			system("color F0");
			winorlose=game3();
			system("color 07");
			system("cls");
			printf("\n");
			if(winorlose==1){//win the game
				slowprint("\tSolo : 幹得好啊，小紅。\n\n",20);
				slowprint("\tIllya : 閉嘴。\n\n",20);
				slowprint("\tSolo : 我們先去各自調查，5分鐘後在這裡集合。\n\n",20);
				slowprint("\tIllya : OK.\n\n",20);
			}
			else if(winorlose==0){//meet end2 because lost the game
				printf("\t因為Solo來不及在期限內把鎖橇開，於是2人便被工廠的巡警發現了，任務宣告失敗\n\n");
				end2++;
			}
			
		}
		if(end2==0){//story continue
			if(choice==3){
				slowprint("\tIllya : 你認為你能做得更好？\n\n",20);
				slowprint("\tSolo : 當然。\n\n",20);
				slowprint("\tIllya : 不然我們來比賽，看看誰能調查到有利的訊息。\n\n",20);
				slowprint("\tSolo : 好啊，那我們5分鐘後在這裡集合。\n\n",20);
				slowprint("\tIllya : Ok.\n\n",20);
			}
			slowprint("\t(..................................5分鐘後..............................)\n\n",50);
			slowprint("\tSolo : 有任何發現嗎？\n\n",20);
			slowprint("\tIllya : 沒有。\n\n",20);
			printf("\t(有工廠員工走來了，Solo和Illya躲了起來)\n\n");
			printf("\t(Illya看了一眼員工手上的手錶，並且趁著他打開置物櫃的時候將他打暈)\n\n");
			slowprint("\tSolo : 你在幹嘛？\n\n",20);
			slowprint("\tIllya : 我剛剛以為那是我父親的手錶，我搞錯了。\n\n",20);
			slowprint("\tSolo : 這個人是怎樣…\n\n",20);
			slowprint("\tIllya : 看看這個，造船工廠員工的置物櫃裡竟然有防輻射的衣物，這不太自然吧。\n\n",20);
			slowprint("\tSolo : 確實呢…\n\n",20);
			slowprint("\tIllya : 而且櫃子裡面還有一個隱藏開關\n\n",20);
			printf("\t(Illya按下開關，一個類似密道的入口出現了)\n\n");
			printf("\t選擇 ： 1. 走進去 2. 無視它\n\n");
			printf("\t# ");
			scanf("%d",&choice);
			if(choice==1){
				printf("\t(走進密道後，發現了一個類似保險庫的地方)\n\n");
				slowprint("\tSolo : 你要打開他嗎?\n\n",20);
				slowprint("\tIllya : 還是你來吧…\n\n",20);
				
				system("cls");
				system("color F0");
				winorlose=game7();
				system("color 07");
				system("cls");
				printf("\n");
				if(winorlose==1){
					printf("\t(走進保險庫裡發現)\n\n");
					slowprint("\tIllya : 你有觸動到警鈴嗎？\n\n",20);
					slowprint("\tSolo : 不可能，這個型號的鎖沒有警鈴\n\n",20);
					printf("\t(警鈴突然大響)\n\n");
					slowprint("\tIllya : 幹得好啊，cowboy。\n\n",20);
					slowprint("\tSolo : 我們得趕快逃了。\n\n",20);
					
				}
				else if(winorlose==0){
					printf("\tSolo和Illya潛入工廠的事就被發現了，因此任務宣告失敗，2人也被送去集中營實驗室作為實驗對象\n\n");
					printf("\tending\n\n");
					end4++;//meet end4;
				}
			}
			else if(choice==2){
				printf("\tSolo和Illya在工廠裡沒有找到線索，任務陷入膠著，最後納粹成功的製造出原子彈，整個歐洲陷入了恐慌。\n\n");
				printf("\tending\n\n");
				end3++;
			}
			if(end3==0&&end4==0){//story continue
				system("cls");
				system("color F0");
				winorlose=game9();
				system("color 07");
				system("cls");
				printf("\n");
				if(winorlose==1){
					printf("\t(Solo和Illya被逼到角落)\n\n");
					slowprint("\tIllya : 我要走了\n\n",20);
					slowprint("\tSolo : 去哪？\n\n",20);
					slowprint("\tIllya : 去游泳。\n\n",20);
					printf("\t(Illya跳出窗外)\n\n");
					
				}
				else if(winorlose==0){
					printf("\tSolo和Illya潛入工廠的事就被發現了，因此任務宣告失敗，2人也被送去集中營實驗室作為實驗對象\n\n");
					printf("\tending\n\n");
					end5++;//meet end5
				}
				if(end5==0){//story continue
					printf("\t1. 跟著跳出去 2. 留在原地任人宰割 \n\n");
					printf("\t# ");
					scanf("%d",&choice);
					if(choice==1){
						printf("\t(Solo跳出去，結果摔在地上)\n\n");
						slowprint("\tSolo : 啊…\n\n",20);
						slowprint("\tIllya : 快上船。\n\n",20);
						printf("\t(Solo上船，能逃出去的閘門只有3個，其中2扇已經關閉)\n\n");
						slowprint("\tSolo : 能逃出去的閘門只剩一扇了，在你撞牆前還是調頭吧\n\n",20);
						slowprint("\tIllya : 閉嘴，我最不需要的就是你的幫忙。\n\n",20);
						printf("\t(Illya衝向唯一開著的閘門)\n\n");
						slowprint("\tSolo : 你過不去的。\n\n",20);
						slowprint("\tIllya : 你閉上嘴就好。\n\n",20);
						printf("\t(Illya突然急轉彎，Solo被甩了出去)\n\n",20);
						slowprint("\tSolo : 只好游回岸上了…\n\n",20);
						slowprint("\tIllya : 抓緊了！Cowboy!\n\n",20);
						printf("\t(Illya轉頭才發現Solo掉進水裡了。)\n\n");
						slowprint("\tIllya : 咦…\n\n",20);
						printf("\t(突然Illya的船被擊沉了。)\n\n"); 
					}
					else if(choice==2){
						printf("\tSolo和Illya潛入工廠的事就被發現了，因此任務宣告失敗，2人也被送去集中營實驗室作為實驗對象\n\n");
						printf("\tending\n\n");//meet ending5 again
						end++;
					}
					if(end==0){//story continue
						printf("\tSolo:選擇：1. 森77，不想管他 2. 還是去救他一下好了，畢竟是搭擋。\n\n");
						printf("\t# ");
						scanf("%d",&choice);
						if(choice==1){
							slowprint("\tSolo : 反正他可以自己起來吧…\n\n",20);
							printf("\t(結果Illya沉進水裡，遲遲沒浮出水面)\n\n");
							slowprint("\tSolo : 好像不太妙…還是救一下他吧。\n\n",20);
							slowprint("\tIllya : 咳…咳…\n\n",20);
							slowprint("\tSolo : 我還是需要你來完成任務，我們來好好策劃了。\n\n",20);
							printf("\t(回到飯店，Solo和Illya開始策劃救援計畫，2人決定在後天展開救援計畫)\n\n");
							key++;//the key point that will impact the after story
						}
						else if(choice==2){
							slowprint("\tSolo : 真是沒辦法啊…\n\n",20);
							printf("\t(Solo跳進水裡將Illya救起來)\n\n");
							slowprint("\tIllya : 咳…咳…\n\n",20);
							slowprint("\tSolo : 趕快上岸吧。\n\n",20);
							slowprint("\tIllya : 嗯…謝謝你救了我。\n\n",20);
							slowprint("\tSolo : 看來你還是懂禮貌的嘛。\n\n",20);
							slowprint("\tIllya : 看來我們今天也算是調查出了一些事情，我們該好好策劃如何解救Dr. Udo Teller了。\n\n",20);
							slowprint("\tSolo : 嗯…也對，我們先趕快回去吧。\n\n",20);
							printf("\t(回到飯店，Solo和Illya開始策劃救援計畫，2人決定在後天展開救援計畫)\n\n");	
						}
						slowprint(".........................(任務當天).....................\n\n",60);
						slowprint("\tSolo : 上級已經派遣直升機送我們前去他們製造原子彈的據點了，我想該是時間了。\n\n",20);
						printf("\t(Solo和Illya抵達溫奇圭拉航運公司製造原子彈的據點)\n\n");
						slowprint("\tIllya : 記得別扯我後腿啊\n\n",20);
						slowprint("\tSolo : 那是我要說的。\n\n",20);
						printf("\t(2人潛入據點，Solo在一個人的身上發現Illya父親的手錶)\n\n");
						printf("\tSolo: 選擇： 1. 拿回來 2.不管它，先繼續任務\n\n");
						printf("\t# ");
						scanf("%d",&choice);
						if(choice==1){
							printf("\t(為了拿回手錶，Solo被敵方打暈，被送到集中營實驗室)\n\n");
							printf("\t(Solo被納粹科學家綁在手術台上)\n\n");
							slowprint("\t納粹科學家：看你身材還不錯呢，應該可以作為不錯的實驗對象\n\n",20);
							slowprint("\tSolo:可惡…(無法掙扎)\n\n",20);
						}
						else if(choice==2){
							
							system("cls");
							system("color F0");
							winorlose=game9();
							system("color 07");
							system("cls");
							printf("\n");
							if(winorlose==1){
								printf("\t(Solo和Illya成功救了Dr. Udo Teller。)\n\n");
								slowprint("\tSolo : 任務結束了，我想我們也要回自己國家過自己的生活了。\n\n",20);
								slowprint("\tIllya : 也對，既然合作關係結束了，我們又要回到原本敵對的身份了。\n\n",20);
								printf("\t於是Solo和Illya又回到了過去和彼此形同陌路的生活。\n\n");
								printf("\tending\n\n");
								end6++;//meet ending 6
							}
							else if(winorlose==0){
								printf("\t納粹成功將製造完成的原子彈偷渡出去，並在波蘭引爆它，造成百萬人傷亡，而下一個受害地點會是哪更是無從得知，這使得整個歐洲陷入恐慌。\n\n");
								printf("\tending\n\n");
								end8++;//meet ending 8
							}
						}
						if(end6==0&&end8==0){//story continue
							printf("\t選擇 1.unknown or 2.unknown\n\n");
							printf("\t# ");
							scanf("%d",&choice);
							if(key==1){
								printf("\t於是Solo成為納粹不人道實驗的另一個實驗品，聽說集中營裡有個被俘虜來的美國人遭強制進行冷凍實驗，最後活活凍死了。\n\n");
							}
							else if(key==0){
								printf("\t(Solo看見Illya從科學家後面慢慢的靠近)\n\n");
								slowprint("\tSolo : 沒想到我竟然會覺得看見你很開心\n\n",20);
								slowprint("\t納粹科學家：什…?\n\n",20);
								printf("\t(Illya把納粹科學家制服)\n\n");
								slowprint("\tIllya : 他們打算用漁船把原子彈偷渡出去，我們得快點。\n\n",20);
								
								system("cls");
								system("color F0");
								winorlose=game6();
								system("color 07");
								system("cls");
								printf("\n");
								if(winorlose==1){
									slowprint("\tSolo : 看來任務成功了，我們大概也要回自己國家各走各的吧。\n\n",20);
									slowprint("\tIllya : 我只能說你真的是很差勁的間諜。\n\n",20);
									slowprint("\tSolo : 我也很討厭和你搭擋，對了，這是我剛剛找到的\n\n",20);
									printf("\t(Solo給出Illya父親的手錶)\n\n");
									printf("\t(Illya摸了摸手錶，然後將它戴上)\n\n");
									slowprint("\tIllya : 謝謝，看來也是有不錯的美國人嘛。\n\n",20);
									slowprint("\tSolo : 那是我要說的。\n\n",20);
									printf("\t(Adrian Sanders突然出現)\n\n");
									slowprint("\tAdrian Sanders : 看來你們合作的不錯嘛。\n\n",20);
									slowprint("\tSolo : 的確呢。\n\n",20);
									slowprint("\tAdrian Sanders : 我剛剛已經和美蘇軍方聯絡過了，既然你們這次任務合作得不錯，不如我們以後就繼續組成團隊吧。\n\n",20);
									slowprint("\tSolo & Illya:!?\n\n",20);
									slowprint("\tAdrian Sanders : 我還給了你們一個代號，就叫UNCLE。\n\n",20);
									slowprint("\tSolo : 看來我們真的是孽緣啊！\n\n",20);
									slowprint("\tIllya : 那是我要說的。\n\n",20);
									printf("\tending\n\n"); 
								}
								else if(winorlose==0){
									printf("\t於是Solo成為納粹不人道實驗的另一個實驗品，聽說集中營裡有個被俘虜來的美國人遭強制進行冷凍實驗，最後活活凍死了。\n\n");
									printf("\tending\n\n");
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	system("cls");
	printf("\n\n\t\t不管結果如何，和我玩個遊戲吧\n\n");
	slowprint("..........................................................................",40);
	game4();
	system("md D:\\final_project\\user\\chara3");
	printf("\t\t不論遊戲贏或輸，恭喜你，獲得一包劇情回顧!!\n\n");
	system("copy D:\\final_project\\allcg\\01.jpg D:\\final_project\\user\\chara3\\01.jpg");
	system("copy D:\\final_project\\allcg\\02.jpg D:\\final_project\\user\\chara3\\02.jpg");
	system("copy D:\\final_project\\allcg\\03.jpg D:\\final_project\\user\\chara3\\03.jpg");
	system("copy D:\\final_project\\allcg\\05.jpg D:\\final_project\\user\\chara3\\05.jpg");
	system("copy D:\\final_project\\allcg\\06.jpg D:\\final_project\\user\\chara3\\06.jpg");
	system("copy D:\\final_project\\allcg\\08.jpg D:\\final_project\\user\\chara3\\08.jpg");
	system("copy D:\\final_project\\allcg\\09.jpg D:\\final_project\\user\\chara3\\09.jpg");
	system("copy D:\\final_project\\allcg\\14.jpg D:\\final_project\\user\\chara3\\14.jpg");
	system("copy D:\\final_project\\allcg\\15.jpg D:\\final_project\\user\\chara3\\15.jpg");
	system("copy D:\\final_project\\allcg\\17.jpg D:\\final_project\\user\\chara3\\17.jpg");
	system("copy D:\\final_project\\allcg\\18.jpg D:\\final_project\\user\\chara3\\18.jpg");
	system("copy D:\\final_project\\allcg\\19.jpg D:\\final_project\\user\\chara3\\19.jpg");
	
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

