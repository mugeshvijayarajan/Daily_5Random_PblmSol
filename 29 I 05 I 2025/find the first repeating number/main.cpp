#include <iostream>
#include<vector>
using namespace std;

int main()
{
    cout << "Find the first repeating number" << endl;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool found=false;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<"first repeating = "<<a[i];
                found = true;
                break;
            }
        }
        if(found)
            break;
        if(!found)
            cout<<"No Repeating number found"<<endl;
    }
    return 0;
}
