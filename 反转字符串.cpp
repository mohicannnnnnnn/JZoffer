#include<iostream>
#include<string>
using namespace std;

void Swap(string &str,int begin,int end)
{
	while(begin<end)
	{
		swap(str[begin++],str[end--]);
	}
}

string Reserve(string  str ,int pos )
{
	string result= str;
	int FirstBegin = 0;
	int FirstEnd = pos-1;
	int SecondBegin = pos;
	int SecondEnd = str.size()-1;

	if(pos>0 && pos < str.size())
	{
		Swap(result,FirstBegin,FirstEnd);
		Swap(result,SecondBegin,SecondEnd);
		Swap(result,FirstBegin,SecondEnd);
	}
	return result;
}

int main()
{
	string str = "TYF";
	cout<<Reserve(str,2)<<endl;
	system("pause");
	return 0;
}