#include<iostream>
using namespace std;
class A
{
        int z=5;
        public:
        virtual void display(){
                cout<<z;
        }
};
class B:public A{
        int x=10;
        public:
        void display(){
                cout<<x;
        }
};
int main()
{
        
        A *a;
        B b;
        a=&b;
        a->display();
}
