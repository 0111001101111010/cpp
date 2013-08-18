/* #1 Backup and Reverse it
Make a String and reverse it*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){


	string word;
	cin >> word;

	for (std::string::reverse_iterator rit=word.rbegin(); rit!=str.rend(); ++rit){
			cout << *rit;
	}



	return 0;
}