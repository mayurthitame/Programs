#include<iostream>

using namespace std;
class ArrayX
{
    private:
    int *Arr;
    int iSize;

    public:
        ArrayX(int iValue)//parammeterise constructor
        {
            this->iSize=iValue;
            Arr=new int[iSize];
        }
        int Addition()
        {
            int iSum=0,iCnt=0;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                iSum=iSum+Arr[iCnt];
            }
            return iSum;
        }
        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt=0;
            cout<<"enter the elements"<<endl;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            int iCnt=0;
            cout<<"Numbers from array are"<<endl;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }
};

int main()
{
    
    int iRet=0;
    ArrayX obj1(5);
    obj1.Accept();
    obj1.Display();
    iRet=obj1.Addition();
    cout<<"Addition of numbers is"<<iRet<<endl;
    return 0;
}
