#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int findUnique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i< size; i++){
        ans = ans ^ arr[i];
    }
    return ans;

}

int main(){
    int arr[7] = {7, 7, 8, 9, 9, 8, 1};

    printArray(arr, 7);

    cout<<"unique element is: "<<findUnique(arr, 7)<<endl;
    

    return 0;

}