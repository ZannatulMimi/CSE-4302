#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    string EmpName;
    int ID;
    int Age;
    float Salary;
    string getStatus()
    {
        string status;
        if (Age <= 25)
        {
            if (Salary <= 20000)
                status = "Low";
            else
                status = "Moderate";
        }
        if (Age > 25)
        {
            if (Salary <= 21000)
                status = "Low";
            else if (Salary > 21000 && Salary < 60000)
                status = "Moderate";
            else
                status = "High";
        }
        return status;
    }

public:
    void feedInfo(string name, int id, int age, float salary)
    {
        EmpName = name;
        ID = id;
        Age = age;
        Salary = salary;
    }
    void showInfo()
    {
        cout << EmpName << ' ';
        cout << ID << ' ';
        cout << Age << ' ';
        cout << Salary << '\n';
        cout << getStatus() << " Salaried Person";
    }
};
int main()
{
    Employee emp;
    emp.feedInfo("X", 1234, 40, 65000);
    emp.showInfo();
}
