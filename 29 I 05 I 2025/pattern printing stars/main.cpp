#include <iostream>

using namespace std;

int main()
{
    cout << "pattern printing stars" << endl;
    int rows;
    cout<<"Enter the number of rows:"<<endl;
    cin>>rows;
    /*for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*"; //not reverse
        }
        cout<<endl;
    }*/
    for(int i=0;i<rows;i++)
    {
        for(int j=i;j<rows;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
