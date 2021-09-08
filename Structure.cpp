#include <iostream>
#include <string>
using namespace std;


struct student{
    string name;
    int Roll_no;
    float marks;
};

int main()
{
    struct student detail;

    cout<<"Fullname of the student: ";
    getline(cin,detail.name);

    cout<<"Roll no. of the student : ";
    cin>>detail.Roll_no;

    cout<<"Marks of the student(out of 100) : ";
    cin>>detail.marks;

    cout<<endl<<"Full name : "<<detail.name<<"\nRoll no : "<<detail.Roll_no<<"\nMarks : "<<detail.marks;


    return 0;
}
