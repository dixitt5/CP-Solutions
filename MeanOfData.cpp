#include<iostream>

using namespace std;

void input(float a[], int z)
{
    for(int i = 0; i < z; i++){
        cout<<"Data ke "<<i+1<<" : ";
        cin>>a[i];
    }
}

void urut(float a[], int z)
{
    for(int i = 0; i < z; i++)
    {
        for(int j = i+1; j < z; j++)
        {
            if(a[j] > a[i])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        cout<<a[i]<<" ";
    }
}

void frek(float a[], int z)
{
    for(int i = 0; i < z; i++)
    {
        int jumlah = 0;

        for(int j = 0; j < z; j++)
        {
            if(a[i] == a[j])
                jumlah++;
        }

        if(a[i] != a[i-1]){
            cout<<"Angka "<<a[i]<<" Berjumlah "<<jumlah<<endl;
        }
    }
}

float meandata(float a[], int z){
    float d = 0;

    for(int i = 0; i < z; i++){
        d += a[i];
    }

    return d/z;
}

int main()
{
    int n;
    float data[100], mean;

    cout<<"Masukkan Banyaknya Data : ";
    cin>>n;

    input(data, n);

    cout << "Data diurutkan (descending) : ";
    urut(data, n);

    cout<<endl;

    cout<<"Frekuensi banyak kemunculan data : "<<endl;
    frek(data, n);

    cout<<endl;

    mean = meandata(data, n);
    cout<<"Mean : "<<mean<<endl;

    return 0;
}
