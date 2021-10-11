#include <iostream>
using namespace std;


int main()
{
    int A[10] = {6,3,8,10,16,7,5,2,9,14};
    
    int k = 10;
    
    for(int i=0; i<9; i++){
        for(int j=i; j<10; j++){
            if(A[i]+A[j] == 10){
                cout << A[i] << "+" << A[j] << "=" << k << endl;
            }
        }
    }
    
    return 0;
}
