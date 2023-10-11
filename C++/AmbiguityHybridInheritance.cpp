// #include <iostream>
// using namespace std;

// class B
// {
//     protected:
//         int x;
//     public:
//         void get_dataB()
//         {
//             cout << "Enter the value of x: ";
//             cin >> x;
//         }
// };

// class DB1 : public B
// {
//     protected:
//         int y;
//     public:
//         void get_dataDB1()
//         {
//             cout << "Enter the value of y: ";
//             cin >> y;
//         }
// };

// class DB2 : public B
// {
//     protected:
//         int z;
//     public:
//         void get_dataDB2()
//         {
//             cout << "Enter the value of z: ";
//             cin >> z;
//         }
// };

// class D : public DB1, public DB2
// {
//     protected:
//         int w;
//     public:
//         void get_dataD()
//         {
//             cout << "Enter the value of w: ";
//             cin >> w;
//         }
//         void product()
//         {
//             cout << "Product = " << x * y * z * w << endl;
//         }
// };

// int main()
// {
//     D d;
//     d.get_dataB();
//     d.get_dataDB1();
//     d.get_dataDB2();
//     d.get_dataD();
//     d.product();
//     return 0;
// }

// Solution 2: Using virtual base class

#include <iostream>
using namespace std;

class B
{
    protected:
        int x;
    public:
        void get_dataB()
        {
            cout << "Enter the value of x: ";
            cin >> x;
        }
};

class DB1 : virtual public B
{
    protected:
        int y;
    public:
        void get_dataDB1()
        {
            cout << "Enter the value of y: ";
            cin >> y;
        }
};

class DB2 : virtual public B
{
    protected:
        int z;
    public:
        void get_dataDB2()
        {
            cout << "Enter the value of z: ";
            cin >> z;
        }
};

class D : public DB1, public DB2
{
    protected:
        int w;
    public:
        void get_dataD()
        {
            cout << "Enter the value of w: ";
            cin >> w;
        }
        void product()
        {
            cout << "Product = " << x * y * z * w << endl;
        }
};

int main()
{
    D d;
    d.get_dataB();
    d.get_dataDB1();
    d.get_dataDB2();
    d.get_dataD();
    d.product();
    return 0;
}