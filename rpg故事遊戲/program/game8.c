#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void game8(){
	system("cls");
	int ans=0;
	int user_ans=0;
	slowprint("\n\n\t\t�аݤ@���C��A�T���A�l�A�@���D��b�@�_���X���}�H\n\n",50);
	slowprint("\t\t# ",50);
	scanf("%d",&user_ans);
	if(ans==user_ans){
		slowprint("\n\t���ߵ���F�A�N�O0��~�]���j�a���Q�Y���F�A�u�ѤU�D�F",60);
		system("pause");
	}
	else{
		slowprint("\n\t�����A�����FXD�A�O0�~���~�]���j�a���Q�Y���F�A�u�ѤU�D�F�A�D�O�S���}���A�A���D�a~",60);
		system("pause");
	} 
} 
