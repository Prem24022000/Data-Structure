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

int LinearSeach(struct Array arr, int key){
    for(int i=0; i<arr.length; i++){
        if(key == arr.A[i]){
            return i;
        }
    }
    
    return -1;
}

int main()
{
    struct Array arr = {{2,4,6,8,10}, 5};
    
    cout << LinearSeach(arr, 4) << endl;
    
    Display(arr);
    
    return 0;
}
