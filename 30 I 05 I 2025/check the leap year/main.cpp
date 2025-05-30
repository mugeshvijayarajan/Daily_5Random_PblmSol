#include <iostream>

using namespace std;

int main()
{
    cout << "check the leap year" << endl;
    int y;
    cout<<"Enter the year: "<<endl;
    cin>>y;
    if(y%400==0)
    {
        cout<<"Leap year";
    }
    else if(y%100==0)
    {
        cout<<"not a leap year";
    }
    else if(y%4==0)
    {
        cout<<"leap year";
    }
    else
    {
        cout<<"not a leap year";
    }
    return 0;
}
