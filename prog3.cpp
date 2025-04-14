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

        cout << endl;
    }

    return 0;
}
