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
    int diff = arr.A[0] - 0;
    
    for(int i=0; i<arr.length; i++){
        if(arr.A[i]-i != diff){
            cout << i+diff << endl;
            break;
        }
    }
}

int main()
{
    struct Array arr = {{2,3,4,5,6,8},6};
    
    Find(arr);
    
    Display(arr);
    
    return 0;
}
