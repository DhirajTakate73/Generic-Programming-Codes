#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int No1;
        int No2;

        Arithematic(int A, int B);     // parameterised constructor declared inside class 
        int Addition();
};

/*
    Return_Value Class_Name :: Function_Name(Parameters)
    {
        Body
    }
*/

Arithematic :: Arithematic(int A, int B)        // parameterised constructor defined outside the class
{
    this->No1 = A;
    this->No2 = B;
}

int Arithematic :: Addition()
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    Arithematic obj1(11,10);
    int Ret = 0;

    Ret = obj1.Addition();
    cout<<"Addition is : "<<Ret<<"\n";
    
    return 0;
}

// declaration inside the class and defination outside the class 