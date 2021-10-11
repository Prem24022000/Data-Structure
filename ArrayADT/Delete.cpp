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

int Delete(struct Array *arr, int index)
{
    int x = arr->A[index];
    
    if(index >=0 && index < arr->length){
        for(int i=index; i<arr->length-1; i++){
            arr->A[index] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }
}

int main()
{
    struct Array arr;
    
    int index;
        
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
    
    cout << Delete(&arr, index) << endl;
    
    Display(arr);
    
    return 0;
}
