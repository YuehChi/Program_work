#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game2()
{
	int a, b, ans;
	int counter = 0;
	srand(time(NULL));

	printf( "�Ш̴��ܲq�@�Ʀr,�q�L����3���~�i�i��U�@�Ӽ@��\n\n" );
	
	while( counter < 3 ){
		a = ( rand() % 901 ) + 100;
		b = ( rand() % 2);
		if( b == 1 ){
			printf( "\n�п�J�@�Ӥ���1��1000���Ʀr\n\n" );
			printf( "�Y �p ��t�Ϊ��Ʀr�h�q�L����\n\n" );
			printf( "�p�G���i�t�η|���z�A��\n\n" );
			scanf( "%d", &ans);
			if( ans > 1000 ){
				printf( "��J���Ʀr�Ӥj�o! �ЦA��J�@�� \n\n" );
				scanf( "%d", &ans);
			}
			if( ans < 0 ){
				printf( "��J���Ʀr�Ӥp�o! �ЦA��J�@�� \n\n" );
				scanf( "%d", &ans);	
							
			}
			while( ans <= 100 && a >= 100){
				printf( "�Ӱ��i�o �A��J�@���a\n\n" );
				scanf( "%d", &ans);
				if( ans > 1000 ){
					printf( "��J���Ʀr�Ӥj�o! �ЦA��J�@�� \n\n" );
					scanf( "%d", &ans);
				}
				if( ans < 0 ){
					printf( "��J���Ʀr�Ӥp�o! �ЦA��J�@�� \n\n" );
					scanf( "%d", &ans);				
				}
			}
			while( ans < a / 2 ){
				printf( "�A�_�I�@�I�a! ��Ӥj�I���Ʀr �ЦA��J�@�� \n\n" );
				scanf( "%d", &ans);
				if( ans > 1000 ){
					printf( "��J���Ʀr�Ӥj�o! �ЦA��J�@�� \n\n" );
					scanf( "%d", &ans);
				}
				if( ans < 0 ){
					printf( "��J���Ʀr�Ӥp�o! �ЦA��J�@�� \n\n" );
					scanf( "%d", &ans);				
				}
			}			
			if( ans > 1000 ){
				printf( "��J���Ʀr�Ӥj�o! �ЦA��J�@�� \n\n" );
				scanf( "%d", &ans);
			}
			if( ans < 0 ){
				printf( "��J���Ʀr�Ӥp�o! �ЦA��J�@�� \n\n" );
				scanf( "%d", &ans);	
			}

			if( ans < a ){
				printf( "%d < %d �A�q�L�F! �ٳ�%d��\n\n", ans, a, (2 - counter));
				counter++;
			}
			else{
				printf( "�t�μƦr��: %d ���ѤF!�A���A�F �ٳ�%d��\n\n", a, ( 3 - counter ));
			}
			
		}//end first if
		else{
			printf( "\n�п�J�@�Ӥ���1��1000���Ʀr\n\n" );
			printf( "�Y �j ��t�Ϊ��Ʀr�h�q�L!\n\n" );
			printf( "�p�G���i�t�η|���z�A��\n\n" );
			scanf( "%d", &ans);
			if( ans > 1000 ){
				printf( "��J���Ʀr�Ӥj�o! �ЦA��J�@�� \n\n" );
				scanf( "%d", &ans);
			}
			if( ans < 0 ){
				printf( "��J���Ʀr�Ӥp�o! �ЦA��J�@�� \n\n" );
				scanf( "%d", &ans);				
			}
			while( ans >= 900 && a <= 900){
				printf( "�Ӱ��i�o �A��J�@���a\n\n" );
				scanf( "%d", &ans);
				if( ans > 1000 ){
					printf( "��J���Ʀr�Ӥj�o! �ЦA��J�@�� \n\n" );
					scanf( "%d", &ans);
				}
				if( ans < 0 ){
					printf( "��J���Ʀr�Ӥp�o! �ЦA��J�@�� \n\n" );
					scanf( "%d", &ans);				
				}
			}
			while( ans > a + 200 ){
				printf( "�A�_�I�@�I�t ��Ӥp�I���Ʀr �ЦA��J�@�� \n\n" );
				scanf( "%d", &ans);
				if( ans > 1000 ){
					printf( "��J���Ʀr�Ӥj�o! �ЦA��J�@�� \n\n" );
					scanf( "%d", &ans);
				}
				if( ans < 0 ){
					printf( "��J���Ʀr�Ӥp�o! �ЦA��J�@�� \n\n" );
					scanf( "%d", &ans);				
				}
			}	
			if( ans > 1000 ){
				printf( "��J���Ʀr�Ӥj�o! �ЦA��J�@�� \n\n" );
				scanf( "%d", &ans);
			}
			if( ans < 0 ){
				printf( "��J���Ʀr�Ӥp�o! �ЦA��J�@�� \n\n" );
				scanf( "%d", &ans);				
			}		
			if( ans > a ){
				printf( "%d > %d �A�q�L�F! �ٳ�%d��\n\n", ans, a, (2 - counter));
				counter++;
			}
			else{
				printf( "�t�μƦr��: %d ���ѤF!�A���A�F �ٳ�%d��\n\n", a, (3 - counter));
			}			
		}
	}
	
	printf( "�C������ ���ߧA�q�L�F!" );
	system("pause"); 
}
