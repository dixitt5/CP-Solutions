#include <iostream>
using namespace std;
union Data
{
    int intValue;
    char charValue;
    double doubleValue;
};

int main()
{
    const int SIZE = 5;
    Data dataArray[SIZE];
}

// Populate the ARRAY with DATA
dataArray[0].intValue = 42;
dataArray[1].charValue = 'A';
dataArray[2].doubleValue = 3.14;
dataArray[3].intValue = 100;
dataArray[4].charValue = 'Z';

// Access and display the data from the ARRAY
cout<<"Array of Union: "<<endl;
for (int i = 0; i < SIZE; ++i)
{
    cout<<"Index"<<i<<": ";
    if (i%3==0){
        cout<<"Integer Value: " << dataArray[i].intValue << endl;
    }
    else{
        cout<<"Double Value: "<<dataArray[i].doubleValue<<endl;
    }
}


