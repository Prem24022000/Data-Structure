#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    for(int i=0; i<arr.length; i++){
        cout << arr.A[i] << " ";
    }
}

void Insert(struct Array *arr, int index, int x)
{
    if(index >=0 && index <= arr->length){
        for(int i=arr->length; i>index; i--){
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int main()
{
    struct Array arr;
    
    int index, x;
        
    cout << "Enter the size of Array: ";
    cin >> arr.size;
    
    arr.A = new int[arr.size];
    
    cout << "Enter the length of Array: ";
    cin >> arr.length;
    
    for(int i=0; i<arr.length; i++){
        cout << "Enter element in index " << i << ": ";
        cin >> arr.A[i];
    }
    
    cout << "Enter the index: ";
    cin >> index;
    
    cout << "Enter the element: ";
    cin >> x;
    
    Insert(&arr, index, x);
    
    Display(arr);
    
    return 0;
}
