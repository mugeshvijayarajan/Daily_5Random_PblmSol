#include <iostream>

using namespace std;

int main()
{
    cout << "Armstrong number check (3-digit only)"<<endl;
    int n;
    cout<<"Enter the three digit numbers:"<<endl;
    cin>>n;
    int temp,as=0,org=n;
    while(n != NULL)
    {
        temp=n%10;
        as += temp*temp*temp;
        n=n/10;
    }
    if(as == org)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"Not a Armstrong number";
    }
    return 0;
}
