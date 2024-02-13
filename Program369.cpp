#include<iostream>
using namespace std;

template <class T>
class Arithematic
{
    public:
        T No1;          // class chya characteristics generic
        T No2;

        Arithematic(T A, T B);      //constructor che parameters aani function chya return value paan generic 
        T Addition();
        T Substraction();
};

// all the functions of generic class are bydefalut generic
template <class T>
Arithematic<T> :: Arithematic(T A, T B)     // part of class but defined outside class
{
    this->No1 = A;
    this->No2 = B;
}

template <class T>
T Arithematic<T> :: Addition()          // sadha class nahi generic ahe so class chya name chya pudhe<T>
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

template <class T>
T Arithematic<T> :: Substraction()
{
    T Ans;
    Ans = No1 - No2;
    return Ans;
}

int main()
{
    Arithematic<int> obj1(11,10);           // <int> cha object tyar karaycha ahe 
    int Ret = 0;

    Ret = obj1.Addition();
    cout<<"Addition is : "<<Ret<<"\n";

    Ret = obj1.Substraction();
    cout<<"Substraction is : "<<Ret<<"\n";
    
    return 0;
}


