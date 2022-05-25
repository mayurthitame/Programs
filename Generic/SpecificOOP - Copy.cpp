
#include<iostream>
using namespace std;

template<class T>

class Arithemetic
{
	public:
	 T No1;
	 T No2;
	Arithemetic(T a,T b)
	{
		No1=a;
		No2=b;
	}
	T Addition()
	{
		T ans		;
		ans=No1+No2;
		return ans;
	}
	T Substraction()
	{
		T ans;
		ans=No1-No2;
		return ans;
	}
};

int main()
{
	Arithemetic <int>iobj(10,11);
	int fret=iobj.Addition();
	cout<<"Addition is :"<<fret<<"\n";

	Arithemetic <double>dobj(10.11,11.4);
	double dret=dobj.Addition();
	cout<<"Addition is :"<<dret<<"\n";
	


	return 0;
}