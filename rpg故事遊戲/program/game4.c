#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include"header.h" 

void game4(){

	system("cls");
	int usersys[3]={0};//���a���I�� 
	int comsys[3]={0};//�q�����I��
	int sum_user=0,sum_sys=0;//���a,�q�����Ʀr�M 
	int ans;
	
	slowprint("\n\t�w��Ө�R�B����~\n",60);
	slowprint("\n\t�b�o�̧A�i�H�Φۤv�����ӨM�w�A���R�B \\(^*^)//\n",60);
	slowprint("\n\t�ӧa~�ӽ�a\n",60);
	slowprint("\n\t�A�P�A����ⳣ�N�֦�3�ӻ�l,3�ӻ�l���`�M�N�M�w�A���R�B\n",60);
    slowprint("\n\t��ܧa~ 1.��j\t2.��p\n",50);
    printf("\n\t�п�J�A�����:");

	scanf("%d",&ans);//��J�j�Τp
	
	if(ans!=1&ans!=2){
		printf("\n\t�п�J1�M�w��j�άO��J2�M�w��p\n");
		ans=0;
		scanf("%d",&ans);
	}
	
	printf("\n\t�ж}�l���l\n\n");
	system("pause");
	
	srand(time(NULL));
	
	int i;
	
	printf("\n\n\t ��⪺��l:\n\n");
    //�q����	
	for(i=0;i<3;i++){
		comsys[i] = rand()%6+1;
		printf("\t %d",comsys[i]);
	//�`�M 
		sum_sys=sum_sys+comsys[i];		
	} 
	
	printf("\n\n");
	system("pause");
	printf("\n\n");
	
	printf("\t �A����l:\n\n");
	//���a�� 
	for(i=0;i<3;i++){
		usersys[i] = rand()%6+1;
		printf("\t %d",usersys[i]);
	//�`�M 
		sum_user=sum_user+usersys[i];
	} 
	
  
	printf("\n\n\t�`�M:       \n");
	printf("\n\t    ��⪺:%d \n",sum_sys);
	printf("\n\t    �A��:%d  \n",sum_user);
	  
	//�P�_�j�p 
	switch(ans){
		
	case 1:
		if(sum_sys > sum_user){
			slowprint("\n...........................�ӥi��.....�A��F\n",60);
			break;
		}
		else if(sum_sys < sum_user){
			slowprint("\n...........................����......�AĹ�F\n\t",60);
			break;
		}
		else{
			slowprint("\n...........................���M.....����\n\t",60);
			break;
		}
	case 2:
		if(sum_sys < sum_user){
			slowprint("\n...........................�ӥi��.....�A��F\n",60);
			break;
		}
		else if(sum_sys > sum_user){
			slowprint("\n...........................����......�AĹ�F\n\t",60);
			break;
		}
		else{
			slowprint("\n...........................���M.....����\n\t",60);
			break;
		}
    }
	printf("\n");
	system("pause");
	system("cls");
}
