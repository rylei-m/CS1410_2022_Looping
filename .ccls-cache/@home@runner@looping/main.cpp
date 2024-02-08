#include <iostream>
using namespace std;

int main() 
{
  //create the variables
  int s;
  int m;

  //tell user what to do
  cout << "Please input a number. (Use ""'-1'"" to end)\n";

  //recieve user input for the score
  cin >> s;
  m=s;

  //make while loop
  while (s!=-1)
  {
    //if the score is greater than the current max score replace the max with the current
    if (s>m)
      m=s;

    //have the repeat to tell the user what to do
      cout << "Please input a number. (Use ""'-1'"" to end)\n";

  //repeat recieving user input
    cin >>s;
      
  }

  //provide the input/max
  cout << "The maximum score entered is: " << m << endl;
  
  return 0;
}