#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include"header.h"

void chara2(){
	FILE *file1;//Ū�ɧǳ� 
	FILE *file2;//Ū�ɲĤ@�����@ 
	FILE *file3;//Ū�ɲĤ@�����G 
	FILE *file4;//Ū�ɲĤ@�����T 
	FILE *file5;//Ū�ɲĤ@�����| 
	FILE *file6;//Ū�ɲĤ@������ 
	FILE *file7;//Ū�ɲĤ@������ 
	FILE *file8;//Ū�ɲĤG�����@ 
	FILE *file9;//Ū�ɲĤG�����G 
	FILE *file10;//Ū�ɲĤG�����T 
	FILE *file11;//Ū�ɲĤG�����| 
	FILE *file12;//Ū�ɲĤG������ 
	FILE *file13;//Ū�ɲĤG������ 
	FILE *file14;//Ū�ɲĤG�����C 
	FILE *end1;//Ū�ɵ����@ 
	FILE *end2;//Ū�ɵ����G 
	char wait[100];
	char keep[100];//���ݻα��r,��J���N�i�J�C��1  
	char keep2[100];//���ݻα��r 2,��J���N�i�J�C��1 
	char keep3[100];//���ݻα��r 3,��J���N�i�J�C��1 
	char keep4[100];//���ݻα��r 4,��J���N�i�J�C��1  
	char keep5[100];//���ݻα��r 5,��J���N�i�J�C��1  
	char keep6[100];//���ݻα��r 6,��J���N�i�J�C��1  
	int ans=0;//�^�����D 
	int count=0;//�p��n�P�� 
	int i;
	
	system("color 74");
	if( (file1= fopen("�ǳ�.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file1)){
	    	fscanf(file1,"%s ",string);
			printf("\n  %s \n",string);
		}
	}

	fclose(file1);
	
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter a\\(>~<)/:");
	scanf("%s",&keep);
	
	i=0;
	while(keep[i]!='\0'){
		if(keep[i]!='a'){
			game1();//�p�G�S����J���T�r���N�i�J�p�C�� 
		}
	i++;
	} 
	printf("\n");
	
	system("cls");
	for( i=0;i<100;i++){
		printf("*");
	}
	
	if( (file2= fopen("�Ĥ@�����@.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file2)){
	    	fscanf(file2,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file2);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter b\\(>@<)/:");
	scanf("%s",&keep2);
	i=0;
	while(keep2[i]!='\0'){
		if(keep2[i]!='b'){
			game1();//�p�G�S����J���T�r���N�i�J�p�C��
		}
	i++;
	} 
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");	
	
	slowprint("\n�п�ܧA�Q�^�_����!\n",60);
	slowprint("\n �n�c��G\n",60);
	slowprint("\n(1)��˴N�O�������F�K\n",60);
	slowprint("\n(2)�Pı�٭n�@�Ǯɶ��~�৹�����K\n",60);
	slowprint("\n(3)�����D���S�������ƥi�H�Ѧҭ��K\n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//�p��n�P�� 
    switch(ans){
    	
    	case 1:
    		count= count+5;
    		break;
    	case 2:
    		count= count+3;
    		break;
    	case 3:
    		count= count+4;
    		break;
	}
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n ���~!�п�J���T���Ʀr~");
		scanf("%d",&ans);
	}
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	
	slowprint("\n�ڭW���ۡA�չϻ��y�H�g�a�a�L�A�@���ݵ��N�q�C\n",60);
	slowprint("\n�n�c��G�N�q�A���^�ӤF�H\n",60);
	slowprint("\n�N�q�G�֨�a���ɭԡA�o�{����ѤF���ڡC\n",60);
	slowprint("\n�N�q����ۤv���줽��A���_�F������ڬݡC\n",60);
	slowprint("\n�N�q�G�G�M�b�o�C\n",60);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter c\\(>3<)/:");
	scanf("%s",&keep3);
	i=0;
	while(keep3[i]!='\0'){
		if(keep3[i]!='c'){
			game1();//�p�G�S����J���T�r���N�i�J�p�C��
		}
	i++;
	} 
	
	printf("\n");
	
	for( i=0;i<100;i++){
		printf("*");
	}
	printf("\n");	
	slowprint("\n�п�ܧA�Q�^�_����!\n",60);
	slowprint("\n �n�c��G\n",60);
	slowprint("\n(1)�N�q���N�~���I�g�k?\n",60);
	slowprint("\n(2)�N�q�]�|�ѰO�F�誺��? \n",60);
	slowprint("\n(3)�N�q�b�u�@�W�����N�ܯ�F�A���o�ܤ�í���O! \n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//�p��n�P�� 
    switch(ans){
    	
    	case 1:
    		count= count+4;
    		break;
    	case 2:
    		count= count+3;
    		break;
    	case 3:
    		count= count+5;
    		break;
	}
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n ���~!�п�J���T���Ʀr~");
		scanf("%d",&ans);
	}
		
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file3= fopen("�Ĥ@�����G.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file3)){
	    	fscanf(file3,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file3);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter abc\\(>4<)/:");
	
	scanf("%s",&wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n�п�ܧA�Q�^�_����!\n",60);
	slowprint("\n �n�c��G\n",60);
	slowprint("\n(1)�u���ܷP�§A�A�N�q�C\n",60);
	slowprint("\n(2)���§A�A�N�q�C�A��b���F�ڤ@�Ӥj���C \n",60);
	slowprint("\n(3)�����N�q�A�������C \n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//�p��n�P�� 
    switch(ans){
    	
    	case 1:
    		count= count+3;
    		break;
    	case 2:
    		count= count+5;
    		break;
    	case 3:
    		count= count+4;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n ���~!�п�J���T���Ʀr~");
		scanf("%d",&ans);
	}
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n�n�c��G���O�o�`�A�d��o��ߡC\n",60);
	slowprint("\n�N�q�G�O�b�N�C\n",60);
	slowprint("\n�N�q���F�_�ӡA�N�Ȥl�k����S�X�F�L���C\n",60);
	slowprint("\n�N�q�G�ڭ̬O�P�����a�H ����S����[�O?\n",60);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter worry\\(>3<)/:");
	scanf("%s",wait);
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n�п�ܧA�Q�^�_����!\n",60);
	slowprint("\n �n�c��G\n",60);
	slowprint("\n(1)�O�o�ˤl����?�n���u���N�q�|�o�򻡩O?\n",60);
	slowprint("\n(2)�n���u���N�q�|�o�˹�ڻ��C \n",60);
	slowprint("\n(3)�|�o�˹�ڻ����N�u���N�q�F�C \n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//�p��n�P�� 
    switch(ans){
    	
    	case 1:
    		count= count+3;
    		break;
    	case 2:
    		count= count+4;
    		break;
    	case 3:
    		count= count+5;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n ���~!�п�J���T���Ʀr~");
		scanf("%d",&ans);
	}
	
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file4= fopen("�Ĥ@�����T.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file4)){
	    	fscanf(file4,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file4);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter love\\(>5<)/:");
	
	scanf("%s",&wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file5= fopen("�Ĥ@�����|.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file5)){
	    	fscanf(file5,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file5);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter y\\(>6<)/:");
	
	scanf("%s",&keep4);
	
	
	i=0;
	while(keep4[i]!='\0'){
		if(keep4[i]!='y'){
			system("cls");
			game1();//�p�G�S����J���T�r���N�i�J�p�C��
		}
	i++;
	} 
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file6= fopen("�Ĥ@������.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file6)){
	    	fscanf(file6,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file6);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter n\\(>7<)/:");
	
	scanf("%s",&keep5);
	
	i=0;
	while(keep5[i]!='\0'){
		if(keep5[i]!='n'){
			system("cls");
			game1();//�p�G�S����J���T�r���N�i�J�p�C��
		}
	i++;
	} 
	
	printf("\n");
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n�п�ܧA�Q�^�_����!\n",60);
	slowprint("\n �n�c��G\n",60);
	slowprint("\n(1)�ڡK��K�K \n",60);
	slowprint("\n(2) �K�K�٦�K \n",60);
	slowprint("\n(3) �K�K \n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//�p��n�P�� 
    switch(ans){
    	
    	case 1:
    		count= count+5;
    		break;
    	case 2:
    		count= count+4;
    		break;
    	case 3:
    		count= count+3;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n ���~!�п�J���T���Ʀr~");
		scanf("%d",&ans);
	}
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file7= fopen("�Ĥ@������.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file7)){
	    	fscanf(file7,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file7);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter k\\(>8<)/:");
	
	scanf("%s",&keep6);
	
	
	i=0;
	while(keep6[i]!='\0'){
		if(keep6[i]!='k'){
			system("cls");
			game1();//�p�G�S����J���T�r���N�i�J�p�C��
		}
	i++;
	} 
	
	system("cls");
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\t�ĤG�ܡG\n",50);
	slowprint("\n  �N�q��W���ۨ�M�ȪM�˪��@�إs��F�ڡC\n",60);
	slowprint("\n  �N�q�G�ڤ]�R�F�p������C\n",60);
	slowprint("\n  �N�q��M�s��F�ڡA���ڤ߸��|�F�@��C\n",60);
		
	slowprint("\n �п�ܧA�Q�^�_����!\n",60);
	slowprint("\n �n�c��G\n",60);
	slowprint("\n(1)�x�H \n",60);
	slowprint("\n(2)......\n",60);
	slowprint("\n(3)�ڪ����A������H\n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//�p��n�P�� 
    switch(ans){
    	
    	case 1:
    		count= count+4;
    		break;
    	case 2:
    		count= count+3;
    		break;
    	case 3:
    		count= count+5;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n ���~!�п�J���T���Ʀr~");
		scanf("%d",&ans);
	}
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file8= fopen("�ĤG�����@.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file8)){
	    	fscanf(file8,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file8);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter kid\\(>`<)/:");
	
	scanf("%s",wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n �п�ܧA�Q�^�_����!\n",60);
	slowprint("\n �n�c��G\n",60);
	slowprint("\n(1)���S����? \n",60);
	slowprint("\n(2)���O�p���A���?\n",60);
	slowprint("\n(3)�S���A�]���ڤ��O���N�q�@�˯�F���H�C\n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//�p��n�P�� 
    switch(ans){
    	
    	case 1:
    		count= count+3;
    		break;
    	case 2:
    		count= count+4;
    		break;
    	case 3:
    		count= count+5;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n ���~!�п�J���T���Ʀr~");
		scanf("%d",&ans);
	}
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file9= fopen("�ĤG�����G.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file9)){
	    	fscanf(file9,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file9);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter red\\(>9<)/:");
	
	scanf("%s",wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n �п�ܧA�Q�^�_����!\n",60);
	slowprint("\n �n�c��G\n",60);
	slowprint("\n(1)�ھE���A�A�A���ͮ�ܡH \n",60);
	slowprint("\n(2)�A���ͮ�ܡH\n",60);
	slowprint("\n(3)�A�S���ͮ�ܡH\n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//�p��n�P�� 
    switch(ans){
    	
    	case 1:
    		count= count+5;
    		break;
    	case 2:
    		count= count+4;
    		break;
    	case 3:
    		count= count+3;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n ���~!�п�J���T���Ʀr~");
		scanf("%d",&ans);
	}
	

	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file10= fopen("�ĤG�����T.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file10)){
	    	fscanf(file10,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file10);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter beautiful\\(>0<)/:");
	
	scanf("%s",wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file11= fopen("�ĤG�����|.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file11)){
	    	fscanf(file11,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file11);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter hihi\\(>11<)/:");
	
	scanf("%s",wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n �п�ܧA�Q�^�_����!\n",60);
	slowprint("\n �n�c��G\n",60);
	slowprint("\n(1)��K�K  \n",60);
	slowprint("\n(2)�O�o�˶�?���ܱo���N�q�@�˯�F�ܡH\n",60);
	slowprint("\n(3)�O�o�˶ܡK�K? \n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//�p��n�P�� 
    switch(ans){
    	
    	case 1:
    		count= count+4;
    		break;
    	case 2:
    		count= count+5;
    		break;
    	case 3:
    		count= count+3;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n ���~!�п�J���T���Ʀr~");
		scanf("%d",&ans);
	}
	

	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file12= fopen("�ĤG������.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file12)){
	    	fscanf(file12,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file12);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter thank\\(>#<)/:");
	
	scanf("%s",wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	slowprint("\n �п�ܧA�Q�^�_����!\n",60);
	slowprint("\n �n�c��G\n",60);
	slowprint("\n(1)��A�]����ɭ�Ĺ���H�@�w�O�ڡC  \n",60);
	slowprint("\n(2)��A�ϥ�Ĺ���H�|�O�ڡC\n",60);
	slowprint("\n(3)��A��ɭԥi���n�ᮬ��!\n",60); 
	slowprint("\n\t\tans:",60);
	scanf("%d",&ans);
	
	//�p��n�P�� 
    switch(ans){
    	
    	case 1:
    		count= count+3;
    		break;
    	case 2:
    		count= count+5;
    		break;
    	case 3:
    		count= count+4;
    		break;
	}
	
	while(ans!=1&&ans!=2&&ans!=3){
		printf("\n ���~!�п�J���T���Ʀr~");
		scanf("%d",&ans);
	}
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file13= fopen("�ĤG������.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file13)){
	    	fscanf(file13,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file13);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter neer\\(>*<)/:");
	
	scanf("%s",wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
	
	if( (file14= fopen("�ĤG�����C.txt","r")) == NULL){
		printf("Error, the file %s is not opened!\n");
		}

	else{
		char string[1000];
		while(!feof(file14)){
	    	fscanf(file14,"%s ",string);
			printf("\n  %s \n",string);
		}
	}
	fclose(file14);
	printf("\t\t\t\t\t\t\t.......continue.....\n");
	printf("\t\t\t\t\t\t\tplease enter final\\(>&<)/:");
	
	scanf("%s",wait);
	
	printf("\n");
	for(i=0;i<100;i++){
		printf("*");
	}
	printf("\n");
		
	system("cls");
	
	system("color 47");
	
	game5();//�i�J�C��5��M�u�R�K�X 
	
	system("cls");
	
	//�n�P�׶W�L�ε���40���i�J�����@ 
	if(count>=40){
		if( (end1= fopen("�����@.txt","r")) == NULL){
			printf("Error, the file %s is not opened!\n");
		}

		else{
			char string[5000];
			while(!feof(end1)){
	    		fscanf(end1,"%s ",string);
				printf("\n  %s \n",string);
			}
		}
		slowprint("               <LOVE END>",50);
	fclose(end1);
	}
	//�n�P�קC��40���i�J�����G 
	else if(count<40){
		if( (end2= fopen("�����G.txt","r")) == NULL){
			printf("Error, the file %s is not opened!\n");
		}

		else{
			char string[5000];
			while(!feof(end2)){
	    		fscanf(end2,"%s ",string);
				printf("\n  %s \n",string);
			}
		}
		slowprint("                <NORMAL END>",50);
	fclose(end2);
	}
	system("pause");
	system("color 07");
	system("cls");
	int choice=0;
	FILE *picPtr;//�}�Y�Ϥ���  
	char c;//�L�X�}�Y��ƥ� 
	picPtr = fopen("welcome to2.txt","r");
	if (picPtr) {
    	while (( c= fgetc(picPtr)) != EOF)
        putchar(c);
    	fclose(picPtr);
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
	
	
	


