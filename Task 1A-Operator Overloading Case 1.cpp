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
};
int main(){
    int sum, a = 10;
    myClass obj(525);
    sum = obj + a;
    cout<<"The sum is "<<sum<<endl;
    return 0;
}