#include <iostream>
using namespace std;
int main(){
	freopen("个人介绍.txt","r",stdin);
	string str;
	cin>>str;
	freopen("CON","r",stdin);
	cout<<"<h1>个人介绍</h1>"<<endl;
	cout<<"<p>"<<str<<"</p>"<<endl;
	return 0;
}
