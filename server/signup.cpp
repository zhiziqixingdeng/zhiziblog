#include <iostream>
#include <string>
using namespace std;
int main(){
	cout<<"����������:";
	string name;
	getline(cin,name);
	freopen("signup.txt","w",stdout);
	cout<<0<<endl<<name<<endl;
	return 0;
}
