#include <iostream>
using namespace std;

class GFG{
    private:
        int private_variable;
    protected:
        int protected_variable;
    public:
        GFG()
        {
            private_variable = 10;
            protected_variable = 99;
        }
        friend class FriendClass;
};

class FriendClass{
    public:
        void display(GFG& x)
        {
            cout << "Private Variable: " << x.private_variable << endl;
            cout << "Protected Variable: " << x.protected_variable << endl;
        }
};

int main(){
    GFG g;
    FriendClass f;
    f.display(g);
    return 0;
}