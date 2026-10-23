#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << "sorted result: ";
    for(auto num : v)
    {
        cout << num << " ";
    }
    cout << endl;

    set<int> s(v.begin(), v.end());
    cout << "unique result: ";
    for(auto num : s)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

