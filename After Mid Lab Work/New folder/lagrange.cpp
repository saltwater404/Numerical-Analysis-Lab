
#include<bits/stdc++.h>
using namespace std;
struct Data
{
    int x, y;
};
double interpolate(Data f[], int xi, int n)
{
    double result = 0;
    for (int i=0; i<n; i++)
    {

        double term = f[i].y;
        for (int j=0;j<n;j++)
        {
            if (j!=i)
                term = term*(xi - f[j].x)/double(f[i].x - f[j].x);
        }
        result += term;
    }
    return result;
}
int main()
{
    Data f[] = {{5,12}, {6,13}, {9,14}, {11,16}};
    cout << "Value of f(10) is : " << interpolate(f, 10, 5);
    return 0;
}
