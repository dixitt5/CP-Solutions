#include <iostream>
using namespace std;
/*
---> 6
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/

main(){
    cout<< "--->";
    int a;
    cin >> a;
    for(int i =0;i<a;i++){
        for(int j =0;j<a-i;j++){
            cout << "* ";
        }
        cout << "\n";
    }

}