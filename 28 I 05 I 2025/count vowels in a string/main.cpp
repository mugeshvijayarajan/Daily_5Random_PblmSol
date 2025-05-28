#include <iostream>

using namespace std;

int main()
{
    cout << "Count Vowels in a string"<<endl;
    string a;
    cout<<"Enter the String: "<<endl;
    getline(cin, a);
    int c = 0;
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
        {
            c++;
        }
    }
    cout<<"Number of Vowels = "<<c;
    return 0;
}
