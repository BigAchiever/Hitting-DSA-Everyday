#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++; // stores the frequency and the string here
    }
    for (auto &pr : m) // using ampersend to get actual values
    {
        cout << pr.first << " " << pr.second << endl;
    }
}