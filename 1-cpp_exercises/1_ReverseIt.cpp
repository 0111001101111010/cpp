/* #1 Backup and Reverse it
Make a String and reverse it*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){

bool more = true;
while(more==true){
	cout <<"Enter a Word \n";
	string word, reverse;
	cin >> word;
	for (std::string::reverse_iterator rit=word.rbegin(); rit!=word.rend(); ++rit)
			reverse+=*rit;
	cout << "Your original word was: " << word << " your reversed word is " << reverse << endl;
	
	cout << "More? (Y=1/N=0)";
	cin >> more;


	}

	return 0;
}