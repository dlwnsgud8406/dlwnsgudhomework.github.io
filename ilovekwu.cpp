#include<iostream>
#include<string>

using namespace std;

int main()
{
	string test_string="IloveKWU!";
	string answer[10];
	cout<<"do you love KWU?"<<endl;
	cin<<answer;
	if(answer=="yes")
	{
		for(int i=0;i<test_string.size();i++)
		{
			cout<<test_string.at(i)<<endl;
		}
	}
	cout<<endl;
	return 0;	
}
