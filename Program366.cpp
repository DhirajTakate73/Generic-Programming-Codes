
#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int No1;
        int No2;

        Arithematic(int A, int B)   // parameterised constructor
        {
            this->No1 = A;      // this is a pointer        java madhye use kartana use(.)
            this->No2 = B;
        }

        int Addition()      // no parameters because it will get from object
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }
};

int main()
{
    Arithematic obj1(11,10);        // parameters will go to parameterised constructor
    int Ret = 0;

    Ret = obj1.Addition();          // Arithematic chi method call keli
    cout<<"Addition is : "<<Ret<<"\n";
    
    return 0;
}