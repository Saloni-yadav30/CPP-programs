#include <iostream>

using namespace std;

class person{
private:
    int age;
public:
    person(int a=0){
        age = a;
    }
    int Printage(){
        cout<<"Age of the person = "<<age<<endl;
        return 0;
    }
    int operator--(){      ///pre decrement
        --age;
        return 0;
    }
    int operator--(int)    ///post decrement
    {
        age--;
        return 0;
    }
};

int main()
{
    person saloni(50);
    --saloni;
    saloni--;

    saloni.Printage();
}
