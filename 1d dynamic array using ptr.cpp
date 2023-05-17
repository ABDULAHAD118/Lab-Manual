#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
    	cout<<"Enter the value of "<<i<<" array"<<endl;
        cin>>arr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;

    return 0;
}

