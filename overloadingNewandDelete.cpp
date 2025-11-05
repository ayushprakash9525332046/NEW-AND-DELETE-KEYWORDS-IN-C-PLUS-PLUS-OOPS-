#include <iostream>
#include <stdlib.h>
using namespace std;
class student
{
private:
    string name;
    int age;

public:
    student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "age = " << age << endl;
    }
    void *operator new(size_t size)
    {
        cout << "Overloading new operator with size : " << size << endl;
        void *p = ::operator new(size);
        return p;
    }
    void operator delete(void *p)
    {
        cout << "overloading delete operator " << endl;
        free(p);
    }
};
int main()
{
    student *p = new student("ayush", 19);
    p->display();
    return 0;
}