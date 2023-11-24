#include <iostream>
#include <string>
using namespace std;
string name;
int ans;
struct blog{
	string mz;//名字
	string zt;//主题
	int flag;//是否删除
	string nr;//内容
}s[9999999];
string ss="./index.exe";
int main(){
	cout << "Content-type:text/html\r\n\r\n";
	freopen("me.txt","r",stdin);
	cin>>ans;
	getline(cin,name);
	for(int i=1;i<=ans;i++){
		getline(cin,s[i].mz);
		getline(cin,s[i].zt);
		cin>>s[i].flag;
		getline(cin,s[i].nr);
	}
	ss="index.exe";
	char xx='"';
	string sss="style.css";
	freopen("CON","r",stdin);
	cout<<"<html>"<<endl<<"<head>"<<endl<<"<h2>"<<endl<<name<<"的blog-基于zhiziblog</h2>"<<endl;
	cout<<"<link rel="<<xx<<ss<<xx<<" href="<<xx<<sss<<xx<<">"<<endl;
	cout<<"<a href="<<ss<<">博客主页</a>"<<endl;
	cout<<"<br>"<<endl;
	ss="./me.exe";
	cout<<"<a href="<<ss<<">个人简介</a>"<<endl;
	cout<<"<br>"<<endl;
	cout<<"</head>"<<endl;
	cout<<"<body>"<<endl;
	cout<<"<h3>"<<name<<"的文章</h3>"<<endl;
	ss="stylesheet";
	for(int i=1;i<=ans;i++){
		if(s[i].flag==1){
			ss="./"+s[i].mz;
	    cout<<"<a href="<<ss<<">"<<s[i].mz<<"</a>"<<endl;
			cout<<"<i>"<<s[i].zt<<"</i>"<<endl;
			cout<<"<br>"<<endl;
		}
	}
	cout<<"<del>自豪的采用zhiziblog</del>"<<endl;
	return 0;
}
