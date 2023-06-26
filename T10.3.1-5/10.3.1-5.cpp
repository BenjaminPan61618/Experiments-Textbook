#include <iostream>
using namespace std;
int main()
{
	char char_sour, char_dest;
cout<<"Insert a char:";
cin.get(char_sour);
if (char_sour >= 65 && char_sour<=90)
char_dest=char_sour+32;
else
char_dest=char_sour;
cout<<(char)char_dest;  
return 0;
}
