#include<iostream>
using namespace std;

int Addition(int No1, int No2)      // function is going to accept 2 parameters and both are int i.e Specific programming
{                                   // it will not accept other datatype parameteres
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int Value1 = 10, Value2 = 11, iRet = 0;

    iRet = Addition(Value1, Value2);

    cout<<"Addition is : "<<iRet<<"\n";
    
    return 0;
}

// pudhchya codes madhye datatype che initials nahi lihinar beacuse generic programming (ire,fret,dret,ino,fno,etc...)