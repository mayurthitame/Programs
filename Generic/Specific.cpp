
#include<iostream>
using namespace std;

int addition(int No1,int No2)
{
	int Ans=0;
	Ans=No1+No2;
	return Ans;

}
float addition(float No1,float No2)
{
	float Ans=0;
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
	return 0;
}