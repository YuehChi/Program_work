#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "header.h"
int playRiddle(int a){
    int answer;
    if(a==0){
        slowprint("\n\t小方隨媽媽到舅舅家做客.舅舅問小方今年幾歲了? 小方想了一下說 : 兩年後我的歲數要比兩年前大一倍~~ 舅舅想了想就說 : 我知道你幾歲了,三年後你的歲數比三年前大兩倍對嗎? 小方點了點頭~~  你知道小方幾歲嗎?\n\n",50);
        printf("\tPlease enter your answer:");
        scanf("%d",&answer);
        if(answer==6){
            printf("\n\t\tCorrect!\n\n");
            return 1;
        }
        else{
            printf("\n\t\tWrong! The answer is 6\n\n");
            printf("\t詳解 ： 假設小方今年為x歲，已知兩年後他的歲數要比兩年前大一倍，且三年後他的歲數會比三年前大兩倍，則\n\n");
            printf("\t(x-2)*(1+1)=x+2, (x-3)*(1+2)=x+3\n\n2x-4=x+2, 3x-9=x+3\n\n\t2式解出的答案皆為x=6\n\n");
            return -1;
        }
    }
    
    else if(a==1){
        slowprint("\t1=5, 2=10, 3=15, 4=20, 5=?\n\n",50);
        printf("\tPlease enter your answer:");
        scanf("%d",&answer);
        if(answer==1){
            printf("\n\t\tCorrect!\n\n");
            return 1;
        }
        else{
            printf("\n\t\tWrong! The answer is 1.\n\n");
            printf("\t詳解 ： 一般人可能會很直觀的直接算5*5=25，但是其實一開始的1=5就已經講出答案了，因此答案為1。\n\n");
            return -1;
        }
    }
    
    else if(a==2){
        slowprint("\t1995*19961996-1996*19951995=?\n\n",50);
        printf("\tPlease enter your answer:");
        scanf("%d",&answer);
        if(answer==0){
            printf("\n\t\tCorrect!\n\n");
            return 1;
        }
        else{
            printf("\n\t\tWrong! The answer is 0.\n\n");
            printf("\t1995*19961996-1996*19951995\n\n");
            printf("\t=1995*(19960000+1996)-1996*(19950000+1995)\n\n");
            printf("\t=1995*19960000-1996*1995000+1995*1996-1996*1995\n\n");
            printf("\t=0\n\n");
            return -1;
        }
    }
    
    else if(a==3){
        slowprint("\t彩虹國的幣制非常奇怪，它的1枚紅幣等於7美元、它的1枚橙幣等於8枚紅幣、它的1枚黃幣等於9枚橙幣、它的1枚綠幣等於10枚黃幣、它的1枚藍幣等於11枚綠幣、它的1枚靛幣等於12枚藍幣、它的1枚紫幣等於13枚靛幣。有一個人以840000美元全部兌換成彩虹國的貨幣，但錢幣的總枚數要求最少。請問他所換的錢幣中，共有多少枚藍幣？\n\n",50);
        printf("\tPlease enter your answer:");
        scanf("%d",&answer);
        if(answer==3){
            printf("\n\t\tCorrect!\n\n");
            return 1;
        }
        else{
            printf("\n\t\tWrong! The answer is 3.\n\n");
            printf("\t詳解 ： \n\n");
            printf("\t已知1枚紅幣=7美金，因此840000美元=120000紅幣。\n\n");
            printf("\t1枚橙幣=8枚橙幣\n\n");
            printf("\t1枚黃幣=9枚橙幣=72枚紅幣\n\n");
            printf("\t1枚綠幣=10枚黃幣=90枚橙幣=720枚橙紅幣\n\n");
            printf("\t1枚藍幣=11枚綠幣=110枚黃幣=990枚橙幣=7920枚橙紅幣\n\n");
            printf("\t1枚靛幣=12枚藍幣=132枚綠幣=1320枚黃幣=11880枚橙幣=95040枚橙紅幣\n\n");
            printf("\t已知有120000枚紅弊，則：\n\n");
            printf("\t120000/95040 = 1…24960'可兌換1枚靛幣\n\n");
            printf("\t24960/7920 = 3…1700'可兌換3枚藍幣\n\n");
            return -1;
        }
    }
    
    else if(a==4){
        slowprint("\t有1000桶給豬喝的水，其中一桶有劇毒，外觀及氣味均無法分辨劇毒水是哪一桶，而豬喝到了劇毒的水15分鐘後會死亡，若要保證在一小時以內找到哪一桶水含有劇毒，至少需要幾隻豬？\n\n",50);
        printf("\tPlease enter your answer:");
        scanf("%d",&answer);
        if(answer==5){
            printf("\n\t\tCorrect!\n\n");
            return 1;
        }
        else{
            printf("\n\t\tWrong! The answer is 5.\n\n");
            return -1;
            printf("\t詳解 ： 已知豬喝到了劇毒的水15分鐘後會死亡，則我們可以將1000個水桶以5進位的方式編號，即為0~55555…\n\n");
            printf("\t假設有25桶水，則可以先把水桶從00(0)開始編號到44(24)，繪製成類似矩陣的方格如下圖 ： \n\n");
            printf("\t    一 二 三 四 五\n\n");
            printf("\t1 : 00 01 02 03 04\n\n");
            printf("\t2 : 10 11 12 13 14\n\n");
            printf("\t3 : 20 21 22 23 24\n\n");
            printf("\t4 : 30 31 32 33 34\n\n");
            printf("\t5 : 40 41 42 43 44\n\n");
            printf("\t一開始，讓2隻豬個別喝第一列及第一排的水，即(00 01 02 03 04 05)和(00 10 20 30 40)，假若其中一隻豬死了，則可確認水桶的其中一個編號，假若2隻豬都死了，則可得知水桶上的2位放別為多少。\n\n");
            printf("\t假若試了4次以後2隻豬都沒死，則可得知有毒的水為編號44的那桶。\n\n");
            printf("\t此情況下，假設有m隻豬，且嘗試n次，水桶個數<mn+1即可辨認有毒的是哪桶水。\n\n");
            printf("\t已知54<1000<55，因此至少需要5隻。\n\n");
        }
    }
    
    else if(a==5){
        slowprint("\t6÷2(1+2)=?\n\n",50);
        printf("\tPlease enter your answer:");
        scanf("%d",&answer);
        if(answer==9){
            printf("\n\t\tCorrect!\n\n");
            return 1;
        }
        else{
            printf("\n\t\tWrong! The answer is 9.\n\n");
            
            return -1;
        }
    }
    
    else if(a==6){
        slowprint("\t牆有十公尺高，蝸牛在上面攀爬。牠白天向上兩公尺，晚上下滑一公尺，請問牠什麼時候會爬到牆上?\n\n\t1.第十天白天\n\n\t2.第九天白天\n\n\t3.第九天晚上\n\n",50);
        printf("\tPlease enter your answer:");
        scanf("%d",&answer);
        if(answer==2){
            printf("\n\t\tCorrect!\n\n");
            return 1;
        }
        else{
            printf("\n\t\tWrong! The answer is 2.\n\n");
            printf("\t詳解 ： \n\n");
            printf("\t蝸牛白天向上兩公尺，晚上下滑一公尺，因此一整天累積下來一整天牠一共向上1公尺。\n\n");
            printf("\t於是到了第8天晚上牠已經向上8公尺，接著第9天早上他會向上2公尺，因此便爬上牆了。\n\n");
            return -1;
        }
    }
    
    else if(a==7){
        slowprint("\tPPAP=PP*100+P\n\tPPAP*A=?\n\n",50);
        printf("\tPlease enter your answer:");
        scanf("%d",&answer);
        if(answer==0){
            printf("\n\t\tCorrect!\n\n");
            return 1;
        }
        else{
            printf("\n\t\tWrong! The answer is 0.\n\n");
            printf("\t詳解 ： PP*100+P=PP0P\n\n");
            printf("\t PPAP=PP0P\n\n");
            printf("\t A=0\n\n");
            printf("\t PPAP*A=PP0P*0=0\n\n");
            return -1;
        }
    }
    else if(a==8){
        slowprint("\t2017x20162017-2016x20172017=?\n\n",50);
        printf("\tPlease enter your answer:");
        scanf("%d",&answer);
        if(answer==2017){
            printf("\n\t\tCorrect!\n\n");
            return 1;
        }
        else{
            printf("\n\t\tWrong! The answer is 2017.\n\n");
            printf("\t詳解 ： \n\n");
            printf("\t2017x20162017-2016x20172017\n\n");
            printf("\t=2017*(20160000+2017)-2016*(20170000+2017)\n\n");
            printf("\t=2017*20160000-2016*20170000+2017*2017-2016*2017\n\n");
            printf("\t=2017*2017-2016*2017\n\n");
            printf("\t=2017\n\n");
            return -1;
        }
    }
}
