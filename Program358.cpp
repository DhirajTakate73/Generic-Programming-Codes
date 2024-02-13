#include<iostream>
using namespace std;

double Addition(double No1, double No2)
{
    double Ans = 0.0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    double Value1 = 10.9, Value2 = 11.6;
    double dRet = 0.0;

    dRet = Addition(Value1, Value2);

    cout<<"Addition is : "<<dRet<<"\n";
    
    return 0;
}