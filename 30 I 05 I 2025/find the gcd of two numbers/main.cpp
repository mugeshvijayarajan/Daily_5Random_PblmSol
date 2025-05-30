#include <iostream>

using namespace std;

int main()
{
    cout << "find the gcd of two numbers" << endl;
    int n1,n2;
    cout<<"Enter the two number:"<<endl;
    cin>>n1>>n2;
    while(n2!=0)
    {
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    cout<<"GCD of two number is: "<<n1;
    return 0;
}
