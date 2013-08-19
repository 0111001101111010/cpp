/* #2 Pig Latin – Pig Latin is a game of alterations played on the English language game.
 To create the Pig Latin form of an English word the initial consonant sound is 
 transposed to the end of the word and an ay is affixed (Ex.: "banana" would yield anana-bay).
  Read Wikipedia for more information on rules.*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){

bool more = true;
while(more==true){
	cout <<"Enter a Word to turn to piglatin \n";
	string word, reverse;
	cin >> word;
	for (std::string::iterator rit=(word.begin()+1); rit!=word.end(); ++rit){
		reverse+=*(rit);
			}
	if ( word[0]==('a')||('e')||('i')||('o')||('u') ){// && rit!=word.end())
		reverse = word[0]+reverse+"way";
	}
	else{
		reverse = reverse+word[0]+"ay"; 
		//cerr << "flag";		
	}
	cout << "Your original word was: " << word << " your pig latin word is " << reverse << endl;
	
	cout << "More? (Y=1/N=0)";
	cin >> more;


	}

	return 0;
}