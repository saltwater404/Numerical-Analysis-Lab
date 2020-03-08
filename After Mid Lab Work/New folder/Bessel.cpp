
#include <bits/stdc++.h>
using namespace std;
float ucal(float u, int n)
{
    if (n == 0)
        return 1;

    float temp = u;
    for (int i = 1; i <= n / 2; i++)
        temp = temp * (u - i);

    for (int i = 1; i < n / 2; i++)
        temp = temp * (u + i);

    return temp;
}
int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;

    return f;
}
int main()
{
    int n = 4;
    float x[] = { 20, 24, 28,32};
    float y[n][n];
    y[0][0] = 2854;
    y[1][0] = 3162;
    y[2][0] = 3544;
    y[3][0] = 3992;


    for (int i = 1; i < n; i++)
        for (int j = 0; j < n - i; j++)
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << setw(4) << y[i][j] << "\t";
        cout << endl;
    }
    float value = 25;
    float sum = (y[1][0] + y[2][0]) / 2;


    int k;
    if (n % 2)
        k = n / 2;
    else
        k = n / 2 - 1;
    float u = (value - x[k]) / (x[1] - x[0]);


    for (int i = 1; i < n; i++) {
        if (i % 2)
            sum = sum + ((u - 0.5) *
                  ucal(u, i - 1) * y[k][i]) / fact(i);
        else
            sum = sum + (ucal(u, i) *
                  (y[k][i] + y[--k][i]) / (fact(i) * 2));
    }

    cout << "Value at " << value << " is " << sum << endl;

    return 0;
}
