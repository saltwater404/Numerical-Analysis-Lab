
#include <bits/stdc++.h>
using namespace std;

void Stirling(float x[], float fx[], float x1,
                                    int n)
{
    float h, a, u, y1 = 0, N1 = 1, d = 1,
    N2 = 1, d2 = 1, temp1 = 1, temp2 = 1,
    k = 1, l = 1, delta[n][n];

    int i, j, s;
    h = x[1] - x[0];
    s = floor(n / 2);
    a = x[s];
    u = (x1 - a) / h;

    for (i = 0; i < n - 1; ++i) {
        delta[i][0] = fx[i + 1] - fx[i];
    }
    for (i = 1; i < n - 1; ++i) {
        for (j = 0; j < n - i - 1; ++j) {
            delta[j][i] = delta[j + 1][i - 1]
                          - delta[j][i - 1];
        }
    }


    y1 = fx[s];

    for (i = 1; i <= n - 1; ++i) {
        if (i % 2 != 0) {
            if (k != 2) {
                temp1 *= (pow(u, k) -
                          pow((k - 1), 2));
            }
            else {
                temp1 *= (pow(u, 2) -
                          pow((k - 1), 2));
            }
            ++k;
            d *= i;
            s = floor((n - i) / 2);
            y1 += (temp1 / (2 * d)) *
                   (delta[s][i - 1] +
                   delta[s - 1][i - 1]);
        }
        else {
            temp2 *= (pow(u, 2) -
                      pow((l - 1), 2));
            ++l;
            d *= i;
            s = floor((n - i) / 2);
            y1 += (temp2 / (d)) *
                  (delta[s][i - 1]);
        }
    }

    cout << y1;
}

int main()
{
    int n;
    n = 5;
    float x[] = { 10, 20, 30, 40, 50 };
    float fx[] = { 600,512, 439, 346,
                             243};

    float x1 = 35;

    Stirling(x, fx, x1, n);
    return 0;
}
