#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include"header.h"

int game6(){
	
	clock_t start, end;//�}�l�ɶ��p�ɻP�����ɶ� 
	char mission; //��J���� 
	int counter = 0; //�p��w��J���� 
	int s;
	double during;//��O�ɶ� 
	char back[10];//�^��C�� 

	//�C���e���ԭz 
	printf("\n\n"); 
	slowprint("\t~�����ȡA�m�ϭ�l�u�}�l~\n",60); 
	slowprint("\n\t�ХH�A�̧֪��t�׫�20�U 'w',�Ӫ����e�i,\n",60);
	slowprint("\n\t�аO��U�ֶV�n�A�W�L�ɶ��N�|�Q�a�H���@�B,\n",60);
	slowprint("\n\t����20��'w'��Ы�Enter:\n",60); 
	slowprint("\n\t��Enter�}�l�p����:\n",60);
	
	while(1){
		if(s='\n'){
			start = clock();
	  	  	while(mission = getchar()!=EOF){
			    if(mission='w'){
					counter++;
				}//end if
	    	    if(counter>=20){
					slowprint("\n\t���ߧA�A����F����\n\n\n\n",60);
			    	break;
			    }//end if
	  		}//end while
		    end = clock();
	        during = (end-start)*1000/CLK_TCK; 
		}
		    if(during<=6500){	
				slowprint("\t�m�^��l�u�F\n\n\t���ȧ���\n\n\n\n",50);
				printf("\n\t�п�J���N�^��r���^��@��:");
				gets(back);
				scanf("%s",&back);
				return 1;
			}//end if
			if(during>6500&&during<=8500){
				slowprint("\t�ᤣ!���@�U�A���|�A�i���٬O�Q�a�J�m���F�@�B����\n\n\t���ȥ���\n\n\n\n",50);
				printf("\n\t�п�J���N�^��r���^��@��:");
				gets(back);
				scanf("%s",&back);
				return 0; 
			}//end if
			if(during>8500){
				slowprint("\t�ᤣ!���@�U�A���|�A�ɶ��w�g�ӱߤF�A��l�u�Q���K�B�e�X�h�F�A�ڭ̧��J�F\n\n\t���ȥ���......\n\n\n\n",50);
				printf("\n\t�п�J���N�^��r���^��@��:");
				gets(back);
				scanf("%s",&back);
				return 0;
			}//end if
	}//end while

	
}
