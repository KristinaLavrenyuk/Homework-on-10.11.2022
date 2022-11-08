
#include <iostream>
using namespace std;

int main()
{
    int n, sum0 = 0, sum1 = 0, c;
    cin >> n;

    char array[100]{};
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (array[i] == '0') sum0++;
        else if (array[i] == '1') sum1++;
    }
    if (sum0 > sum1) c = n - sum0;
    else c = n - sum1;

    cout << c;
}
