#include<iostream>
using namespace std;
class addition
{
        public:
        int addmethod(int x,int y)
        {
                return x+y;
        }
        int addmethod(int x,int y,int z)
        {
                return x+y+z;
        }
};
int main(void)
{
        addition add;
        cout << add.addmethod(2, 5) << endl;
        cout << add.addmethod(2, 3, 4) << endl;
        return 0;
}     
