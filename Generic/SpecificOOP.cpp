
#include<iostream>
using namespace std;

class Arithemetic
{
	public:
	 int No1,No2;
	Arithemetic(int a,int b)
	{
		No1=a;
		No2=b;
	}
	int Addition()
	{
		int ans=0;
		ans=No1+No2;
		return ans;
	}
	int Substraction()
	{
		int ans=0;
		ans=No1-No2;
		return ans;
	}
};

int main()
{
	Arithemetic obj(10,11);
	int fret=obj.Addition();
	cout<<"Addition is :"<<fret<<"\n";


	return 0;
}