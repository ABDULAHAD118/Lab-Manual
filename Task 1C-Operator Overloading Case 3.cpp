#include <iostream>
using namespace std;
class myClass{
private:
    int x;
public:
    myClass(int a=00){
        this->x = a;
    }
    int operator+(int y){
        return y+x;
    }
    int getX(){
        return x;
    }
};
int main(){
    int sum, a = 10;
    myClass obj1(525), obj2;
    obj2 = obj1 + a;
    cout<<"The sum is "<<obj2.getX()<<endl;
    return 0;
}