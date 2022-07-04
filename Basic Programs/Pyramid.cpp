#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 5; ++i) //TOP TO BOTTOM
    {
        for (int j = i; j >= 1; --j) //LEFT TO RIGHT
        {
            cout << "e";
        }
        cout << endl;
    }
    return 0;
}


/*    OUTPUT
e
ee
eee
eeee
eeeee
*/