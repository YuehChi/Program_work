#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "header.h"
int playRiddle(int a){
    int answer;
    if(a==0){
        slowprint("\n\t�p���H�����츤���a����.�����ݤp�褵�~�X���F? �p��Q�F�@�U�� : ��~��ڪ����ƭn���~�e�j�@��~~ �����Q�F�Q�N�� : �ڪ��D�A�X���F,�T�~��A�����Ƥ�T�~�e�j�⭿���? �p���I�F�I�Y~~  �A���D�p��X����?\n\n",50);
        printf("\tPlease enter your answer:");
        scanf("%d",&answer);
        if(answer==6){
            printf("\n\t\tCorrect!\n\n");
            return 1;
        }
        else{
            printf("\n\t\tWrong! The answer is 6\n\n");
            printf("\t�Ը� �G ���]�p�褵�~��x���A�w����~��L�����ƭn���~�e�j�@���A�B�T�~��L�����Ʒ|��T�~�e�j�⭿�A�h\n\n");
            printf("\t(x-2)*(1+1)=x+2, (x-3)*(1+2)=x+3\n\n2x-4=x+2, 3x-9=x+3\n\n\t2���ѥX�����׬Ҭ�x=6\n\n");
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
            printf("\t�Ը� �G �@��H�i��|�ܪ��[��������5*5=25�A���O���@�}�l��1=5�N�w�g���X���פF�A�]�����׬�1�C\n\n");
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
        slowprint("\t�m�i�ꪺ����D�`�_�ǡA����1�T��������7�����B����1�T�������8�T�����B����1�T��������9�T����B����1�T�������10�T�����B����1�T�Ź�����11�T����B����1�T�Q������12�T�Ź��B����1�T��������13�T�Q���C���@�ӤH�H840000���������I�����m�i�ꪺ�f���A���������`�T�ƭn�D�̤֡C�аݥL�Ҵ����������A�@���h�֪T�Ź��H\n\n",50);
        printf("\tPlease enter your answer:");
        scanf("%d",&answer);
        if(answer==3){
            printf("\n\t\tCorrect!\n\n");
            return 1;
        }
        else{
            printf("\n\t\tWrong! The answer is 3.\n\n");
            printf("\t�Ը� �G \n\n");
            printf("\t�w��1�T����=7�����A�]��840000����=120000�����C\n\n");
            printf("\t1�T���=8�T���\n\n");
            printf("\t1�T����=9�T���=72�T����\n\n");
            printf("\t1�T���=10�T����=90�T���=720�T�����\n\n");
            printf("\t1�T�Ź�=11�T���=110�T����=990�T���=7920�T�����\n\n");
            printf("\t1�T�Q��=12�T�Ź�=132�T���=1320�T����=11880�T���=95040�T�����\n\n");
            printf("\t�w����120000�T�����A�h�G\n\n");
            printf("\t120000/95040 = 1�K24960'�i�I��1�T�Q��\n\n");
            printf("\t24960/7920 = 3�K1700'�i�I��3�T�Ź�\n\n");
            return -1;
        }
    }
    
    else if(a==4){
        slowprint("\t��1000���޳ܪ����A�䤤�@���@�r�A�~�[�ή�����L�k����@�r���O���@��A�ӽ޳ܨ�F�@�r����15������|���`�A�Y�n�O�Ҧb�@�p�ɥH�������@����t���@�r�A�ܤֻݭn�X���ޡH\n\n",50);
        printf("\tPlease enter your answer:");
        scanf("%d",&answer);
        if(answer==5){
            printf("\n\t\tCorrect!\n\n");
            return 1;
        }
        else{
            printf("\n\t\tWrong! The answer is 5.\n\n");
            return -1;
            printf("\t�Ը� �G �w���޳ܨ�F�@�r����15������|���`�A�h�ڭ̥i�H�N1000�Ӥ���H5�i�쪺�覡�s���A�Y��0~55555�K\n\n");
            printf("\t���]��25����A�h�i�H�������q00(0)�}�l�s����44(24)�Aø�s�������x�}�����p�U�� �G \n\n");
            printf("\t    �@ �G �T �| ��\n\n");
            printf("\t1 : 00 01 02 03 04\n\n");
            printf("\t2 : 10 11 12 13 14\n\n");
            printf("\t3 : 20 21 22 23 24\n\n");
            printf("\t4 : 30 31 32 33 34\n\n");
            printf("\t5 : 40 41 42 43 44\n\n");
            printf("\t�@�}�l�A��2���ޭӧO�ܲĤ@�C�βĤ@�ƪ����A�Y(00 01 02 03 04 05)�M(00 10 20 30 40)�A���Y�䤤�@���ަ��F�A�h�i�T�{�����䤤�@�ӽs���A���Y2���޳����F�A�h�i�o������W��2���O���h�֡C\n\n");
            printf("\t���Y�դF4���H��2���޳��S���A�h�i�o�����r�������s��44������C\n\n");
            printf("\t�����p�U�A���]��m���ޡA�B����n���A����Ӽ�<mn+1�Y�i��{���r���O������C\n\n");
            printf("\t�w��54<1000<55�A�]���ܤֻݭn5���C\n\n");
        }
    }
    
    else if(a==5){
        slowprint("\t6��2(1+2)=?\n\n",50);
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
        slowprint("\t�𦳤Q���ذ��A�����b�W���k���C�e�դѦV�W�⤽�ءA�ߤW�U�Ƥ@���ءA�аݨe����ɭԷ|������W?\n\n\t1.�ĤQ�ѥդ�\n\n\t2.�ĤE�ѥդ�\n\n\t3.�ĤE�ѱߤW\n\n",50);
        printf("\tPlease enter your answer:");
        scanf("%d",&answer);
        if(answer==2){
            printf("\n\t\tCorrect!\n\n");
            return 1;
        }
        else{
            printf("\n\t\tWrong! The answer is 2.\n\n");
            printf("\t�Ը� �G \n\n");
            printf("\t�����դѦV�W�⤽�ءA�ߤW�U�Ƥ@���ءA�]���@��Ѳֿn�U�Ӥ@��Ѩe�@�@�V�W1���ءC\n\n");
            printf("\t��O��F��8�ѱߤW�e�w�g�V�W8���ءA���۲�9�Ѧ��W�L�|�V�W2���ءA�]���K���W��F�C\n\n");
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
            printf("\t�Ը� �G PP*100+P=PP0P\n\n");
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
            printf("\t�Ը� �G \n\n");
            printf("\t2017x20162017-2016x20172017\n\n");
            printf("\t=2017*(20160000+2017)-2016*(20170000+2017)\n\n");
            printf("\t=2017*20160000-2016*20170000+2017*2017-2016*2017\n\n");
            printf("\t=2017*2017-2016*2017\n\n");
            printf("\t=2017\n\n");
            return -1;
        }
    }
}
