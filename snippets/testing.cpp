#include <iostream> 
#include <string>
#include <typeinfo>
#include <cstdlib>
using namespace std;

int main(){
  //seconds, minutes, hour, day
  int s_time[] = {1,60,3600,86400};
  int seconds = 0;
  string s=":11:10:30";
  int length = s.length();
  if (s.length() > 1)
    {   
      char quoteChar = s[0];
      //is it in quotes?
      int colon_count = 0;
	  int place_count = 1;
	  int num = 0;
      if (!((quoteChar == '\"' || quoteChar == '\'') && s[s.length()-1] == quoteChar))
        {
         for (unsigned i = length - 1; i+1; --i) {
           if (s[i] == ':') {
           	colon_count++;
           	place_count = 1;
        		}
           else {
           	num = s[i]-48; 
           	seconds = seconds + (num*(s_time[colon_count]*place_count));
           	place_count = place_count * 10;   	
        		} 	
        	}//end of for loop
		}//if >1 size 
	}
	cout << "seconds = " << seconds;
	return 0;
}