 #include<iostream>
 using namespace std;
 int main()
 {

    int* arr = new int[5];
    int* ptr2 = &arr[2]; 
    delete[] arr; 
    cout << *ptr2 << endl; 

    return 0;
}