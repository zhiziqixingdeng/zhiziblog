#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string name,str;
int ans,n,w;
struct blog{
	string mz;//����
	string zt;//����
	int flag;//�Ƿ�ɾ��
	string nr;//����
}s[9999999];
bool td(){//���������ж�(����
	if(ans==1){
		return true;
	}
	for(int i=ans-1;i>=1;i++){
		if(s[i].mz==s[ans].mz){
			return false;
		}
	}
	return true;
}
void sh(){
	for(int i=1;i<=ans;i++){
		if(str==s[i].mz){
			cout<<"ɾ���ɹ�!"<<endl;
			s[i].flag=0;
			return;
		}
	}
	cout<<"δ�ҵ�����"<<endl;
	return;
}
int main(){
	cout<<"��ӭʹ��zhiziblog"<<endl;
	sleep(1);
	freopen("ע��.txt","r",stdin);
	cin>>ans;
	if(ans==-1){
		system("start ע��.exe");
		return 0;
	}
	else{
	getline(cin,name);
	for(int i=1;i<=ans;i++){
		getline(cin,s[i].mz);
		getline(cin,s[i].zt);
		cin>>s[i].flag;
		getline(cin,s[i].nr);
	}
	freopen("CON","r",stdin);
	}
	system("cls");
	while(true){
		cout<<name<<"�кι��?"<<endl<<"1.��������"<<endl<<"2.ɾ������"<<endl<<"3.�����б�"<<endl<<"4.�˳�";
		cin>>n;
		if(n==1){
			ans++;
			system("cls");
			cout<<"��������.txt��д����������"<<endl;
			system("pause");
			system("cls");
			cout<<"��������������:";
			getline(cin,s[ans].mz);
			cout<<"��������������:";
			getline(cin,s[ans].zt);
      freopen("����.txt","r",stdin);
      getline(cin,s[ans].nr);
      freopen("CON","r",stdin);
			if(td()==true){
			s[ans].flag=1;
		  cout<<"ok"<<endl;
			sleep(1);
			system("cls");
			}
			else{
				cout<<"�������Ʋ��ܺ���ǰ����ͬ!"<<endl;
				sleep(1);
	      system("cls");
				ans--;
			}
		}
		else if(n==2){
			system("cls");
			cout<<"����������������ɾ��:";
			getline(cin,str);
			sh();
			sleep(1);
			system("cls");
		}
		else if(n==3){
			system("cls");
			cout<<"�����б�:"<<endl;
			for(int i=1;i<=ans;i++){
				if(s[i].flag==1){
					cout<<s[i].mz<<endl;
				}
			}
			system("pause");
			system("cls");
		}
		else if(n==4){
			freopen("����.txt","w",stdout);
			for(int i=1;i<=ans;i++){
				cout<<s[i].mz<<endl<<s[i].zt<<endl<<s[i].flag<<s[i].nr<<endl;
			}
			freopen("CON","w",stdout);
			cout<<"��лʹ��"<<","<<name<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"����"<<endl;
			sleep(1);
			system("cls");
		}
	}
}
