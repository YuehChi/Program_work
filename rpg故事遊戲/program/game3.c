#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include"header.h" 
int game3(){
	int num1,num2;
	int ans=0;
	int user_ans;
	char back[20];
	srand(time(NULL));//with time change
	num1=rand()%10+1;//random create number
	num2=rand()%10+1;//random create number
	ans = num1+num1-num2;
	printf("\n\n\t\t�ҿ׫i�̭n�V�L�����~���~��C��...\n\n");
	printf("\n\n\t\t�ҥH�ڭ̨Ӫ��a...\n\n");
	printf("\t\t%d + %d - %d = ", num1,num1,num2);
	scanf("%d",&user_ans);
	if(user_ans==ans){
		slowprint("\n\t\t���ߧA...Ĺ�F�D��\n\n",50);
		system("pause");
		return 1;
	}
	else if(user_ans!=ans){
		slowprint("\n\t\t�i��...�D�ԥ���\n\n",50);
		system("pause");
		return 0;
	}
} 
