#include <iostream>
#include <string>
using namespace std;
string name;
int ans;
struct blog{
	string mz;//����
	string zt;//����
	int flag;//�Ƿ�ɾ��
	string nr;//����
}s[9999999];
string ss="./index.exe";
int main(){
	cout << "Content-type:text/html\r\n\r\n";
	freopen("����.txt","r",stdin);
	cin>>ans;
	getline(cin,name);
	for(int i=1;i<=ans;i++){
		getline(cin,s[i].mz);
		getline(cin,s[i].zt);
		cin>>s[i].flag;
		getline(cin,s[i].nr);
	}
	freopen("CON","r",stdin);
	cout<<"<html>"<<endl<<"<head>"<<endl<<"<h2>"<<endl<<name<<"��blog-����zhiziblog</h2>"<<endl;
	cout<<"<a href="<<ss<<">������ҳ</a>"<<endl;
	cout<<"<br>"<<endl;
	ss="./���˼��.html";
	cout<<"<a href="<<ss<<">���˼��</a>"<<endl;
	cout<<"<br>"<<endl;
	cout<<"</head>"<<endl;
	cout<<"<body>"<<endl;
	cout<<"<h3>"<<name<<"������</h3>"<<endl;
	for(int i=1;i<=ans;i++){
		if(s[i].flag==1){
			cout<<"<a href="<<s[i].mz<<">"<<s[i].mz<<"</a>"<<endl;
			cout<<"<i>"<<s[i].zt<<"</i>"<<endl;
			cout<<"<br>"<<endl;
		}
	}
	cout<<"<del>�Ժ��Ĳ���zhiziblog</del>"<<endl;
	return 0;
}
