#include <iostream>
#include <string>
using namespace std;

int main() {
	string yourname;
	char stop;

	cout << "what is your name?";
	cin >> yourname;
	cout << "Hello, " << yourname << "!" << endl;

	cin >> stop; //Keeps window open in some cases
	return 0;
}