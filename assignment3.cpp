#include<iostream>
using namespace std;
int odd(int a,int b)
{
    for(int i = a;i<b;i++){
        if(i%2!=0){
            cout << i << endl;
        }
    }
    
}

int main()
{
    int a ,b;
    cout << "Enter inputs: ";
    cin >> a >> b;
    cout << odd(a,b);
    return 0;
}