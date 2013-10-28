#include <iostream> 
#include <string>
#include <typeinfo>
#include <cstdlib>
#include <sstream> 
using namespace std;

int main(){
stringstream ss;
  //seconds, minutes, hour, day
  int given = 60;
  string string_given = "";
  int days = given / 60 / 60 / 24;
  int hours = (given / 60 / 60) % 24;
  int minutes = (given / 60) % 60;
  int seconds = given % 60;
  ss << seconds;
  string s_seconds =ss.str();
  ss.str("");
  ss << minutes;
  string s_minutes =ss.str();
  ss.str("");
  ss << hours;
  string s_hours =ss.str();
  ss.str("");
  ss << days;
  string s_days =ss.str();

  cout << days << " " << hours << " " << minutes << " " << seconds << "\n";

  if (days){
      string_given = string_given + s_days;
      if (hours >9)
         string_given = string_given +":"+s_hours; 
      else 
         string_given = string_given +":0"+s_hours;
      
      if (minutes >9)
         string_given = string_given +":"+s_minutes; 
      else 
         string_given = string_given +":0"+s_minutes;
      if (seconds >9)
         string_given = string_given +":"+s_seconds; 
      else 
         string_given = string_given +":0"+s_seconds;
  }
  else if (hours)
  {
      string_given = string_given + s_hours;
      if (minutes >9)
         string_given = string_given +":"+s_minutes; 
      else 
         string_given = string_given +":0"+s_minutes;
      if (seconds >9)
         string_given = string_given +":"+s_seconds; 
      else 
         string_given = string_given +":0"+s_seconds;
  } 
  else if (minutes)
  {
      string_given = s_minutes + string_given;
      if (seconds >9)
         string_given = string_given +":"+s_seconds; 
      else 
         string_given = string_given +":0"+s_seconds;
  } 
  else 
  {
      if (seconds >10)
         string_given = "0:"+s_seconds; 
      else 
         string_given = "0:0"+s_seconds;
  } 

  cout << string_given << endl;
	return 0;
}