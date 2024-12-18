#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string codeforces = "codeforces";
    for (int i = 0; i < t; i++)
    {
        char c;
        cin >> c;

        bool f = false;
        for (int j = 0; j < codeforces.length(); j++)
        {
            if (codeforces[j] == c)
            {
                f = true;
                break;
            }
        }
        if (f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}