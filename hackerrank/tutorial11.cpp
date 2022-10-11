#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
    int T;
    vector<int>S;
    int *A;
    cin>>N;
    A=new int[N];
    for(int i=0;i<N;i++){
        cin>>T;
        A[i]=T;
    }
    sort(A,A+N);
    /* To count the number of Integeres in the array*/
    int Count=1;
    for(int i=0;i<N;i++){
        if(A[i]==A[i+1])
            Count++;
        else
        {
            if(Count==1)
                cout<<A[i]<<" appears once in the array."   <<endl;
            else
                cout<<A[i]<<" appears "<<Count <<" times in the array."<<endl;
            Count=1;
    }
    }
    return 0;
}