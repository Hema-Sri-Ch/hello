#include <iostream>
#include <string>
using namespace std;

void Address(string str){
	cout << "Hello!, Welcome to learning" << str << endl;
}

int main(){
	string name;
	cin >> name;
	cout << "Hello World!\n";
	cout << "Hello " << name << endl;
	Address(name);
	int i;
	for (i=0; i<5; i++){
		cout << "loop number " << i << endl;
	}
	return 0;
}
