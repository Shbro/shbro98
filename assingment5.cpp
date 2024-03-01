#include<iostream>
using namespace std;
int square(int s)
{
   return s*s;
}
int count(int n){
     int count = 0;
    int a = n;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    if (a == 0)
    {
        cout << 1;
    }
    else
    {
        cout << count << endl ;
    }
   cout << square(count);
}
int main()
{
    int n;
    cout << "Enter input: ";
    cin >> n;
     count(n);
    return 0;
}