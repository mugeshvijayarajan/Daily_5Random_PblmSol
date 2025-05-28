#include <iostream>

using namespace std;

int main()
{
    cout<<"Count Digit in a Number"<<endl;
    int a;
    cout<<"Enter the number:";
    cin>>a;
    int c=0,ran;
    /*string len = to_string(a); with function
    cout<<"Number of Digits = "<<len.length();*/
    /*while(a!= NULL)
    {
        ran=a%10; without function
        c++;
        a=a/10;
    }*/
    cout<<"Number of Digits = "<<c;
    return 0;
}
