#include<stdio.h>
#include<stdlib.h>
#include"header.h"
#include<windows.h>
void chara3(){
	int choice=0;
	int end1=0,end2=0,end3=0,end4=0;//check the user have reach each ending line
	int end5=0,end6=0,end7=0,end8=0;
	int end=0;//this ending line's content is ending5
	int key=0;//check user's choice that lead to different ending line
	int winorlose =0;//check user win or lose the game
	slowprint("\n\t1945�~�A�ĤG���@�ɤj�Ե����C����MĬ�p�b�Ԫ������H��ɱ`�U�۶i��o�g�H�y�ìP�B�ּu���z����������A�]�]���@�ɱ��ճv�����V�N�ԡK\n\n",60);
	slowprint("...................................................................\n\n",60);
	slowprint("\tSolo : �ڬOSolo�A�L�h�b�G�Ե�����ڴ��@������x�n�u��w��A�åB�o�{�F�ԫ�¥���b�����j�Q��A�]���ڶ}�l�ѵs�óc�Ⱚ�����N�~�C",20);
	slowprint("�ڰ��L���ץ�W�L�ڬw�U�ꪺ�Y���A�]���ھD��F�U��ĵ��򮷡A�Q�L�̾�Ƨ��F�C",20);
	slowprint("���ڪ��~��]���n�Q�������ݤW�F�A�]���ڲ{�b�������O����S�ȡA�ǥѬ��L�̤u�@�ө���ۤv���D���C",20);
	slowprint("�ӧڪ��W�q�AAdrian Sanders���F�n�����������ڡA�ҥH�ڲ{�b���n�h���L�C\n\n",20);
	slowprint("....................................................................\n\n",20);
	slowprint("\tAdrian Sanders : �A�ӰաC\n\n",20);
	slowprint("\tSolo : ��K\n\n",20);
	slowprint("\tAdrian Sanders : �ڷQ�A���Ӫ��D�a�C",20);
	slowprint("�ƯS�ǳ̷R����Ǯa�ADr. Udo Teller�ԫᴿ���ڰ�֪Z�p�e�ĤO�A���۬���ڡC���O2�~�e�A�L�p�H���]�o��a�����F�C�ҥH�K\n\n",20);
	printf("\t(��M���@�ӤH�S�ӥѦaŧ���ڡA�ګK�M�L�ᥴ�F�_��)\n\n");
	slowprint("\tAdrian Sanders : ���F�A�O�Ĥ@�ѴN�����ۤv���P��C\n\n",20);
	printf("\t( Illya�NSolo�϶})\n\n");
	slowprint("\tSolo : �o�å릳�f�a�K�����A�P��?\n\n",20);
	slowprint("\tAdrian Sanders:�ڲ{�b�n��A�ԲӦa�������Ȥ��e�C��l�u�����I�b��@�YU�ADr. Udo Teller�w�g�֬�s�X�j�T²�ƸӨB�J����k�F�C",20);
	slowprint("�ڭ��h�æ��ù�����ũ_�c�ԯ�B���q���O�e�Ǻ�Ǹo��´�����@�����C",20);
	slowprint("��Щl�H�ɩ_���ũ_�c�ԬO�����������B�͡C�ڶǱ��@�Ǻ�N�����B��n���w���N�N�O�L�C",20);
	slowprint("�n�O�@�YU���޳N���J�L�̤�̡A����ήe���@�ɥ���]���|�ؤj�A�]����Ĭ�u�n�X�@�F�C\n\n",20);
	slowprint("\tSolo & Illya : !?\n\n",20);
	slowprint("\tAdrian Sanders�G�A�̪����ȴN�O��J��´�A�Ϧ^Dr. Udo Teller�C",20);
	slowprint("Solo�����˨����O�@�W�j���ӡA�ũ_�c�ԯ�B���q���n�֦��@�󳻯Ū����ë~�A",20);
	slowprint("��Illya�h�@��Ĭ�p���ؿv�v�A���F�ҹ�ӫe��ù���C\n\n",20);
	slowprint("\tSolo & Illya : �K\n\n",20);
	slowprint(".................�L�F�@��.....................\n\n",50);
	slowprint("\tIllya : �ڤw�g�j��ť���L�A���I���F�A���G�Ѫ��Ǹo�e��C�Q���H��A�A��CIA�u�@�C",20);
	slowprint("�ګܦn�_�A���|�̤߬��L�̤u�@�A�ڷQ�o�N���O�G�H����F�A���J�J�A���ϧA�C�Y�A�o�˪��}�d�ϧA���o����CIA�u�@�C\n\n",20);
	slowprint("\tSolo: �K\n\n",20);
	printf("\t1.�J�ئ^�h 2.���L 3.�������H \n\n");
	printf("\t# ");
	scanf("%d",&choice);
	if(choice==1){
		slowprint("\tSolo : �ڷQ���ӨS�H��A�������}�d�������F�a�H\n\n",20);
		slowprint("\tIllya : ��򻡡H\n\n",20);
		slowprint("\tSolo : �Q�Ѩ��ѹL�A�������A�ڤ]�յۤF�Ѥ@�U�A���g���C�u�O�d�G��!�A�����˧@�����j�L���͡A�O�F�����h�A�̫�o�Q�o�{�����Ҭ�����C",20);
		slowprint("�L�Q�e���j�Ԯ涰���窺�ɭԧA�X��? 10? �٬O11?�A�O�q���ɶ}�l�w�W���g�f���ܡH\n\n",20);
		printf("\tIllya : (�K���Y)\n\n");
		slowprint("\tSolo : ���L�A�٬O�J�A�F�A�٦���KGB�~���̤p�]���u�q���S�u�C",20);
		slowprint("�ڦb�Q�X�ϧA�F�����O�A���˪��}�d��άO�A���˪��W�n�H��ť���b�A���˳Q�e���������A�o�b���˪��B�Ͱ餤�ܨ��w��K\n\n",20);
		printf("\t(Illya��M���_��½��)\n\n");
		slowprint("\tSolo : �u�O�өʮ���z���H�ڡK�Ʊ�A�O�d�{���ȤF�C\n\n",20);
		slowprint("\tIllya : �ڭ˧Ʊ�A�O��ڪ���L�C\n\n",20);
	}
	else if(choice==2){
		slowprint("\tSolo : �K\n\n",20);
		slowprint("\tIllya : �ݨӧکһ������A�L�k�ϻ�O\n\n",20);
		slowprint("\tSolo: �K\n\n",20);
		slowprint("\tIllya : �Ʊ�A�b���ȶi�檺�ɭԤ��|��ڪ���L�Aù�����C\n\n",20);
	}
	else if(choice==3){
		printf("\tSolo : (�������H)\n\n");
		slowprint("\tIllya : �]���L�k�ϻ�ҥH�u�n�������H?\n\n",20);
		slowprint("\tSolo : �K\n\n",20);
		slowprint("\tIllya : �Ʊ�b���ȶi��ɧA���|���{�b�@�˰k���C\n\n",20);
		slowprint("\tSolo : �ڥu�Ʊ�A���n��ڪ���L�A�ڭ�ù�����C\n\n",20);
	}
	printf("\t(��O��H�K�e��ù���X���ȤF�C)\n\n");
	printf("\t(Solo�b�J�������j�U�o�{�F�@�ǤH�b����Illya�A�o�ǤH���ت��O�Ӹձ�Illya�O�_�u���O��ù���ҹ�ؿv�v)\n\n");
	printf("\t1. ĵ�iIllya 2. �L���A�ϥ�Illya�|�ۤv�d�w\n\n");
	printf("\t# ");
	scanf("%d",&choice);
	if(choice==1){
		printf("\t(Solo�w�w���VIllya)\n\n");
		slowprint("\tIllya : �A�b�F���H�A���Ӧb�o�̸�����ܪ��C\n\n",20);
		slowprint("\tSolo : �L�̭n�Ӹձ��A�O���O�u���ؿv�v�C\n\n",20);
		slowprint("\tIllya : �ڥi�H�ۤv�B�z�C\n\n",20);
		slowprint("\tSolo : �A���N��O��X���A��{�ۤv�ܮ`�Ȫ��ˤl�ܡH\n\n",20);
		slowprint("\tIllya : �o���O�X��H����ƭ���I\n\n",20);
		slowprint("\tSolo : �ӫ�򰵧A�]�M���a�C�O�@�Ӥ��p��ű�U�j���C\n\n",20);
		slowprint("\tIllya: �K\n\n",20);
		printf("\t(Illya����t�ѡA�u���D��F�@�Ǭy�]���I��)\n\n");
		slowprint("\t�V�V1�G�A���c�l�����ݰ�\n\n",20);
		slowprint("\tIllya : ����\n\n",20);
		slowprint("\t�V�V1 : ���p���ڧa\n\n",20);
		slowprint("\tIllya : ��A�ӻ��i��|���I�j\n\n",20);
		slowprint("\t�V�V2�G�����p���ڨǩ@�ؿ��a�C\n\n",20);
		printf("\t(Illya���X�F�ۤv���֧�)\n\n");
		slowprint("\t�V�V2�G�A�����]������\n\n",20);
		printf("\t(Illya���ǵS��)\n\n");
		printf("\t(�y�]�}�l��Illya)\n\n");
		printf("\t(Illya�����@�a�������F�V�V)\n\n");
		printf("\t(Illya����}�l�ݰʡA�M�ᥴ�F�䤤�@�Ӭy�])\n\n");
		printf("\t(�V�V2�G�X�M�l)\n\n");
		printf("\t(Solo�q���Y�X�{�A�N2�ӲV�V���w)\n\n");
		slowprint("\tSolo : �ݨӥu�����L�̥H���O�¤��ҷF���F�A�A�ٯu���ժ��B�z�o�ؤp�ưڡC\n\n",20);
		slowprint("\tIllya : �L�̮����F�ڤ��˪����I\n\n",20);
		slowprint("\tSolo : �A���O�ؿv�v�ܡH\n\n",20);
		slowprint("\tIllya : �ؿv�v�]�|���[�A�ӯS�u�|���F�L�̡C�U�A���n�A�ާڪ��ơA�ڭ̴N�|�ۦw�L�ơC\n\n",20);
		slowprint("\tSolo : �o�H�ٯu�T���K(os)\n\n",20); 
	}
	else if(choice==2){
		slowprint("\t�V�V1�G�A���c�l�����ݰ�\n\n",20);
		slowprint("\tIllya : ����\n\n",20);
		slowprint("\t�V�V1 : ���p���ڧa\n\n",20);
		slowprint("\tIllya : ��A�ӻ��i��|���I�j\n\n",20);
		slowprint("\t�V�V2�G�����p���ڨǩ@�ؿ��a�C\n\n",20);
		printf("\t(Illya���X�F�ۤv���֧�)\n\n",20);
		slowprint("\t�V�V2�G�A�����]������\n\n",20);
		printf("\t(Illya���ǵS��)\n\n");
		printf("\t(�y�]�}�l��Illya�A���GIllya�N�V�V��������)\n\n");
		printf("\t(���GCIA�MKGB�X�@���Ʊ��Q�Ǻ�o�{�F�A���ȫŧi����)\n\n");
		printf("\tending\n\n");
		end1++;//become ending 1
	}
	if(end1==0){//if not ending 1 story continue
		printf("\tSolo: 1. �~��n 2. �z�ʻ��A�L\n\n");
		printf("\t# ");
		scanf("%d",&choice);
		if(choice==1){
			slowprint("\tSolo : �A�쩳�������D�A��谵�F�������ơH�ڤ��۫H�|���S�u���A�o�������C\n\n",20);
			slowprint("\tIllya : �o�N�O�X��H����ƭ���A���{�P�N���L�I\n\n",20);
			slowprint("\tSolo : �ڬO���o�w�o�n��A�X�@�n�ܡH�{�b�d���ڱo�n��A���Ѷ��F�H\n\n",20);
			slowprint("\tIllya : �H���ګܷQ�����ЦX�@�ܡH�n���O�]���R�O�A�ڤj�i�ߨ���F�A�C\n\n",20);
			slowprint("\tSolo : ���n��ܻ����򺡡A�u�n�����ܤ]�O�ڱ��F�A�a�C\n\n",20);
			slowprint("\tIllya : �n�ڡA�ӸոլݰڡI\n\n",20);
			printf("\t(Solo�MIllya�}�l�j���X��A���G�����ӭt)\n\n",20);
			slowprint("\tSolo : �K�n�F�A�ڭ̳��N�R�I�a�C\n\n",20);
			slowprint("\tIllya : �K\n\n",20);
			printf("\t(��H���w�Ӵ�)\n\n");
		}
		else if(choice==2){
			slowprint("\tSolo : �o�ӥ��Ȼݭn�ڭ̨�Ӥ��Q�o�{���������A�U�~�බ�Q�i��C�A��谵���Ʊ��N���A�������t�I�Q�o�{�A�o�˦��h�M�I�A�������H\n\n",20);
			slowprint("\tIllya : ���o���A�o�N�O�ڪ���ƭ���A�֥γo�ذ����b�W���y��R�O��!\n\n",20);
			slowprint("\tSolo : �ڤ��O�b�R�O�A�A�ڥu�O�b���A��ĳ�A�ण�n�o��F�F�G�H�ܡH\n\n",20);
			slowprint("\tIllya: �K�n�a�K\n\n",20);
		}
		slowprint("...........................�j��...................................\n\n",50);
		printf("\t(Illya�h�ѥ[�ũ_�c�ԯ�B���q50�g�~������åίS��۾�����F�@�Ǥ��q�����h�A�o�{�L�̴���Ĳ�L���@�ת������g�u)\n\n");
		slowprint("\tIllya : �o�O�ڨϥΪ������A�L��P�����@�ת������g�u�A�W���o�Ǽҽk���u����ܥL�̹L�h24�p�ɤ�����Ĳ���@�׿�g�ʪ���C\n\n",20);
		slowprint("\tSolo : �ݨӧڱo�n�n�p�e�F�C\n\n",20);
		printf("\t(�ߤWSolo�W�ۨӨ�ũ_�c�ԯ�B���q���y��u�t�լd�A�O��M���F�A�ٷN�~�o�{Illya�]�b�o��)\n\n");
		slowprint("\tSolo : �A���|�b�o�̡H\n\n",20);
		slowprint("\tIllya : �o�N�O�A�����n�n�p���H\n\n",20);
		slowprint("\tSolo : �ڲߺD�楴�W���C\n\n",20);
		slowprint("\tIllya : �u���A�ڤ]�O�C\n\n",20);
		slowprint("\tSolo : �ڲq�O�|�����O�A�Ϊ�\n\n",20);
		slowprint("\tIllya : ���Ȯ�C\n\n",20);
		slowprint("\tSolo : �ڤ��|�����C\n\n",20);
		slowprint("\tIllya : �Z���q�O��_�٦�10�����A�p�G�A�Q�~��L�ҨƨƲ��\n\n",20);
		printf("\tSolo:  ��ܡG\n\n\t1.�n�a�A�����A��A���O�ֳ������D�ڭ̨ӹL�A�����ڭ̤]�ѤF�o��ơC\n\n\t2.�ݨӧڭ̥u�n�X�@�F�C�O�o�O��ګ�L\n\n\t3.�A�b�o�̥u�|��ګ�L�A�·ЧA�u�n�ܡH\n\n");
		printf("\t# ");
		scanf("%d",&choice);
		if(choice==1||choice==2){
			slowprint("\tIllya : �S���D�C���ڨ��W���C\n\n",20);
			slowprint("\tSolo : ���ڨ��U���C\n\n",20);
			printf("\t(Illya�}�l�}��)\n\n",20);
			slowprint("\tSolo : �ݭn�������ܡH\n\n",20);
			slowprint("\tIllya : �A�����̤j�����N�O���L�C\n\n",20);
			printf("\t(���ު�ĵ�ç֨��L�ӤF�C)\n\n");
			slowprint("\tSolo : �٬O�ڨӧa�C\n\n",20);
			slowprint("\tIllya : �n�a�K\n\n",20);
			
			system("cls");
			system("color F0");
			winorlose=game3();
			system("color 07");
			system("cls");
			printf("\n");
			if(winorlose==1){//win the game
				slowprint("\tSolo : �F�o�n�ڡA�p���C\n\n",20);
				slowprint("\tIllya : ���L�C\n\n",20);
				slowprint("\tSolo : �ڭ̥��h�U�۽լd�A5������b�o�̶��X�C\n\n",20);
				slowprint("\tIllya : OK.\n\n",20);
			}
			else if(winorlose==0){//meet end2 because lost the game
				printf("\t�]��Solo�Ӥ��Φb������������}�A��O2�H�K�Q�u�t����ĵ�o�{�F�A���ȫŧi����\n\n");
				end2++;
			}
			
		}
		if(end2==0){//story continue
			if(choice==3){
				slowprint("\tIllya : �A�{���A�వ�o��n�H\n\n",20);
				slowprint("\tSolo : ��M�C\n\n",20);
				slowprint("\tIllya : ���M�ڭ̨Ӥ��ɡA�ݬݽ֯�լd�즳�Q���T���C\n\n",20);
				slowprint("\tSolo : �n�ڡA���ڭ�5������b�o�̶��X�C\n\n",20);
				slowprint("\tIllya : Ok.\n\n",20);
			}
			slowprint("\t(..................................5������..............................)\n\n",50);
			slowprint("\tSolo : ������o�{�ܡH\n\n",20);
			slowprint("\tIllya : �S���C\n\n",20);
			printf("\t(���u�t���u���ӤF�ASolo�MIllya���F�_��)\n\n");
			printf("\t(Illya�ݤF�@�����u��W������A�åB�X�ۥL���}�m���d���ɭԱN�L���w)\n\n");
			slowprint("\tSolo : �A�b�F���H\n\n",20);
			slowprint("\tIllya : �ڭ��H�����O�ڤ��˪�����A�ڷd���F�C\n\n",20);
			slowprint("\tSolo : �o�ӤH�O��ˡK\n\n",20);
			slowprint("\tIllya : �ݬݳo�ӡA�y��u�t���u���m���d�̳��M������g���窫�A�o���Ӧ۵M�a�C\n\n",20);
			slowprint("\tSolo : �T��O�K\n\n",20);
			slowprint("\tIllya : �ӥB�d�l�̭��٦��@�����ö}��\n\n",20);
			printf("\t(Illya���U�}���A�@�������K�D���J�f�X�{�F)\n\n");
			printf("\t��� �G 1. ���i�h 2. �L����\n\n");
			printf("\t# ");
			scanf("%d",&choice);
			if(choice==1){
				printf("\t(���i�K�D��A�o�{�F�@�������O�I�w���a��)\n\n");
				slowprint("\tSolo : �A�n���}�L��?\n\n",20);
				slowprint("\tIllya : �٬O�A�ӧa�K\n\n",20);
				
				system("cls");
				system("color F0");
				winorlose=game7();
				system("color 07");
				system("cls");
				printf("\n");
				if(winorlose==1){
					printf("\t(���i�O�I�w�̵o�{)\n\n");
					slowprint("\tIllya : �A��Ĳ�ʨ�ĵ�a�ܡH\n\n",20);
					slowprint("\tSolo : ���i��A�o�ӫ�������S��ĵ�a\n\n",20);
					printf("\t(ĵ�a��M�j�T)\n\n");
					slowprint("\tIllya : �F�o�n�ڡAcowboy�C\n\n",20);
					slowprint("\tSolo : �ڭ̱o���ְk�F�C\n\n",20);
					
				}
				else if(winorlose==0){
					printf("\tSolo�MIllya��J�u�t���ƴN�Q�o�{�F�A�]�����ȫŧi���ѡA2�H�]�Q�e�h���������ǧ@�������H\n\n");
					printf("\tending\n\n");
					end4++;//meet end4;
				}
			}
			else if(choice==2){
				printf("\tSolo�MIllya�b�u�t�̨S�����u���A���ȳ��J���ۡA�̫�Ǻ馨�\���s�y�X��l�u�A��Ӽڬw���J�F���W�C\n\n");
				printf("\tending\n\n");
				end3++;
			}
			if(end3==0&&end4==0){//story continue
				system("cls");
				system("color F0");
				winorlose=game9();
				system("color 07");
				system("cls");
				printf("\n");
				if(winorlose==1){
					printf("\t(Solo�MIllya�Q�G�쨤��)\n\n");
					slowprint("\tIllya : �ڭn���F\n\n",20);
					slowprint("\tSolo : �h���H\n\n",20);
					slowprint("\tIllya : �h��a�C\n\n",20);
					printf("\t(Illya���X���~)\n\n");
					
				}
				else if(winorlose==0){
					printf("\tSolo�MIllya��J�u�t���ƴN�Q�o�{�F�A�]�����ȫŧi���ѡA2�H�]�Q�e�h���������ǧ@�������H\n\n");
					printf("\tending\n\n");
					end5++;//meet end5
				}
				if(end5==0){//story continue
					printf("\t1. ��۸��X�h 2. �d�b��a���H�_�� \n\n");
					printf("\t# ");
					scanf("%d",&choice);
					if(choice==1){
						printf("\t(Solo���X�h�A���G�L�b�a�W)\n\n");
						slowprint("\tSolo : �ڡK\n\n",20);
						slowprint("\tIllya : �֤W��C\n\n",20);
						printf("\t(Solo�W��A��k�X�h���h���u��3�ӡA�䤤2���w�g����)\n\n");
						slowprint("\tSolo : ��k�X�h���h���u�Ѥ@���F�A�b�A����e�٬O���Y�a\n\n",20);
						slowprint("\tIllya : ���L�A�ڳ̤��ݭn���N�O�A�������C\n\n",20);
						printf("\t(Illya�ĦV�ߤ@�}�۪��h��)\n\n");
						slowprint("\tSolo : �A�L���h���C\n\n",20);
						slowprint("\tIllya : �A���W�L�N�n�C\n\n",20);
						printf("\t(Illya��M�����s�ASolo�Q�ϤF�X�h)\n\n",20);
						slowprint("\tSolo : �u�n��^���W�F�K\n\n",20);
						slowprint("\tIllya : ���F�ICowboy!\n\n",20);
						printf("\t(Illya���Y�~�o�{Solo���i���̤F�C)\n\n");
						slowprint("\tIllya : �x�K\n\n",20);
						printf("\t(��MIllya����Q���I�F�C)\n\n"); 
					}
					else if(choice==2){
						printf("\tSolo�MIllya��J�u�t���ƴN�Q�o�{�F�A�]�����ȫŧi���ѡA2�H�]�Q�e�h���������ǧ@�������H\n\n");
						printf("\tending\n\n");//meet ending5 again
						end++;
					}
					if(end==0){//story continue
						printf("\tSolo:��ܡG1. ��77�A���Q�ޥL 2. �٬O�h�ϥL�@�U�n�F�A�����O�f�סC\n\n");
						printf("\t# ");
						scanf("%d",&choice);
						if(choice==1){
							slowprint("\tSolo : �ϥ��L�i�H�ۤv�_�ӧa�K\n\n",20);
							printf("\t(���GIllya�I�i���̡A���S�B�X����)\n\n");
							slowprint("\tSolo : �n�����ӧ��K�٬O�Ϥ@�U�L�a�C\n\n",20);
							slowprint("\tIllya : �y�K�y�K\n\n",20);
							slowprint("\tSolo : ���٬O�ݭn�A�ӧ������ȡA�ڭ̨Ӧn�n�����F�C\n\n",20);
							printf("\t(�^�춺���ASolo�MIllya�}�l�����ϴ��p�e�A2�H�M�w�b��Ѯi�}�ϴ��p�e)\n\n");
							key++;//the key point that will impact the after story
						}
						else if(choice==2){
							slowprint("\tSolo : �u�O�S��k�ڡK\n\n",20);
							printf("\t(Solo���i���̱NIllya�ϰ_��)\n\n");
							slowprint("\tIllya : �y�K�y�K\n\n",20);
							slowprint("\tSolo : ���֤W���a�C\n\n",20);
							slowprint("\tIllya : ��K���§A�ϤF�ڡC\n\n",20);
							slowprint("\tSolo : �ݨӧA�٬O��§�������C\n\n",20);
							slowprint("\tIllya : �ݨӧڭ̤��Ѥ]��O�լd�X�F�@�ǨƱ��A�ڭ̸Ӧn�n�����p��ѱ�Dr. Udo Teller�F�C\n\n",20);
							slowprint("\tSolo : ��K�]��A�ڭ̥����֦^�h�a�C\n\n",20);
							printf("\t(�^�춺���ASolo�MIllya�}�l�����ϴ��p�e�A2�H�M�w�b��Ѯi�}�ϴ��p�e)\n\n");	
						}
						slowprint(".........................(���ȷ��).....................\n\n",60);
						slowprint("\tSolo : �W�Ťw�g�������ɾ��e�ڭ̫e�h�L�̻s�y��l�u�����I�F�A�ڷQ�ӬO�ɶ��F�C\n\n",20);
						printf("\t(Solo�MIllya��F�ũ_�c�ԯ�B���q�s�y��l�u�����I)\n\n");
						slowprint("\tIllya : �O�o�O��ګ�L��\n\n",20);
						slowprint("\tSolo : ���O�ڭn�����C\n\n",20);
						printf("\t(2�H��J���I�ASolo�b�@�ӤH�����W�o�{Illya���˪����)\n\n");
						printf("\tSolo: ��ܡG 1. ���^�� 2.���ޥ��A���~�����\n\n");
						printf("\t# ");
						scanf("%d",&choice);
						if(choice==1){
							printf("\t(���F���^����ASolo�Q�Ĥ襴�w�A�Q�e�춰��������)\n\n");
							printf("\t(Solo�Q�Ǻ��Ǯa�j�b��N�x�W)\n\n");
							slowprint("\t�Ǻ��Ǯa�G�ݧA�����٤����O�A���ӥi�H�@�������������H\n\n",20);
							slowprint("\tSolo:�i�c�K(�L�k�ä�)\n\n",20);
						}
						else if(choice==2){
							
							system("cls");
							system("color F0");
							winorlose=game9();
							system("color 07");
							system("cls");
							printf("\n");
							if(winorlose==1){
								printf("\t(Solo�MIllya���\�ϤFDr. Udo Teller�C)\n\n");
								slowprint("\tSolo : ���ȵ����F�A�ڷQ�ڭ̤]�n�^�ۤv��a�L�ۤv���ͬ��F�C\n\n",20);
								slowprint("\tIllya : �]��A�J�M�X�@���Y�����F�A�ڭ̤S�n�^��쥻�Ĺ諸�����F�C\n\n",20);
								printf("\t��OSolo�MIllya�S�^��F�L�h�M�����ΦP�������ͬ��C\n\n");
								printf("\tending\n\n");
								end6++;//meet ending 6
							}
							else if(winorlose==0){
								printf("\t�Ǻ馨�\�N�s�y��������l�u����X�h�A�æb�i�����z���A�y���ʸU�H�ˤ`�A�ӤU�@�Ө��`�a�I�|�O����O�L�q�o���A�o�ϱo��Ӽڬw���J���W�C\n\n");
								printf("\tending\n\n");
								end8++;//meet ending 8
							}
						}
						if(end6==0&&end8==0){//story continue
							printf("\t��� 1.unknown or 2.unknown\n\n");
							printf("\t# ");
							scanf("%d",&choice);
							if(key==1){
								printf("\t��OSolo�����Ǻ餣�H�D���窺�t�@�ӹ���~�Ať��������̦��ӳQ�R���Ӫ�����H�D�j��i��N�����A�̫ᬡ���ᦺ�F�C\n\n");
							}
							else if(key==0){
								printf("\t(Solo�ݨ�Illya�q��Ǯa�᭱�C�C���a��)\n\n");
								slowprint("\tSolo : �S�Q��ڳ��M�|ı�o�ݨ��A�ܶ}��\n\n",20);
								slowprint("\t�Ǻ��Ǯa�G���K?\n\n",20);
								printf("\t(Illya��Ǻ��Ǯa��A)\n\n");
								slowprint("\tIllya : �L�̥���κ�����l�u����X�h�A�ڭ̱o���I�C\n\n",20);
								
								system("cls");
								system("color F0");
								winorlose=game6();
								system("color 07");
								system("cls");
								printf("\n");
								if(winorlose==1){
									slowprint("\tSolo : �ݨӥ��Ȧ��\�F�A�ڭ̤j���]�n�^�ۤv��a�U���U���a�C\n\n",20);
									slowprint("\tIllya : �ڥu�໡�A�u���O�ܮt�l�����ҡC\n\n",20);
									slowprint("\tSolo : �ڤ]�ܰQ���M�A�f�סA��F�A�o�O�ڭ���쪺\n\n",20);
									printf("\t(Solo���XIllya���˪����)\n\n");
									printf("\t(Illya�N�F�N����A�M��N�����W)\n\n");
									slowprint("\tIllya : ���¡A�ݨӤ]�O������������H���C\n\n",20);
									slowprint("\tSolo : ���O�ڭn�����C\n\n",20);
									printf("\t(Adrian Sanders��M�X�{)\n\n");
									slowprint("\tAdrian Sanders : �ݨӧA�̦X�@���������C\n\n",20);
									slowprint("\tSolo : ���T�O�C\n\n",20);
									slowprint("\tAdrian Sanders : �ڭ��w�g�M��Ĭ�x���p���L�F�A�J�M�A�̳o�����ȦX�@�o�����A���p�ڭ̥H��N�~��զ��ζ��a�C\n\n",20);
									slowprint("\tSolo & Illya:!?\n\n",20);
									slowprint("\tAdrian Sanders : ���ٵ��F�A�̤@�ӥN���A�N�sUNCLE�C\n\n",20);
									slowprint("\tSolo : �ݨӧڭ̯u���O�^�t�ڡI\n\n",20);
									slowprint("\tIllya : ���O�ڭn�����C\n\n",20);
									printf("\tending\n\n"); 
								}
								else if(winorlose==0){
									printf("\t��OSolo�����Ǻ餣�H�D���窺�t�@�ӹ���~�Ať��������̦��ӳQ�R���Ӫ�����H�D�j��i��N�����A�̫ᬡ���ᦺ�F�C\n\n");
									printf("\tending\n\n");
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	system("cls");
	printf("\n\n\t\t���޵��G�p��A�M�ڪ��ӹC���a\n\n");
	slowprint("..........................................................................",40);
	game4();
	system("md D:\\final_project\\user\\chara3");
	printf("\t\t���׹C��Ĺ�ο�A���ߧA�A��o�@�]�@���^�U!!\n\n");
	system("copy D:\\final_project\\allcg\\01.jpg D:\\final_project\\user\\chara3\\01.jpg");
	system("copy D:\\final_project\\allcg\\02.jpg D:\\final_project\\user\\chara3\\02.jpg");
	system("copy D:\\final_project\\allcg\\03.jpg D:\\final_project\\user\\chara3\\03.jpg");
	system("copy D:\\final_project\\allcg\\05.jpg D:\\final_project\\user\\chara3\\05.jpg");
	system("copy D:\\final_project\\allcg\\06.jpg D:\\final_project\\user\\chara3\\06.jpg");
	system("copy D:\\final_project\\allcg\\08.jpg D:\\final_project\\user\\chara3\\08.jpg");
	system("copy D:\\final_project\\allcg\\09.jpg D:\\final_project\\user\\chara3\\09.jpg");
	system("copy D:\\final_project\\allcg\\14.jpg D:\\final_project\\user\\chara3\\14.jpg");
	system("copy D:\\final_project\\allcg\\15.jpg D:\\final_project\\user\\chara3\\15.jpg");
	system("copy D:\\final_project\\allcg\\17.jpg D:\\final_project\\user\\chara3\\17.jpg");
	system("copy D:\\final_project\\allcg\\18.jpg D:\\final_project\\user\\chara3\\18.jpg");
	system("copy D:\\final_project\\allcg\\19.jpg D:\\final_project\\user\\chara3\\19.jpg");
	
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

