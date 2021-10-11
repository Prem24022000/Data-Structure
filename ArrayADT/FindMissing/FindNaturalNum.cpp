#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
};

void Display(struct Array arr)
{
    for(int i=0; i<arr.length; i++){
        cout << arr.A[i] << " ";
    }
}

int Find(struct Array arr)
{
    int sum = 0;
    int n = arr.A[arr.length-1];
    int s;
    
    for(int i=0; i<arr.length; i++){
        sum += arr.A[i];
    }
    
    s = n*(n+1)/2;
    
    return s-sum;
}

int main()
{
    struct Array arr = {{1,2,3,4,5,7,8,9,10,11},10};
    
    cout << Find(arr) << endl;
    
    Display(arr);
    
    return 0;
}
