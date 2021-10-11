#include<iostream>
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

int SimpleBinary(struct Array arr, int key)
{
    int l=0, h = arr.length-1;
    int mid;
    
    while(l<=h){
        
        mid = (l+h)/2;
        
        if(key == arr.A[mid]){
            return mid;
        }else if(key < arr.A[mid]){
            h = mid-1;
        }else{
            l = mid+1;
        }
    }
    
    return -1;
}


int main()
{
 
    struct Array arr = {{1,2,3,4,5}, 5};
    
    cout << SimpleBinary(arr, 3) << endl;
    
    Display(arr);
    
    return 0;
}
