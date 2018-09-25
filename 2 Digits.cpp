#include <iostream>
using namespace std;
#include <string.h>

int main()
{
       char string[70];
       cin.getline(string, sizeof(string));
       cout<<cin.gcount()-1<<endl;
       return 0;
}
