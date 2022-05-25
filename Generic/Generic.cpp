#include<iostream>
using namespace std;

template<class T>

T addition(T No1,T No2)
{
	T Ans;
	Ans=No1+No2;
	return Ans;

}

int main()
{
	int x=0,y=0,ret=0;
	cout<<"Enter Numbers to add\n";
	cin>>x;
	cin>>y;
	ret=addition(x,y);
	cout<<"Addition is :"<<ret<<"\n";

	float a=0,b=0,fret=0;
	cout<<"Enter Numbers to add\n";
	cin>>a;
	cin>>b;
	fret=addition(a,b);
	cout<<"Addition is :"<<fret<<"\n";

	double d1=0,d2=0,dret=0;
	cout<<"Enter Numbers to add\n";
	cin>>d1;
	cin>>d2;
	dret=addition(d1,d2);
	cout<<"Addition is :"<<dret<<"\n";
	return 0;
}