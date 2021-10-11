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

int LinearSeach(struct Array arr, int key){
    for(int i=0; i<arr.length; i++){
        if(key == arr.A[i]){
            return i;
        }
    }
    
    return -1;
}

int Sum(struct Array arr){
    int sum=0;
    
    for(int i=0; i<arr.length; i++){
        sum += arr.A[i];
    }
    
    return sum;
}



int main()
{
    struct Array arr;
    
    int ch;
    int index;
    int x = 0;
    
    
    
    cout << "Enter the size of array: ";
    cin >> arr.size;
    
    arr.A = new int[arr.size];
    
    do{
        cout << "Menu" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Search" << endl;
        cout << "4. Sum" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;
        cout << "Choose operations: ";
        cin >> ch;
        
        switch(ch){
            case 1: cout << "Enter the index and value: ";
            cin >> index >> x;
            Insert(&arr, index, x);
            break;
            
            case 2: cout << "Enter the index for delete: ";
            cin >> index;
            cout << "Number " << Delete(&arr, x) << "has deleted" << endl;
            break;
            
            case 3: cout << "Enter the index for search: ";
            cin >> index;
            cout << "Element index " << LinearSeach(arr, index) << endl;
            break;
            
            case 4: cout << "Sum of numbers: ";
            cout << Sum(arr) << endl;
            break;
            
            case 5 : Display(arr);
        }
        
        
    }while(ch<6);
    
    
    return 0;
}
