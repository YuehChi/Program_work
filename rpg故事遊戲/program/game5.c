#include <stdio.h>
#include <stdlib.h>
#include"header.h"

void game5(){
	
	int key=0;//��J���� 
	int back=0;//�^��C�� 
	//�C���e���ԭz 
	printf("\n\n");
	slowprint("   �w��Ө�n�c��*�R���R���^�Ь�ï*,",60);
	slowprint("�o�̮I�õ۩Ҧ��L�h�����n�e��,",60);
	slowprint("�п�J���N��R���K�X(0000~9999),��������öQ���^�еe�Y:\n\n",60);
	slowprint("--------------------------------",10);
	printf("�ж}�l�M��u�R�K�X:\n\n");
	printf(" �п�J�u�R�K�X(0000~9999):");
	scanf("%d",&key);
	
	//�u�R���׷��K�X 
	while(key!=EOF){
		if(key>1015&&key<9999){
			printf("\n �ЦA�Q�Q�O���O�Ӧh�F\n");
			printf("\n �п�J�u�R�K�X(0000~9999):");
			scanf("%d",&key);
		}
		if(key<1015&&key>0000){
			printf("\n �ЦA�Q�Q�O���O�Ӥ֤F\n");
			printf("\n �п�J�u�R�K�X(0000~9999):");
			scanf("%d",&key);
		}
		
		if(key==1015){
			slowprint("\n �u�R�K�X1015�N���10��15��A�]�O�n�c��R�W�N�q�����ѡC\n",60);
			slowprint("\n �R���O�q�u�O���j~\n",60);
			slowprint("\n ���ߡA�i�H�ˬd�ݬݸ�Ƨ��O���O�h�F�@���R����ï��~\n\n",60);
			system("md D:\\final_project\\user\\chara2");
			system("copy D:\\final_project\\allcg\\1�_��.png D:\\final_project\\user\\chara2\\1�_��.png");
			system("copy D:\\final_project\\allcg\\2�дo.png D:\\final_project\\user\\chara2\\2�дo.png");
			system("copy D:\\final_project\\allcg\\3�M�`.png D:\\final_project\\user\\chara2\\3�M�`.png");
			system("copy D:\\final_project\\allcg\\4�ߪ���.png D:\\final_project\\user\\chara2\\4�ߪ���.png");
			system("copy D:\\final_project\\allcg\\5ı��.png D:\\final_project\\user\\chara2\\5ı��.png");
			system("copy D:\\final_project\\allcg\\6�L���H��.png D:\\final_project\\user\\chara2\\6�L���H��.png");
			system("copy D:\\final_project\\allcg\\7�x.png D:\\final_project\\user\\chara2\\7�x.png");
			system("copy D:\\final_project\\allcg\\8���.png D:\\final_project\\user\\chara2\\8���.png");
			system("copy D:\\final_project\\allcg\\9�۫H.png D:\\final_project\\user\\chara2\\9�۫H.png");
			system("copy D:\\final_project\\allcg\\10�V�O.png D:\\final_project\\user\\chara2\\10�V�O.png");
			system("copy D:\\final_project\\allcg\\11�U�Z�᪺��H.png D:\\final_project\\user\\chara2\\11�U�Z�᪺��H.png");
			system("copy D:\\final_project\\allcg\\12�{�M�߰�.png D:\\final_project\\user\\chara2\\12�{�M�߰�.png");
			system("copy D:\\final_project\\allcg\\13������.png D:\\final_project\\user\\chara2\\13������.png");
			system("copy D:\\final_project\\allcg\\14�֩�.png D:\\final_project\\user\\chara2\\14�֩�.png");
			system("copy D:\\final_project\\allcg\\15�k�~.png D:\\final_project\\user\\chara2\\15�k�~.png");
			system("copy D:\\final_project\\allcg\\16�^��.png D:\\final_project\\user\\chara2\\16�^��.png");
			system("copy D:\\final_project\\allcg\\17�w��.png D:\\final_project\\user\\chara2\\17�w��.png");
			system("copy D:\\final_project\\allcg\\18����.png D:\\final_project\\user\\chara2\\18����.png");
			system("copy D:\\final_project\\allcg\\19�s��.png D:\\final_project\\user\\chara2\\19�s��.png");
			break;
		}
		
		if(key<0000||key>9999){
			printf(" error!\n");
			printf("\n�п�J�u�R�K�X(0000~9999):");
			scanf("%d",&key);
		}								
	} // end while
	
	slowprint("----------------------------------------------------------\n\n",20);
	slowprint("  �Ы�1�^��C���[�ݵ���:",20); 
	scanf("%d",&back);
}
	
