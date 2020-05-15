#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game2()
{
	int a, b, ans;
	int counter = 0;
	srand(time(NULL));

	printf( "請依提示猜一數字,通過考驗3次才可進行下一個劇情\n\n" );
	
	while( counter < 3 ){
		a = ( rand() % 901 ) + 100;
		b = ( rand() % 2);
		if( b == 1 ){
			printf( "\n請輸入一個介於1到1000的數字\n\n" );
			printf( "若 小 於系統的數字則通過考驗\n\n" );
			printf( "如果偷懶系統會不理你喔\n\n" );
			scanf( "%d", &ans);
			if( ans > 1000 ){
				printf( "輸入的數字太大囉! 請再輸入一次 \n\n" );
				scanf( "%d", &ans);
			}
			if( ans < 0 ){
				printf( "輸入的數字太小囉! 請再輸入一次 \n\n" );
				scanf( "%d", &ans);	
							
			}
			while( ans <= 100 && a >= 100){
				printf( "太偷懶囉 再輸入一次吧\n\n" );
				scanf( "%d", &ans);
				if( ans > 1000 ){
					printf( "輸入的數字太大囉! 請再輸入一次 \n\n" );
					scanf( "%d", &ans);
				}
				if( ans < 0 ){
					printf( "輸入的數字太小囉! 請再輸入一次 \n\n" );
					scanf( "%d", &ans);				
				}
			}
			while( ans < a / 2 ){
				printf( "再冒險一點吧! 選個大點的數字 請再輸入一次 \n\n" );
				scanf( "%d", &ans);
				if( ans > 1000 ){
					printf( "輸入的數字太大囉! 請再輸入一次 \n\n" );
					scanf( "%d", &ans);
				}
				if( ans < 0 ){
					printf( "輸入的數字太小囉! 請再輸入一次 \n\n" );
					scanf( "%d", &ans);				
				}
			}			
			if( ans > 1000 ){
				printf( "輸入的數字太大囉! 請再輸入一次 \n\n" );
				scanf( "%d", &ans);
			}
			if( ans < 0 ){
				printf( "輸入的數字太小囉! 請再輸入一次 \n\n" );
				scanf( "%d", &ans);	
			}

			if( ans < a ){
				printf( "%d < %d 你通過了! 還剩%d次\n\n", ans, a, (2 - counter));
				counter++;
			}
			else{
				printf( "系統數字為: %d 失敗了!再接再厲 還剩%d次\n\n", a, ( 3 - counter ));
			}
			
		}//end first if
		else{
			printf( "\n請輸入一個介於1到1000的數字\n\n" );
			printf( "若 大 於系統的數字則通過!\n\n" );
			printf( "如果偷懶系統會不理你喔\n\n" );
			scanf( "%d", &ans);
			if( ans > 1000 ){
				printf( "輸入的數字太大囉! 請再輸入一次 \n\n" );
				scanf( "%d", &ans);
			}
			if( ans < 0 ){
				printf( "輸入的數字太小囉! 請再輸入一次 \n\n" );
				scanf( "%d", &ans);				
			}
			while( ans >= 900 && a <= 900){
				printf( "太偷懶囉 再輸入一次吧\n\n" );
				scanf( "%d", &ans);
				if( ans > 1000 ){
					printf( "輸入的數字太大囉! 請再輸入一次 \n\n" );
					scanf( "%d", &ans);
				}
				if( ans < 0 ){
					printf( "輸入的數字太小囉! 請再輸入一次 \n\n" );
					scanf( "%d", &ans);				
				}
			}
			while( ans > a + 200 ){
				printf( "再冒險一點ㄅ 選個小點的數字 請再輸入一次 \n\n" );
				scanf( "%d", &ans);
				if( ans > 1000 ){
					printf( "輸入的數字太大囉! 請再輸入一次 \n\n" );
					scanf( "%d", &ans);
				}
				if( ans < 0 ){
					printf( "輸入的數字太小囉! 請再輸入一次 \n\n" );
					scanf( "%d", &ans);				
				}
			}	
			if( ans > 1000 ){
				printf( "輸入的數字太大囉! 請再輸入一次 \n\n" );
				scanf( "%d", &ans);
			}
			if( ans < 0 ){
				printf( "輸入的數字太小囉! 請再輸入一次 \n\n" );
				scanf( "%d", &ans);				
			}		
			if( ans > a ){
				printf( "%d > %d 你通過了! 還剩%d次\n\n", ans, a, (2 - counter));
				counter++;
			}
			else{
				printf( "系統數字為: %d 失敗了!再接再厲 還剩%d次\n\n", a, (3 - counter));
			}			
		}
	}
	
	printf( "遊戲結束 恭喜你通過了!" );
	system("pause"); 
}
