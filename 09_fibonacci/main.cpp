#include <iostream>
#include <iomanip>    //manipuluje dlugoscia wypisywanych cyfr

using namespace std;

long double fib[1000000];
int n;

int main()
{
    cout << "Which Fibonacci number do you interested in?" << endl;
    cin>>n;

    fib[0]=0;
    fib[1]=1;

    for (int i=2;i<=n;i++)
    {
        fib[i] = fib[i-2]+fib[i-1];
        //cout<<i <<" fib number"<<fib[i]<<endl;
    }
    cout<<setprecision(10000);   //pokaze cyfre nawet skladajaca sie z 10000 znakow
    cout<<n <<" fib number"<<fib[n-1]<<endl;


    return 0;
}
