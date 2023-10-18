    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int row=5,column=5;
        float a1[row][column];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                scanf("%f",&a1[i][j]);
            }
            
        }
        int r,c;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if(a1[i][j] == 1){
                    r = i;
                    c = j;
                }
            }
        }
        
        int count = 0;
        if(r>2){
            while(r>2){
                r = r-1;
                count++;
            }
        }
        else if(r<2){
            while(r<2){
                r = r+1;
                count++;
            }
        }

        if(c>2){
            while(c>2){
                c = c-1;
                count++;
            }
        }
        else if(c<2){
            while(c<2){
                c = c+1;
                count++;
            }
        }

        cout<<count<<endl;
}