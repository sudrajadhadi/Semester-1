#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int m,n,k;
    cin >> m >> n >> k;
    float sum;
    sum = (float) m/n;
    cout << setprecision(k) << fixed << sum << endl;
}
