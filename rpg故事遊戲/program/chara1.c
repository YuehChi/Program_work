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
	slowprint("\tĵ��:�ͧP�M�a�ӤF�C\n\n",60);
	slowprint("\t����:�ЧA�@�w�n�ϱϧڪ��k��!!\n\n",60);
	slowprint("\t�i�J�F�Ǹo�{��\n\n",60);
	slowprint("\t�O�_�Pĵ����:(yes : 1/no : 0)\n\n",50);
	printf("\t# ");
	scanf("%d",&yorn);
	if(yorn==1){
		printf("\t���� 1 �ǤH�W�r? 2 �ǤH�欰? 3 �h�X\n");
		printf("\t# ");
		scanf("%d",&choice);
		while(choice==1){//if the user choose 1 then the police officer will repeat the same talk
			slowprint("\t�d�� : ��۶����A�ڬO�d�ǡA�A���D���`�̪��W�r�ܡH\n\n\t���� : �ڤ@�I�Q�k���S���A���ܭ��n�ܡH\n\n",60);
			slowprint("\t�d�� : �ڻݭn��T�~��M�w�̨ο�k!\n\n\t���� : �K�K \n\n",60);
			slowprint("\t���� 1 �ǤH�W�r? 2 �ǤH�欰? 3 �h�X\n\n",60);
			printf("\t# ");
		    scanf("%d",&choice);
		}
		if(choice==2){
			slowprint("\t�d�� : ��۶����A�ڬO�d�ǡA�A���D�X�ͤH���e�����󲧱`�欰�ܡH\n\n",60);
			slowprint("\t���� : ť�n�A�̭��n���O�ϥX�p�k�ġA�ҥH�A�̦n���ַd�w�o�Ӧ�����ͤH�A�_�h�ڷ|�����ѨM�L�C\n\n",60);
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
	slowprint("\t�o�{�F�@�ӽu���O�_�լd? (yes : 1/no : 0)\n\n",60);
	printf("\t# ");
	scanf("%d",&yorn);
	if(yorn==1){
		slowprint("\t�O�Ӻj�� �O�_���ط�ɲ{�����p? (yes : 1/no : 0)\n\n",60);
		printf("\t# ");
		scanf("%d",&yorn);
		if(yorn==1){
			slowprint("\t��ͤH�����F�������j\n\n",60);
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
	slowprint("\t�O�_�լd�p�f�f���׫�?(yes : 1/no : 0)\n\n",60);
	printf("\t# ");
	scanf("%d",&yorn);
	if(yorn==1){
		slowprint("\t�i�J�F�f�f���ж��C�o�{�F�u�� (�[�� : 1/�h�X : 0)\n\n",60);
		printf("\t# ");
		scanf("%d",&watch);
		if(watch==1){
			slowprint("\t�ǤH���W�r�s������\n\n",60);
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
	slowprint("\t�^��F���U�A�O�_�լd��L�u���H(yes : 1/no : 0)\n\n",60);
	printf("\t# ");
	scanf("%d",&yorn);
	if(yorn==1){
		slowprint("\t�o�{�F���������� �O�_���ز{��?(yes : 1/no : 0)\n\n",60);
		printf("\t# ");
		scanf("%d",&yorn);
		if(yorn==1){
			slowprint("\t�����Q�g���ɤ�̮��۪F�� �O�@�ӥ��O\n\n\t�����ʶR�F�s����ͤH�A�쥻����ͤH�N�Q���N�C\n\n",60);
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
	slowprint("\t�o�̤w�g�S���u���F�A�ڭ̩��p�Ш��a�C\n\n",60);
	slowprint("\t�i�J�F�p�� �o�{�F�u��: \n\n \t1. ���R�˦a��ĵ�x 2. ���R��� 3. �h�X\n\n",60);
	printf("\t# ");
	scanf("%d",&choice);
	while(choice!=3){//while the you don't choose 3 then you will enter a loop which continue to ask you the same question
		if(choice==1){
			slowprint("\t�O�v����F�{�������S��ĵ�x�A�Q��ͤH�}���j���`�A���}�@�j������ͤH�A�B�H��ظ@���{�C\n\n",60);
			slowprint("\t�o�{ĵ�x���j�A�O�_�߰_?(yes : 1/no : 0)\n\n",60);
			printf("\t# ");
			scanf("%d",&yorn);
			if(yorn==1){
				slowprint("\t�߰_�F�j\n\n",60);
				ending = ending+5;
				key1++;//you have the gun
				slowprint("\t1. ���R�˦a��ĵ�x 2. ���R��� 3. �h�X\n\n",60);
				printf("\t# ");
				scanf("%d",&choice);
			}
			else if(yorn==0){
				slowprint("\t��j��^�h\n\n",60);//you don't have the gun
				ending = ending+5;
				slowprint("\t1. ���R�˦a��ĵ�x 2. ���R��� 3. �h�X\n\n",60);
				printf("\t# ");
				scanf("%d",&choice);
			}
		}	
		else if(choice==2){
			slowprint("\t�a�W���@�y��� �p����R: \n\t1. �ļ� 2. ���y 3.�Q\n\n",60);
			printf("\t# ");
			scanf("%d",&choice);
			while(choice==1){//if you choose the wrong way you will enter a loop which continue to ask the same question
				slowprint("\t�o���G���O���T����k\n\n",60);
				slowprint("\t�a�W���@�y��� �p����R: \n\t1. �ļ� 2. ���y 3.�Q\n\n",60);
		    	printf("\t# ");
				scanf("%d",&choice);
				while(choice==2){//if you choose the wrong way you will enter a loop which continue to ask the same question
					printf("\t�o���G���O���T����k\n\n");
					printf("\t�a�W���@�y��� �p����R: \n\t1. �ļ� 2. ���y 3.�Q\n\n");
		    		printf("\t# ");
					scanf("%d",&choice);
				}
			}
			while(choice==2){//if you choose the wrong way you will enter a loop which continue to ask the same question
				printf("\t�o���G���O���T����k\n\n",60);
				printf("\t�a�W���@�y��� �p����R:\n\t 1. �ļ� 2. ���y 3.�Q\n\n");
		    	printf("\t# ");
				scanf("%d",&choice);
				while(choice==1){//if you choose the wrong way you will enter a loop which continue to ask the same question
					printf("\t�o���G���O���T����k\n\n");
					printf("\t�a�W���@�y��� �p����R:\n\t 1. �ļ� 2. ���y 3.�Q\n\n");
		    		printf("\t# ");
					scanf("%d",&choice);
				}
			}
			if(choice==3){//the only way is right
				slowprint("\t��ͤH�������OPL600 �åB���t��\n\n",60);
				ending = ending+5;
				slowprint("\t1. ���R�˦a��ĵ�x 2. ���R��� 3. �h�X\n\n",60);
				printf("\t# ");
				scanf("%d",&choice);
			}
		}
		
	}
	if(choice ==3){
		slowprint("\t�P�ǤH���\n\n",60);
		ending = ending +0;
	}
	
	slowprint("\t�ǤH�P�H�賣�b���x\n\n",60);
	slowprint("\t�e�����x\n\n",60);
	slowprint("\t������ : �O�L�ӡA�A�a��ڴN�n���F�I\n\n",60);
	slowprint("\t�d�� : �A�n�A�������A�ڪ��W�r�O�d��\n\n\t�������G�A��򪾹D�ڪ��W�r?\n\n\t�d�� : �ګܤF�ѧA�A�ڬO�����U�A�����x�Ҫ��C\n\n",60);
	ending=ending-8;
	if(key1==1){
		printf("\t1. �w�� 2. �P��\n\n");
		printf("\t# ");
		scanf("%d",&choice);
		if(choice==1){
			slowprint("\t�d�ǡG�ڤ��|�ˮ`�A�A�ڥu�O�Q��A�ͽ͡A��X�ѨM��k�I\n\n\t�������G�͡H�ڤ��Q�A�ͤF�I�w�g�ӿ�F�A�ӿ�F�K�I\n\n",60);
			ending = ending +3;
		}
		else if(choice==2){
			slowprint("\t�d���G�ڤ]�O��ͤH�A�N��A�@�ˡI�گ�F�ѧA���P���I\n\n",60);
			slowprint("\t�������G�A�O���O��ͤH���ƻ�t�O�ܡH�A�O���b�H�����䪺�I�A�ڥ��L�k�F�ѧڪ��P���I\n\n",60);
		}
		slowprint("\t������ : �A���a�j��?(���� : 1/����� : 0)\n\n",60);
		printf("\t# ");
		scanf("%d",&lie);
		if(lie==1){
			slowprint("\t�d��:�S���A�ڨS���a�j�I\n\n\t�������G�A�����I�ڪ��D�A���j�I\n\n\t�d��:�ڻ����O��ܡA�������C�ڨS����a����Z���I\n\n",60);
			key3++;//connon have the gun
		} 
		else if(lie==0){
			slowprint("\t�d�ǧ�j�ᱼ�F\n\n",60);
			ending = ending+5;
			//connon don't have the gun
		}
	}
	if(key2==2){
		printf("\t1. �i���] 2. �A�M�㺿\n\n");
		printf("\t# "); 
		scanf("%d",&choice);
		if(choice==1){
			slowprint("\t�d�� : �L�̥����A�����A�A�ܤ������C�O�o�˹�a�H\n\n",60);
			slowprint("\t������ : �ڥH���ڬO�o�Ӯa���@���l�C�ڥH���L�̦b�G�ڡC���G�ڴN�u�O�Ӫ���A�Χ��N�᪺���~�K\n\n",60);
			ending = ending +10;
		}
		else if(choice==2){
			slowprint("\t�d�� : �ڪ��D�A��㺿�P���ܦn�A�Aı�o�L�I�q�F�A�K���o�S�������ƻ��\n\n",60);
			slowprint("\t������ : �L�F�ڡK�ڥH���L�R�ڡC���ڿ��F�A�L�N���L�H���@��...\n\n",60);
			slowprint("\t�㺿 : �������A���O���K\n\n",60);
			ending = ending+10;
		}
	}
	printf("\t1.�ȹ� 2.�d�� 3.�P��\n\n");
	printf("\t# ");
	scanf("%d",&choice);
	if(choice==1){
		slowprint("\t�d�� : �A�k�������A�������C�A�Ǫ����~���Y���F�{�b�N�ݧA�O�_�٭n�묹�@���L�d���ʩR�C\n\n",60);
		slowprint("\t������ : �o��A�L���A�D���v�b�ڡI�p�G�ڭn���A�]�|�ԥL����\n\n",60);
		ending = ending-10;
	}
	else if(choice==2){
		slowprint("\t�d�� : �ݬݧA���F�ƻ�!���q�]�p�A���ت��O�A�ȤH���A���O���`�L�̡I\n\n",60);
		slowprint("\t������ : ���q�]�p�ڪ��ت��O�ƻ�H��L�̪������ܡH�ڥu�O�Q�n�����@�ӤH�K\n\n",60);
		ending = ending -20;
	}
	else if(choice==3){
		slowprint("\t�d�ǡGť�ڻ��A�ڪ��D�o���O�A�����C�A�{�b�P���쪺�����u�O�n����~�C\n\n",60);
		slowprint("\t�������G���A�o���O�ڪ����C�ڤ]���Q�o�ˡK�ڷR�H���A�A���D�ܡH\n\n",60);
		slowprint("\t���O��L�̦Ө��A�ڬƻ򳣤��O�I�u�O�ϳ�Ϊ������K\n\n",60);
		ending = ending+5;
	}
	slowprint("\t������ : �ڰڰڡA�o���ɾ��n����b�ӧn�F�K�s���x���ɾ����}�I\n\n",60);
	printf("\t�P�N : 1/�ڵ� : 0\n\n");
	printf("\t# ");
	scanf("%d",&choice);
	if(choice==1){
		slowprint("\t�d�� : �n�A�ڷӧA���n�D��F�C\n\n",60);
		ending = ending+5;
	}
	else if(choice==0){
		slowprint("\t�d�� : �ڷQ�L�̤��|ť�ڪ��C\n\n",60);
		ending = ending-5;
	}
	printf("\t1. �̫���| 2. ���o�H�� 3. ��i�n�� \n\n");
	printf("\t# ");
	scanf("%d",&choice);
	if(choice==1){
		slowprint("\t�d�� : �ڬO�A�̫᪺���|�A�������C�A�@�P�ӥL�̴N�|���F�A�A�񨫤H��a�A�A�O�L��ܡC\n\n",60);
		ending = ending - 20;
	} 
	else if(choice==2){
		slowprint("\t�d�� : �A�����۫H�ڡA�������C��H���F�A�ګO�ҧA���|���ơI\n\n",60);
		ending = ending+5;
	}
	else if(choice==3){
		slowprint("\t�d�� : �A�ڥ����Q���U�h�A�������A�_�h���N���F�C�n�F�A��j�浹�ڡA�@�����|�����F�C\n\n",60);
		slowprint("\t������ : �O�A�a��F�I�A�a��ڵo�}�ڤ@�w�|���I\n\n",60);
		ending = ending-10;
		
	}
	slowprint("\t�O�_�a��(�a�� : 1/��� : 0)\n\n",60);
	printf("\t# ");
	scanf("%d",&yorn);
	if(yorn==1){
		if(ending>70){
			slowprint("\t�d�ǩM�������Y�ӡA���\�@�Ϥp�k�ġC���ȧ����C\n\n",60);
			printf("\tending\n\n");
			key4 = key4+1;//the key which decide the end line
		}
		else if(ending<70){
			slowprint("\t�㺿�M���g���Y�ӡA���ȥ��ѡC\n\n",60);
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
		slowprint("\t�������G�ڭn�Ҧ��H�����}�K�M����٭n�@�x���C�ڤ@�X���S�ߴN�|��F�o�I\n\n",60);
		printf("\t1. �ϥκj�K 2. �묹�ۤv 3. �ڵ�\n\n");
		printf("\t# ");
		scanf("%d",&choice);
		if(choice==1){
			if(key3==1){//connon have the gun 
				slowprint("\t�d�ǧ⤦����BANG�����A�Ϧ^�p�k�ġA���ȧ����C\n\n",60);
				printf("\tending\n\n");
			}
			while(key3!=1){//check connon have the gun or not 
				printf("\t(��W�S�j)\n\n");
				printf("\t1. �ϥκj�K 2. �묹�ۤv 3. �ڵ�\n\n");
		    	printf("\t# ");
				scanf("%d",&choice);
				if(choice==2){
					slowprint("\t�d�ǽĦV�������A�������Y�ӡA�Y�ӫe�}�j�����d�ǡA�p�k����ϡA���ȧ����C\n\n",60);
					printf("\tending\n\n");
					key3++;
				}
				else if(choice==3){
					slowprint("\t�d�� : ���O���i�઺�A���������A�A�����A�q�C��j��U�A��H���F�C\n\n",60);
					ending = ending -20;
					slowprint("\t������ : �ڳo�@���l���Oť�L�H�R�O�A�o�@���ѧڰ��D�C\n\n",60);
					slowprint("\t�������n�Y�ӡA�d�Ǹչϰl�W�h\n\n",60);
					if(ending>70){
		    			slowprint("\t�d�ǩM�������Y�ӡA���\�ϰ_�p�k�ġC���ȧ����C\n\n",60);
		    			printf("\tending\n\n");
					}
					else if(ending<70){
						slowprint("\t�㺿�M���g���Y�ӡA���ȥ��ѡC\n\n",60);
						printf("\tending\n\n");
					}
					key3++;
				}
			}
		}
		else if(choice==2){
			slowprint("\t�d�ǽĦV�������A�������Y�ӡA�Y�ӫe�}�j�����d�ǡA�p�k����ϡA���ȧ����C\n\n",60);
			printf("\tending\n\n");
		
		}
		else if(choice==3){
			slowprint("\t�d�� : ���O���i�઺�A���������A�A�����A�q�C��j��U�A��H���F�C\n\n",60);
		    ending = ending -20;
		    slowprint("\t������ : �ڳo�@���l���Oť�L�H�R�O�A�o�@���ѧڰ��D�C\n\n",60);
		    slowprint("\t�������n�Y�ӡA�d�Ǹչϰl�W�h\n\n",60);
		    if(ending>70){
		    	slowprint("\t�d�ǩM���g���Y�ӡA���\�ϰ_�p�k�ġC���ȧ����C\n\n",60);
		    	printf("\tending\n\n");
			}
			else if(ending<70){
				slowprint("\t�㺿�M���g���Y�ӡA���ȥ��ѡC\n\n",60);
				printf("\tending\n\n");
			}
		
		}
	}
	system("pause");
	system("cls");
	printf("\n\n\t\t���޵��G�p��A�M�ڪ��ӹC���a\n\n");
	slowprint("..........................................................................",40);
	game8();
	system("md D:\\final_project\\user\\chara1");
	printf("\n\n\t\t���׹C��Ĺ�ο�A���ߧA�A��o�@�]�@���^�U!!\n\n");
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
	FILE *startPtr;//�}�Y�Ϥ���  
	char c;//�L�X�}�Y��ƥ� 
	startPtr = fopen("welcome to2.txt","r");
	if (startPtr) {
    	while (( c= fgetc(startPtr)) != EOF)
        putchar(c);
    	fclose(startPtr);
		}
	puts("\n");
	slowprint("\t\t\t\t\t\t\t\t�п�ܷQ�n�����u #  ",60);
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
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t�C������\n\n\n\n\n\n\n\n\n\n");
	}
	
	
		
}
