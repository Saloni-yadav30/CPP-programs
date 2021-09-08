#include <iostream>
#include <string>

using namespace std;

class student{
private:
    string name;
    int rollno;
    string gender;
    float marks;
public:

    student(string name_a= "Null" , int rollno_a =0, string gender_a = "Null", float marks_a = 0.0f)
    {
        name = name_a;
        rollno = rollno_a ;
        gender = gender_a;
        marks = marks_a;
    }
    student(student &stu)
    {
        name = stu.name;
        rollno = stu.rollno;
        gender = stu.gender;
        marks = stu.marks;
    }

    int getstudentData();
};

int student::getstudentData(){
    cout<<"Name of the student :"<<name<<endl;
    cout<<"Roll no. of the student :"<<rollno<<endl;
    cout<<"Gender of the student :"<<gender<<endl;
    cout<<"Marks of the student :"<<marks<<endl<<endl;

    return 0;

}

int main()
{
    student obj;
    student obj2("Saloni", 12 , "Female", 88.4f);
    student obj3(obj2) ;

    obj.getstudentData();

    obj2.getstudentData();
    obj3.getstudentData();

}
