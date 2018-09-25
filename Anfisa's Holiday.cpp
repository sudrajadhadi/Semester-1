
#include <iostream>
using namespace std;
int main()
{
    int a,b,x1,x2;
    cin >> a >>b;
    cin >> x1 >> x2;
    a=a*2; b=b*2;

    //kooordinat turun
    int down1=0,down2=0;
    //koordinat turun x1

    if (x1>=10)
    {
        for(int i=a; x1>=i; i+=a)
        {
            down1++;
        }
    }
    else down1=1;
    //koordinat turun x2
    if (x2>=10)
    {
        for(int i=a; x1>=i; i+=a)
        {
            down2++;
        }
    }
    else down2=1;


    int up1,up2;
    //koordinat kanan x1
    if (x1%a==0)
    {
        up1=x1/down1;
    }
    else up1=x1%a;
    //koordinat kanan x2
    if (x2%a==0)
    {
        up2=x2/down2;
    }
    else up2=x2%a;

    //rumus aseeeemmmm
    int sum;

    if (down1)

    if (down2==down1)
    {
        sum=up1-up2;
        if (sum<0) {sum=-sum;}
    }

    cout << sum << endl;
}
