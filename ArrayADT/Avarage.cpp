#include <iostream>
using namespace std;

struct Array{
    int A[10];
    int length;
};

void Display(struct Array arr)
{
    for(int i=0; i<arr.length; i++){
        cout << arr.A[i] << " ";
    }
    
    cout << endl;
}

float Avg(struct Array arr)
{
    int sum = 0;
    
    for(int i=0; i<arr.length; i++){
        sum += arr.A[i];
    }
    
    return (float) sum/arr.length;
}

int main()
{
    struct Array arr = {{1,2,5,4,5}, 5};
    
    cout << Avg(arr) << endl;
    
    Display(arr);
    
    return 0;
}
