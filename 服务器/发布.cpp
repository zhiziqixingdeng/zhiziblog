#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int ans;
struct blog{
	string mz;//����
	string zt;//����
	int flag;//�Ƿ�ɾ��
	string nr;//����
}s[9999999];
string name,ss;
int main(){
	cout<<"�봴�����е���������+.html���ļ�"<<endl;
	system("pause");
	system("cls");
	freopen("ע��.txt","r",stdin);
	cin>>ans;
	getline(cin,name);
	for(int i=1;i<=ans;i++){
		getline(cin,s[i].mz);
		getline(cin,s[i].zt);
		cin>>s[i].flag;
		getline(cin,s[i].nr);
	}
	freopen("CON","r",stdin);
	for(int i=1;i<=ans;i++){
		freopen(s[i].mz,"w",stdout);
		cout<<"<html>"<<endl<<"<head>"<<endl<<"<h2>"<<endl<<name<<"��blog-����zhiziblog</h2>"<<endl;
		cout<<"<a href="<<ss<<">������ҳ</a>"<<endl;
		cout<<"<br>"<<endl;
		ss="./���˼��.exe";
		cout<<"<a href="<<ss<<">���˼��</a>"<<endl;
		cout<<"<br>"<<endl;
		cout<<"</head>"<<endl;
		cout<<"<body>"<<endl;
		cout<<"<h3>"<<s[i].mz<<"</h3>"<<endl;
		cout<<"<p>"<<s[i].nr<<"</p>"<<endl;
	}
	return 0;
}
