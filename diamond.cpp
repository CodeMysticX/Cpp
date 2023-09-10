#include<iostream>
using namespace std;
class A 
{
    protected:
        int a;
    public:
        void input_A()
        {
            cout<<"Enter the value of a: ";
            cin>>a;
        }
        void display_A()
        {
            cout<<"The value of a is :"<<a<<endl;
        }
};
class B:public virtual A 
{
    protected:
        int b;
    public: 
        void input_B()
        {
            cout<<"Enter the value of b : ";
            cin>>b;
        }
        void display_B()
        {
            cout<<"The value of b is : "<<b<<endl;
        }
};
class C:public virtual A 
{
    protected:
        int c;
    public:
        void input_C()
        {
            cout<<"Enter the value of c : ";
            cin>>c;
        }
        void display_C()
        {
            cout<<"The value of c is : "<<c<<endl;
        }
};
class D:public B,public C 
{
      
    public:
        int d,sum;
        void input_D()
        {
            cout<<"Enter the value of d : ";
            cin>>d;
        }
        void display_D()
        {
            cout<<"The value of d is : "<<d<<endl;
            sum=a+b+c+d;
            cout<<"Sum is : "<<sum<<endl;
        }
};
int main()
{
    D obj;
    obj.input_A();
    obj.input_B();
    obj.input_C();
    obj.input_D();
    obj.display_A();
    obj.display_B();
    obj.display_C();
    obj.display_D();
    return 0;
}
