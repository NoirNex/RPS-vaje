#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string word, temp;
    cout<<"vnesite besedo: ";
    cin>>word;
	for(int i = 0; i < word.length(); i++) {
		if(word[i] > 64 && word[i] < 91) {
			word[i] += 32;
		}
	}
	for(int i = word.length() - 1; i >= 0; i--) {
		temp += word[i];
	}
	
	if(word == temp)
    cout<<"beseda je palindrom";
    else
    cout<<"beseda ni palindrom";
    
	return 0;
}
