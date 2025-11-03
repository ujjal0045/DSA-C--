#include <iostream>
using namespace std;
 
char nextCharacter( char ch)
{
	 if( ch=='z')
	 return 'a';
 
	 else
	 return (char)(ch+1);
}
int main() {
 
	char chr1 =  nextCharacter('c');
 
	cout<<chr1<<endl;
 
	char chr2= nextCharacter('z');
 
	cout<<chr2<<endl;

	return 0;
}