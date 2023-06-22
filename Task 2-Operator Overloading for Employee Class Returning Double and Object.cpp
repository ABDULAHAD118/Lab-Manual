#include <iostream>
using namespace std;
// class Employee
// {
// private:
//     int idNum;
//     double salary;
// public:
//     Employee(int  id, double salary){
//         this->idNum = id;
//         this->salary=salary;
//     }
//     double addTwo (Employee& emp){
//         double total;
//         total = salary + emp.getSalary();
//         return(total);
//     }
//     double operator+ (Employee& emp){
//         double total;
//         total = salary + emp.getSalary();
//         return(total);
//     }
//     double getSalary() { 
//         return salary; 
//     }
// };
class Employee
{
private:
    int idNum;
    double salary;
public:
    Employee(int  id, double salary){
        this->idNum = id;
        this->salary=salary;
    }
    Employee operator+ (Employee& emp){
        Employee total(999,0);
        total.salary = salary + emp.salary;
        return(total);
    }
    double addTwo (Employee& emp){
        double total;
        total = salary + emp.getSalary();
        return(total);
    }
    double getSalary() { 
        return salary; 
    }
};
int main(){
    Employee Clerk(115, 20000.00);
    Employee Driver(256, 15500.55);
    Employee Secretary(567, 34200.00);
    Employee sum(0, 0.0);
    sum = Clerk + Driver + Secretary;
    cout<<"The sum is: "<<sum.getSalary()<<endl;
    return 0;
}