#include<iostream>
#include<string>

using namespace std;

int main()
{
	string test_string="IloveKWU!";
	for(int i=0;i<test_string.size();i++)
	{
		cout<<test_string.at(i);
	}
	cout<<endl;
	return 0;	
}
