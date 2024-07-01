#include<iostream>
using namespace std;

void update(int arr[], int n){

    cout<<endl<<"Inside the function<<endl"<<endl;

    arr[0] = 120;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"going back to main function"<<endl;
}

int main(){
    int arr[3] = {2, 5 , 6};
    update(arr, 3);

    cout<<"Printing the main function"<<endl;
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }

}