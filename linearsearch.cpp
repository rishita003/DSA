#include<iostream>
using namespace std;


bool search(int arr[], int n, int key){
    for(int i = 0; i< n; i++){
        
        if(arr[i] == key ){
            return 1;
        }
    }
    return 0;

}


int main(){

    int arr[5] = {3, 6 ,8 , 9 , 12};

    int key;
    cout<<"ENter the key to search: "<<endl;
    cin>> key;

    bool found = search(arr, 5, key);

    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"key not present"<<endl;
    }

}