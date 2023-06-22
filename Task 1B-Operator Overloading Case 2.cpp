#include <iostream>
using namespace std;
class myClass{
private:
    int x;
public:
    myClass(int a=00){
        this->x = a;
    }
    int operator+(myClass& a){
        return x+a.x;
    }
};
int main(){
    int sum;
    myClass obj1(525);
    myClass obj2(25);
    sum = obj1 + obj2;
    cout<<"The sum is "<<sum<<endl;
    return 0;
}