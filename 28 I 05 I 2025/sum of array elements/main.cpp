#include <iostream>
#include<vector>
using namespace std;

int main()
{
    cout<<"Sum of array elements";
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    vector<int> a(n);
    int sum=0;
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=n-1;i++)
    {
        sum += a[i];
    }
    cout<<"Sum = "<<sum;

    return 0;
}
