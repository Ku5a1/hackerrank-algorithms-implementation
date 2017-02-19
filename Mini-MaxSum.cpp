#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    unsigned long long int a;
    unsigned long long int b;
    unsigned long long int c;
    unsigned long long int d;
    unsigned long long int e;
    cin >> a >> b >> c >> d >> e;
    if (a >= 1 && a <= pow(10, 9) && b >= 1 && b <= pow(10, 9) && c >= 1 && c <= pow(10, 9) && d >= 1 && d <= pow(10, 9) && e >= 1 && e <= pow(10, 9))
    {
        unsigned long long int arr[] = {a, b, c, d, e};
        unsigned long long int min = arr[0];
        unsigned long long int max = arr[0];
        unsigned long long int sum = arr[0];
        for (size_t i = 1; i < 5; i++)
        {
            if (min > arr[i])
                min = arr[i];
            if (max < arr[i])
                max = arr[i];
            sum += arr[i];
        }
        printf("%lld %lld\n", sum - max, sum - min);
    }
    else
        printf("Constraints Violated\n");
    return 0;
}
