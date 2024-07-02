#include<iostream>
using namespace std;

int printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int swapAlternate(int arr[], int size){
    for(int i = 0; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){

    int even[8] = {4, 5, 6, 35, 76, 9, 4, 1};
    int odd[5] = {4, 7, 8, 9, 3};

    swapAlternate(even, 8);
    swapAlternate(odd, 5);

    printArray(even, 8);
    printArray(odd, 5);

    return 0;

}
