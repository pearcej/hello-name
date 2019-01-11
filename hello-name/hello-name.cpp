// L01: Intro to VS, Github, and ASCII Art 
// by Dr. Jan Pearce

#include <iostream>
#include <string>
using namespace std;

int main() {
	string yourname;
	char stop;

	cout << "what is your first name? ";
	cin >> yourname;

	cout << "           _____________________________________ " << endl;
	cout << "         //_________________(o)_________________\\ " << endl;
	cout << endl;
	cout << "         || > Hello,                            || " << endl;
	cout << "            > " << yourname << "!" << endl;
	cout << "         || > Welcome to CSC 236!               || " << endl;
	cout << "            > We're happy you are here," << endl;
	cout << "         || > and want to help!                 || " << endl;
	cout << "                       - Dr. Jan and TAs" << endl;
	cout << "         ||                                     || " << endl;
	cout << endl;
	cout << "         ||_____________________________________|| " << endl;
	cout << "        /_______________________________________ \\ " << endl;
	cout << "       /_| _| _| _| _| _| _| _| _| _| _| _| _| _| \\ " << endl;
	cout << "      /____| _| _| _| _| _| _| _| _| _| _| _| ___| \\ " << endl;		
	cout << "     /___| _| _| _| _| _| _| _| _| _| _| _| _| ___| \\ " << endl;
	cout << "    /__| _| _| _| _| _| _| _| _| _| _| _| _| _| ___  \\ " << endl;
	cout << "   /_| _| _| _| _|______________________|  _| _|_|_|  \\ " << endl;
	cout << "  /________________/                  \\________________\\ " << endl;
	cout << " (________________/____________________\\_______________) " << endl;

	cin >> stop; //Keeps window open in some cases
	return 0;
}