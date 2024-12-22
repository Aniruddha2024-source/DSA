

// C++ implementation to
// print the characters and
// frequencies in order
// of its occurrence
#include <iostream>
#include<map>
using namespace std;
 
void  prCharWithFreq(string s)
{
    
	   // character whose frequency must be determined
           char ch = ' ';
           // store the frequency in freq
           int freq = 0;

           // iterate through the string
           for(int i = 0; i < s.length(); i++) 
           {
               // if the specified character
               // appears in the string
               if(ch == s[i]) 
               {
                   // increase freq by 1
                   ++freq;
               }
           }

           
}
 
// Driver Code
int main()
{
    string s = "geeksforgeeks";
    prCharWithFreq(s);
}