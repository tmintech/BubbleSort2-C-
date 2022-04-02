#include <iostream>

using namespace std;


void bubbleSort(int arr[],int size){
    int counter = 0;
    
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 -i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                ++counter;
            }
            
        }
    }
    cout << counter;
}

int main(){
    
    int arr[100];
    int size;
    
    cout << "Enter the size of the array:" << endl;
    cin >> size;
    
    cout << "Enter the values of the array:" << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    bubbleSort(arr, size);
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
        
    
    return 0;

}
