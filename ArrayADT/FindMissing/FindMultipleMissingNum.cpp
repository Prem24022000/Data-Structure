#include <iostream>
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

int Find(struct Array arr)
{
    int diff = arr.A[0] - 0;
    
    for(int i=0; i<arr.length; i++){
        if(arr.A[i]-i != diff){
            while(diff<arr.A[i]-i){
                cout << i+diff <<endl;;
                diff++;
            }
        }
    }
}

int main()
{
    struct Array arr = {{6,9,10,12,13,14,15,16,17,18,19},11};
    
    Find(arr);
    
    Display(arr);
    
    return 0;
}
