#include <iostream>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    for(int i=0; i<arr.length; i++){
        cout << arr.A[i] << " ";
    }
    
    cout << endl;
}

void Append(struct Array *arr, int x)
{
    if(arr->length < arr->size){
        arr->A[arr->length++] = x;
    }
}

int main(){
    
    struct Array arr;
    
    int n;
    
    cout << "Enter the size of Array: ";
    cin >> arr.size;
    
    arr.A = new int[arr.size];
    
    cout << "Enter the length of Array: ";
    cin >> arr.length;
    
    cout << "Enter the elements: ";
    for(int i=0; i<arr.length; i++){
        cin >> arr.A[i];
    }
    
    cout << "Enter the new element: ";
    cin >> n;
    
    Append(&arr, n);
    
    Display(arr);
    
    return 0;
}
