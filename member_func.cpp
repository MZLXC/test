#include<iostream>
using namespace std;

class MyClass
{
public:
    void fun(int arr[],int n)
    {
        int minPos = 0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<arr[minPos])
            {
                minPos = i;
            }
        }
        int temp = arr[minPos];
        arr[minPos] = arr[n-1];
        arr[n-1] = temp;
    }
};

int main()
{
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Before swap: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    MyClass obj;
    obj.fun(a,n);

    cout<<"After swap: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
