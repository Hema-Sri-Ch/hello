#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	cin >> name;
	cout << "Hello World!\n";
	cout << "Hello " << name << endl;
	int i;
	for (i=0; i<5; i++){
		cout << "loop number " << i << endl;
	}
	return 0;
}
