#include <iostream>
using namespace std;
void fun(int number);

int main(){
    int orignalnum,remainder,result,num=0;
    cout<<"Enter any 3 digit number : ";
    cin>>num;

    fun(num);
}
void fun(int number){
    int orignalnum,remainder,result=0;
    orignalnum=number;
    while(orignalnum!=0){
        remainder=orignalnum%10;
        result=result+(remainder*remainder*remainder);
        orignalnum=orignalnum/10;
    }
    if(number==result){
        cout<<endl<<"It is a amstrong number";
    }
    else{
        cout<<endl<<"Not a amstrong number";
    }
}

