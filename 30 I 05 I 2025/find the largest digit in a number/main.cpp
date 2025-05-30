#include <iostream>

using namespace std;

int main()
{
    cout << "find the largest digit in a number" << endl;
    int n,q;
    cout<<"Enter the number: ";
    cin>>n;
    string t=to_string(n);

    char maxdigit = '0';
    for(int i=0;i<t.length();i++)
    {
        if(t[i] > maxdigit)
        {
            maxdigit = t[i];
        }
    }
    int result = maxdigit - '0';
    cout<<"Largest Number: "<<result;
    return 0;
}
