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

int Get(struct Array arr, int index)
{
    if(index >=0 && index < arr.length){
        return arr.A[index];
    }
    return -1;
}


int main()
{
    struct Array arr = {{1,2,3,4,5}, 5};
    
    cout << Get(arr, 2) << endl;
    
    Display(arr);
    
    return 0;
}
