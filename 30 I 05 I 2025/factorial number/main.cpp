#include <iostream>

using namespace std;

int main()
{
    cout << "Factorial Number" << endl;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=1,fact=1;
    while(n>=i)
    {
        fact=fact*i;
        i++;
    }
    cout<<"The factorial of "<<n<<" is = "<<fact;
    return 0;
}
