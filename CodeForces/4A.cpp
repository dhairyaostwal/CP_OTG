/*CodeForces 4A ---

This problem demand what size should be valid for the watermelon on condition that when divided into two it yields two pieces of “even” weights.

PSEUDOCODE:
Read input a
If(a%2==0 and a==2)
	print “YES”
Else
	print “NO”

LOGIC:
Input a!=2 because 2=1+1(making individual parts of odd weight each) while 2=2+0(which means the watermelon isn’t being cut)
*/

#include<iostream>
using namespace std;
int main()
{
  int x;
  cin>>x;
  if(x%2==0 and x!=2)
    cout<<"YES";
  else
    cout<<"NO";
  return 0;
}
