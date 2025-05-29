#include <iostream>

using namespace std;

int main()
{
    cout << "Print all prime number between two numbers" << endl;
    int fn,ln;
    cout<<"Enter the starting number:"<<endl;
    cin>>fn;
    cout<<"Enter the ending number:"<<endl;
    cin>>ln;
    for(int i=fn;i<=ln;i++)
    {
        int c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
            {
                cout<<i<<" ";
            }
    }
    return 0;
}
