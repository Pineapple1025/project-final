#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime> 
using namespace std;
int show_event(int event);
int event_Result(int event,int &good, int &bad, int choice);  
int judge_result(int &good, int &bad);
int main()
{
	srand(time(NULL));
	int min=2, max=10, good=0, bad=0, event=0;
	int choice=0;
	int RandNum=rand()%(max-min+1)+min;
	event=1;
	
	cout<<"-------------�j�����@��-----------\n\n" //�e�� 
		  "��:�u�j��!�_�ɤF!!�n���F���I�_��!!�v\n" 
		  "��:�u�V�F�A�S�n���F!�v\n"
		  "��:�u�G��A�ڦb�Ѯ�W�d�ۯȱ�:�y�ڦ��Ʊ��ݭn�B�z�A�o�X�Ѥ��b�A���_�U�d���A�A���ݭn�N�Χa!�z�v\n\n"
		  "----------------------------------\n\n";
	cout<<"************�ƥ�}�l!!************\n\n"; 
		  
	for(int i=0; i<5; i++) //�s�����|�� 
	{
		event=rand()%(max-min+1)+min; //�H�����ͤ@�ӼƦr
		show_event(event);  //�����Ʀr���ƥ�(�t�ﶵ) 
		cin>>choice; //���X���
		while(choice!=1&&choice!=2) //�Y��J1�B2�H�~���Ʀr�ݭ��s��J���쥿�T 
		{
			cout<<"�ﶵ�u��1��2�n�ܡAAGAIN!!!\n";
			cin>>choice;
		 } 
		event_Result(event,good,bad,choice); //�ھڿ�ܵ��X���G
		system("pause");
		system("cls");
	}
	
	cout<<"�h��A�ڲש�^�ӤF!!\n\n";
	cout<<"�ثe�L����:"<<good<<endl;
	cout<<"�ثe���c��:"<<bad<<endl;
	judge_result(good, bad);
	
	return 0;
}
int show_event(int event) //�ƥ�(�t�ﶵ) 
{
	if(event==1)
	{
		cout<<"���B�ɭ�n�J���F�D��P�p�ҡA�L�̥��b���ܤp�ҷs�R������\n"
			  "�D:�u���ڰդp�ҡA���M�ڴ~�A�A�A�Ӥe�l�Y �v\n"
			  "��:�u���i�H�o�ˡA�ڤ~��R�C�A�A��򤣦ۤv�h�R�@�ӰڡA�D�l�v\n" 
		  	  "�ϥ�:1.�˻f���B2.���N��\n";
	}
	else if(event==2)
	{
		cout<<"��:�u�V�F�A��M�Q�_�W���Ҹզҹs���Q�����|�F�A���ۤU���n�O�A�ҹs���N�S���s�ο��F�v\n"
			<<"��:�u���O�Ҹէ֭n�}�l�F�A����!�v\n" 
			<<"�ϥ�1.�O�ЦR�q�B2.�ɥ���\n";
	}
	else if(event==3)
	{
		cout<<"�������]�L�����W�A�ݨ����䦳�@�Ӥp�k�ĥ��b���_\n"
			<<"��:�u�p���F?�v\n"
			<<"�k:�u�ڧ䤣������A�o�O���O���n�ڤF����5555�v\n" 
			<<"�ϥ�1.�����^�k�Q���B2.�޸��Ѩ�\n";
	}
	else if(event==4)
	{
		cout<<"�g�L�Ŧa�����W���M�ݨ��D��^�i�����A�d��L�k�ò�A���h�ݬݦn�F\n"
			<<"�D:�u����ާr�A����ڤj���A�ڥX���h!�v\n"
			<<"��:�u�u���C�����C�v\n" 
			<<"�ϥ�1.�Y�p�O�B2.�˥߶K��\n";
	}
	else if(event==5)
	{
		cout<<"�Ѯv�b���ƾǡA�y�ճo�򥭲H...�n�Q��ı��Zzz\n"
			<<"�v:�u�c�A�o��O�ӳo�ˤl���ڡA�O���O�ڦU��P��?�v\n" 
			<<"�ϥ�1.�P�ʳ��J���B2.������y\n";
	}
	else if(event==6)
	{
		cout<<"���F!�b�R���a���p�߯{���a�o�����̳��w����~�A����!\n"
			<<"�R:�u�j��!!WTF!�ڶ������ӧ֦^�a�F�A�o���ֳB�z�~��v\n" 
			<<"�ϥ�1.�ɥ����B2.�Ů�\n";
	}
	else if(event==7)
	{
		cout<<"��:�u�̪񳣦b�a�̹j���n�L��@�A�u�Q�X�h�����C�v\n"
			<<"��:�u�ڤ]�nbored�C�v\n"
			<<"�ϥ�1.�@���}�N�U�B���ʡB2.�Ǥ��Ȧ��\n";
	}
	else if(event==8)
	{
		cout<<"�p���a�̳̪��i�F�@���~�����p�ߡA���O�D�`���ȥ͡A�j���M��L�H�@�_�h�p���a�l�߿�\n"
			<<"��:�u���n�Ӿa��e�A�e�Ʀܷ|��H!�v\n"
			<<"��:�u�c�]�ߨk�C�v\n" 
			<<"�ϥ�1.��ӭ����{�B2.�����n��\n";
	}
	else if(event==9)
	{
		cout<<"��:�u�j���A�֥h�|�l�̩�����A�S�ާ����i�H�Y��!�v\n"
			<<"��:�u����...�٭n�X���t�@?�i�H�[�I��?���O�{�b�n��...�u�Q�Τ�ıZzz�v\n"
			<<"�ϥ�1.���Τ��O�B2.���ԤB���O\n";
	}
	else if(event==10)
	{
		cout<<"�˱��P�L���p�Ĭ�M�ӳX�A�~�ȤT�����p�k�ħn�ۭn�j������\n"
			<<"�k:�u���ڪ��աA��������������������~~�v\n"
			<<"��:�u�u�O���A�S��k�v\n" 
			<<"�ϥ�1.�����˴��B2.����Y�y\n";
	}
}
int event_Result(int event,int &good,int &bad, int  choice) //�ﶵ(�t���G) //�ϥ�call by reference�������good�Bbad  
{
	if(event==1&&choice==1)
	{
		cout<<"�A��ܧ�˻f���ɵ��p�ҡA���U�L�����x�ҡA�L����+1\n";
		good+=1;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==1&&choice==2)
	{
		cout<<"�A��ܨϥΥ��N���m������þڨ䬰�v���A���c��+1\n";
		bad+=1;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==2&&choice==1)
	{
		cout<<"�A�ΰO�ЦR�q�{�ɩ��}�A���N�O�@��!�A���c��+2\n";
		bad+=2;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 	 
	}
	else if(event==2&&choice==2)
	{
		cout<<"�A�ϥήɥ����^��@��§���e�I�Y�WŪ�A��ӥ������H!�L����+2\n";
		good+=2;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
    else if(event==3&&choice==1)
	{
		cout<<"�~�M���p�k�ĬO�򥢪��~�A���c��+1\n";
		bad+=1;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==3&&choice==2)
	{
		cout<<"�޸��Ѩ϶��Q�a�޾ɤp�k�Ľ�W�^�a���D���A�L����+1\n";
		good+=1;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==4&&choice==1)
	{
		cout<<"�Y�p�O���D���ܤp�ᦨ�\���}�F�����A�L����+2\n";
		good+=2;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==4&&choice==2)
	{
		cout<<"��˥߶K���H�b�D�ꨭ�W�A�D��ܤF�n�h�����̪����A���c��+2\n";
		bad+=2;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl;  
	}
    else if(event==5&&choice==1)
	{
		cout<<"��P�ʳ��J�����F�Ѯv�A����ı�o�ҵ{�ޤH�J�ӥB�O�H�P�ʡA���H�Q�@ť�Ať�A�L����+1\n";
		good+=1;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==5&&choice==2)
	{
		cout<<"�������y�Q�b�Ѯ�W�}�l�j�Y�S�Y�A�]���Y�F��N���|�Q�ΤF~���O�W�Ҥ���Y�F��!!�A���c��+1\n";
		bad+=1;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==6&&choice==1)
	{
		cout<<"�ɥ������Q�����~�^�_�쪬�F�A���K�פF�a�̨�L�a�����]�I�A�L����+2\n";
		good+=2;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==6&&choice==2)
	{
		cout<<"�A�ϥΤF�Ů䊠�a�̨�L�F��{�a�A���˦��D�p�����ˤl�A���c��+2\n";
		bad+=2;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==7&&choice==1)
	{
		cout<<"�i�D�����p�G�O�äF�N���|�Q�X���F�A���G�����P�_�F�A���c��+3\n";
		bad+=3;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==7&&choice==2)
	{
		cout<<"�ϥΫǤ��Ȧ���a������@�ɦU��C���F�Ƥ��Ӽƪ��W�ӡA�����Q���}�ߡA�L����+3\n";
		good+=3;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==8&&choice==1)
	{
		cout<<"�N��ӭ����{���p�ߦY�U���ᦨ���Ź��p�ߡA�j�a�l�ߧl�o�ܶ}�ߡA�L����+1\n";
		good+=1;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==8&&choice==2)
	{
		cout<<"�l��X�����n�ͨӸ�p�߷�B�͡A���G��������p�ߥ��F�@�[�A���c��+1\n";
		bad+=1;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==9&&choice==1)
	{
		cout<<"�����Τ��O�ܦb���W����ΤF�ӵΪA����ı�A�Ӱ��i�F!�A���c��+2\n";
		bad+=2;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==9&&choice==2)
	{
		cout<<"�l�꯫�O�̪����F�A�K�ʤ��ءA���ʤ��ءA���סA���סA���K���+�N��+���a�ơA����a�ȡA�L����+2\n";
		good+=2;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==10&&choice==1)
	{
		cout<<"�N�����˴��Q�b�����W�A�a�ۤp�k�Ħb�����W�Z��APEX�A�׹L�F�ּ֪��ɥ��A�L����+3\n";
		good+=3;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl<<endl; 
	}
	else if(event==10&&choice==2)
	{
		cout<<"�Ϋ���Y�y��ۤv�ܦ�����V�@�����Z�ۤv���p�k�ĳ��_�A���c��+3\n";
		bad+=3;
		cout<<"�ثe�L����:"<<good<<endl;
		cout<<"�ثe���c��:"<<bad<<endl; 
	}
 } 
int judge_result(int &good, int &bad) //�P�_���c�ȷL���Ȫ��j�p���Y�A�ÿ�X�������G 
{
	if(bad==good)
	{
		cout<<"�A�����c�ȻP�L���Ȭ۵��A�ݨӬO�Ӵ��q���H\n\n" 
			  "�G:�u�����A��p�ڤj���A�{�ɳo�˶]�^�h22�@���A�]���G�լ�����X���p�F�Ať���O�����ɪ��j�f�v\n"
			  "�G:�u����³ǧJ�v�����᪬�p�N�n�ܦh�F�A�ҥH�ڴN���W�^�ӬݧA�F�v\n"
			  "�G:�u���O�Pı�A�L�o�������v\n" 
			  "��:�u��ӬO�o�ˡA���L���n�A�^�ӤF�A���M�n�L��@�v\n"
			  "���U���G��A�کM�j���r�֪���F�n�@�}�l�A���ɤF�ܦh�o�}�l�o�ͪ��Ʊ��C�w��^�ӡA�G��A�ڡC\n\n"
			  "EEEEEE  NN    N  DDDDD\n"  
			  "E       N N   N  D    D\n"
			  "EEEEEE  N  N  N  D     D\n"
			  "E       N   N N  D    D\n"
			  "EEEEEE  N    NN  DDDDD";
	}
	else if(bad>good)
	{
		cout<<"�A�����c�Ȥj��L���ȡA�ݨӬO���a�p��\n\n" 
		      "�G:�u�ש�^�ӤF�A�j���o�X�ѹL�o���˰�?�v\n"
			  "��:�u��...�٥i�H�� �v\n" 
			  "�G:�u�O�ܡA���M�����}�F�@�}�l�A�����ڳ����b�q�q���`�A�v\n"
			  "�G:�u�]�A�A�����a�Ƨڥi�O�ݪ��@�M�G��!�v\n"
			  "�G:�u�A�o��bad boy!!�v\n"
			  "��Ӥj���Q�G��A�ڸH���F�n�@�}�l�A�Q�g�@�@��§������ϥιD��F�C�i���A����j���C\n\n"
			  "EEEEEE  NN    N  DDDDD\n"  
			  "E       N N   N  D    D\n"
			  "EEEEEE  N  N  N  D     D\n"
			  "E       N   N N  D    D\n"
			  "EEEEEE  N    NN  DDDDD";
	}
	else if(bad<good)
	{
		cout<<"�A���L���Ȥj��L���ȡA�ݨӬO�Ө��_�_\n\n"
			  "�G:�u�ש�^�ӤF�A�j���o�X�ѹL�o���˰�?�v\n"
			  "��:�u��O�����a!�h���F�G��A�ڪ����_�U�A���F�ګܦh�����v\n"
			  "��:�u���O�D�㤣�O�A���X�ӴN�Pı���̤��﫢���v\n"
			  "�G:�u���M�����}�F�@�}�l�A���٬O���b�I���q�q���`�A�v\n"
			  "�G:�u���M�A���k�¡A���٬O�ܵ��}��!�o�]�O����������}�F�o��[�v\n"
			  "��:�u����N��?�v\n"
			  "�G:�u�n�n!�o�O�ڦ^22�@���ƶ��R�^�Ӫ�PS200�A�ڥi�O�ƤF�C�C�|�Q�E�ѡv\n"
			  "�G:�u�o�O�A�����@�Ө��_�_�����y!\n"
			  "��:�u�n�C!!�Ӫ��a!!�j�ԤT�ʦ^�X!!!!�v\n"
			  "��Ӥj���M�G��A�ڴr�֪���PS200���A�A�]�ܽ��R���L�̤@�P�C���C���§A�A�G��A�ڡA�w��^�ӡC\n\n"
			  "EEEEEE  NN    N  DDDDD\n"  
			  "E       N N   N  D    D\n"
			  "EEEEEE  N  N  N  D     D\n"
			  "E       N   N N  D    D\n"
			  "EEEEEE  N    NN  DDDDD"; 
	}
}
 
 

