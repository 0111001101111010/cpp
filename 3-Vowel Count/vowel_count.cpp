/* #3.Count Vowels – Enter a string 
and the program counts the number of vowels in the text.
 For added complexity have it report a sum of each vowel found.*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){

bool more = true;
int count = 0;
while(more==true){
	cout <<"Enter a Word to count  \n";
	string word;
	cin >> word;
	for (std::string::iterator rit=(word.begin()); rit!=word.end(); ++rit){		
	if (word[*rit]==('a')||('e')||('i')||('o')||('u') ){// && rit!=word.end())
		count++;
			}
		}

	cout << "Your original word was: " << word << " your vowel count is " << count << endl ;
	
	cout << "More? (Y=1/N=0)";
	cin >> more;


	}
//not working not finished.
	return 0;
}