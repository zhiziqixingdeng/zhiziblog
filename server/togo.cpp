#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int ans;
struct blog{
	string mz;//名字
	string zt;//主题
	int flag;//是否删除
	string nr;//内容
}s[9999999];
string name,ss;
int main(){
	cout<<"请创建所有的文章名字+.html的文件"<<endl;
	system("pause");
	system("cls");
	freopen("注册.txt","r",stdin);
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
		freopen(s[i].mz+".html","w",stdout);
		cout<<"<html>"<<endl<<"<head>"<<endl<<"<h2>"<<endl<<name<<"的blog-基于zhiziblog</h2>"<<endl;
		cout<<"<a href="<<ss<<">博客主页</a>"<<endl;
		cout<<"<br>"<<endl;
		ss="./个人简介.exe";
		cout<<"<a href="<<ss<<">个人简介</a>"<<endl;
		cout<<"<br>"<<endl;
		cout<<"</head>"<<endl;
		cout<<"<body>"<<endl;
		cout<<"<h3>"<<s[i].mz<<"</h3>"<<endl;
		cout<<"<p>"<<s[i].nr<<"</p>"<<endl;
	}
	return 0;
}
