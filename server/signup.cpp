#include <iostream>
#include <string>
using namespace std;
int main(){
	cout<<"ÇëÊäÈëÃû×Ö:";
	string name;
	getline(cin,name);
	freopen("signup.txt","w",stdout);
	cout<<0<<endl<<name<<endl;
	return 0;
}
