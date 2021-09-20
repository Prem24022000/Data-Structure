#include <iostream>
using namespace std;

int Fact(int n)
{
    if(n==0){
        return 1;
    }
    return Fact(n-1)*n;
}

int main()
{
    cout << Fact(5) <<endl;
    
    return 0;
}
