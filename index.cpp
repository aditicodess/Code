#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> ans;
    for (int i = 1; i < v.size() - 1; i++)
    {
        if ((v[i] > v[i + 1] && v[i] > v[i - 1]) || (v[i] < v[i + 1] && v[i] < v[i - 1]))
        {
            ans.push_back(i);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << v[ans[i]] << " ";
    }
    return 0;
}