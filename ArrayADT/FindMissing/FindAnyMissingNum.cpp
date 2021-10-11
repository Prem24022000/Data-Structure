#include<iostream>
using namespace std;


struct Array
{
    int A[20];
    int length;
};

void Display(struct Array arr)
{
    for(int i=0; i<arr.length; i++){
        cout << arr.A[i] << " ";
    }
}

void Find(struct Array arr1, struct Array arr2)
{
    for(int i=0; i<arr1.length; i++){
        arr2.A[arr1.A[i]]++;
    }
    
    for(int i=1; i<=arr2.length; i++){
        if(arr2.A[i] == 0){
            cout << i << endl;
        }
    }
}

int main()
{
    struct Array arr1 = {{11,2,1,6,7,12,5,3,9},9};
    struct Array arr2 = {{0},12};
    
    Find(arr1, arr2);
    
    Display(arr1);
    
 
    return 0; 
}
