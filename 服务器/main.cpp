#include <iostream>
#include <string>
#include <cstdlib>
#include <unistd.h>
using namespace std;
string name,str;
int ans,n,w;
struct blog{
	string mz;//名字
	string zt;//主题
	int flag;//是否删除
	string nr;//内容
}s[9999999];
bool td(){//很像质数判断(被打
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
			cout<<"删除成功!"<<endl;
			s[i].flag=0;
			return;
		}
	}
	cout<<"未找到文章"<<endl;
	return;
}
int main(){
	cout<<"欢迎使用zhiziblog"<<endl;
	sleep(1);
	freopen("注册.txt","r",stdin);
	cin>>ans;
	if(ans==-1){
		system("start 注册.exe");
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
		cout<<name<<"有何贵干?"<<endl<<"1.发布文章"<<endl<<"2.删除文章"<<endl<<"3.文章列表"<<endl<<"4.退出";
		cin>>n;
		if(n==1){
			ans++;
			system("cls");
			cout<<"请在文章.txt中写出文章内容"<<endl;
			system("pause");
			system("cls");
			cout<<"请输入文章名字:";
			getline(cin,s[ans].mz);
			cout<<"请输入文章主题:";
			getline(cin,s[ans].zt);
      freopen("文章.txt","r",stdin);
      getline(cin,s[ans].nr);
      freopen("CON","r",stdin);
			if(td()==true){
			s[ans].flag=1;
		  cout<<"ok"<<endl;
			sleep(1);
			system("cls");
			}
			else{
				cout<<"文章名称不能和以前的相同!"<<endl;
				sleep(1);
	      system("cls");
				ans--;
			}
		}
		else if(n==2){
			system("cls");
			cout<<"请输入文章名字来删除:";
			getline(cin,str);
			sh();
			sleep(1);
			system("cls");
		}
		else if(n==3){
			system("cls");
			cout<<"文章列表:"<<endl;
			for(int i=1;i<=ans;i++){
				if(s[i].flag==1){
					cout<<s[i].mz<<endl;
				}
			}
			system("pause");
			system("cls");
		}
		else if(n==4){
			freopen("文章.txt","w",stdout);
			for(int i=1;i<=ans;i++){
				cout<<s[i].mz<<endl<<s[i].zt<<endl<<s[i].flag<<s[i].nr<<endl;
			}
			freopen("CON","w",stdout);
			cout<<"感谢使用"<<","<<name<<endl;
			sleep(1);
			return 0;
		}
		else{
			cout<<"错误"<<endl;
			sleep(1);
			system("cls");
		}
	}
}
