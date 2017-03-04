#include <iostream>

using namespace std;

int main()
{
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if (x1 >= 0 && x2 > x1 && x2 <= 10000 && v1 >= 1 && v1 <= 10000 && v2 >= 1 && v2 <= 10000)
    {
        if (v1 <= v2)
        {
            cout << "NO" << endl;
        }

        else if ((x1 - x2) % (v2 - v1) == 0)
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
