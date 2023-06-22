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
    int getX(){
        return x;
    }
};
int main(){
    myClass obj1(525), obj2(25),obj3;
    obj3 = obj1 + obj2;
    cout<<"The sum is "<<obj3.getX()<<endl;
    return 0;
}