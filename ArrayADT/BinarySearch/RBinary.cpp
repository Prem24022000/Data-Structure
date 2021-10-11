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

int RBinary(int a[],int l, int h, int key)
{
    
    int mid;
    
    if(l<=h){
        mid = (l+h)/2;
        if(key == a[mid]){
            return mid;
        }else if(key < a[mid]){
            return RBinary(a, l, mid-1, key);
        }else{
            return RBinary(a, mid+1, h, key);
        }
    }
    return -1;
}

int main()
{
    struct Array arr = {{1,2,3,4,5}, 5};
    
    cout << RBinary(arr.A, 0, 4, 1) << endl;
    
    Display(arr);
    
    return 0;
}
