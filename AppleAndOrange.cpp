#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    int apples = 0;
    int oranges = 0;
    for (int apple_i = 0; apple_i < m; apple_i++)
    {
        cin >> apple[apple_i];
        if (s <= (a + apple[apple_i]) && t >= (a + apple[apple_i]))
            ++apples;
    }
    vector<int> orange(n);
    for (int orange_i = 0; orange_i < n; orange_i++)
    {
        cin >> orange[orange_i];
        if (s <= (b + orange[orange_i]) && t >= (b + orange[orange_i]))
            ++oranges;
    }
    cout << apples << endl;
    cout << oranges << endl;
    return 0;
}
