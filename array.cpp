#include<iostream>
using namespace std;

void printArr(int arr[], int size){
    cout<<"printing the array"<<endl;
    for(int i =0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n done printing"<<endl;
}

int main(){
    // declare
    int number[15];

   // cout<<"value at index: "<< number[20]<<endl<<endl;
    int second[15] ={2, 5}; 
    int n = 15; 
    printArr(second, 10);
    //initialising all locations with 0{not possible with 1}
    int third[10] = {0};
    n = 10;
    printArr(third, 10);

    //finding size of the array

    int secondSize = sizeof(second)/sizeof(int);
    cout<<"size of third: "<<secondSize<<endl;

/*
    char ch[5] = ('a', 'b', 'c', 'd', 'e');
    cout<<ch[3]; 
    printArray(ch);      //not possible as the function was made for int;
*/

    return 0;
}