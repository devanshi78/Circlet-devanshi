#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "  ";
        }
        for (int k = 6 - i; k <= 5; k++)
        {
            cout << k << " ";
        }
        for (int j = 1; j <= i*2-2; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}