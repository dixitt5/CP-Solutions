#include <iostream.h>
using namespace std;
int main() {
    int arr[5] = { 1, 2, 5, 4, 3 };
    int max = 0;
    for(int i = 0;i<5;i++)
        {
            if(max < arr[i])
                max = arr[i];
        }
    cout<<max<<endl;
    return 0;
}
