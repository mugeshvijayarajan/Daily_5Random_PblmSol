#include <iostream>

using namespace std;

int main()
{
    cout << "print fibonacci series upto n terms" << endl;
    int n;
    cout<<"Enter the n term: "<<endl;
    cin>>n;
    int a=0,b=1,c=0;
    cout<<"fibonacci series "<<a<<" "<<b<<" ";
    c=a+b;
    while(c<=n)
    {
        cout<<c<<" ";
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}
