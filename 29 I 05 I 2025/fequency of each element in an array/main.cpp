#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Frequency of each elements in an array" << endl;
    int n;
    cout<<"Enter the size of an array:"<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<bool> visited(n,false);
    for(int i=0;i<n;i++)
    {
        if(visited[i])
            continue;
        int c=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                visited[j]=true;
            }
        }
        cout<<a[i]<<" -> "<<c<<" times"<<endl;
    }
    return 0;
}
