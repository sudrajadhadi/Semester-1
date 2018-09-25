#include <iostream>
#include <cmath>
using namespace std;

rumus(int sisi)
{
    int stik;
    stik=3*pow(sisi,3)+6*pow(sisi,2)+3*sisi;
    return rumus(sisi);
}

int main ()
{
    int n;
    cin >> n;
    cout << rumus(n) << endl;

}
