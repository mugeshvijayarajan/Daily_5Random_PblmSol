#include <bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    cout << "find the second largest num in an array"<<endl;
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"Enter  the array elements:"<<end;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reverse(a.begin(),a.end());
    int i=0;
    cout<<"second largest num in an array is: "<<a[i+1];
    return 0;
}
