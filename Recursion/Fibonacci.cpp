#include <iostream>
using namespace std;

int Fib(int n)
{
    if(n<=1){
        return n;
    }
    
    return Fib(n-2)+Fib(n-1);
}

int main()
{
    cout << Fib(10) << endl;
    
    return 0;
}
