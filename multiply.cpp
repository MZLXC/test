#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    while(i <= 9)
    {
        int j = 1;
        while(j <= i)
        {
            cout<<j<<"*"<<i<<"="<<i*j<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}







#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<"*"<<i<<"="<<i*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
