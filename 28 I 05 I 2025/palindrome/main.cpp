#include <iostream>

using namespace std;

int main()
{
    cout << "Palindrome" << endl;
    string a,rev="";
    cout<<"Enter the string:"<<endl;
    cin>>a;
    for(int i=a.length()-1;i>=0;i--)
    {
        rev += a[i];
    }
    if(rev == a)
    {
        cout<<"Palindorome";
    }
    else
    {
        cout<<"Not a Palindrome";
    }
    return 0;
}
