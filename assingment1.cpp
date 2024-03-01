#include <iostream>
using namespace std;
int square(int n)
{
    return n * n;
}
int natural(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << i << "-" << square(i) << endl;
    }
}
int main()
{
    int n;
    cout << "Enter input: ";
    cin >> n;
    natural(n);
    return 0;
}