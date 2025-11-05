#include<iostream>
using namespace std;
class A{
    private:
    int x,y;
    public:
    void getdata(){
        cout<<x<< "  " <<y<<"  "<<endl;
    }
    void setdata(int a,int b){
          x=a;
          y=b;
    }
};
int main(){
    // A obj;
    // obj.setdata(10,20);
    // obj.getdata();

    // A *ptr=new A;
    // (*ptr).setdata(30,40);
    // (*ptr).getdata();

    A *ptr=new A;
    ptr->setdata(67,89);
    ptr->getdata();

    return 0;
}