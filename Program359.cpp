#include<iostream>
using namespace std;

template <class T>              //  template Header lihava lagta <T> chya aaivaji kahipaan name deu shakto paan generally hech detat
T Addition(T No1, T No2)        // T is template reference variable (placeholder)
{                               // <class T>    oop madhye lihito ahe mahnun class T lihila <> madhye nahi lihila tar error
    T Ans = 0.0;
    Ans = No1 + No2;
    return Ans;
}

int main()                                          // main madhye template apply hot nahi
{
    double Value1 = 10.9, Value2 = 11.6, Ret = 0.0;

    Ret = Addition(Value1, Value2);

    cout<<"Addition is : "<<Ret<<"\n";
    
    return 0;
}