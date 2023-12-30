// Replace Spaces
#include<iostream>
using namespace std;

string replaceSpaces(string &str){
	// Write your code here.
	string temp = "";
	for(int i=0;i<str.length();i++)
	{
		if(str[i] == ' ')
		{
			//temp = temp + "@40";
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else 
		{
			//temp = temp + str[i];
			temp.push_back(str[i]);
		}
	}
	return temp;
}

int main()
{
    cout << "Replace Spaces" << endl;
    return 0;
}