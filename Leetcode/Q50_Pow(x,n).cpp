class Solution {
public:
    
    /* The concept used in this code is binary exponentiation for improved time
       complexity. We just have to adapt a little because power could be negative which
       we do by passing absolute value of n and taking reciprocal in case of negative 
       power. Data type to be used is double to take care of the constraints*/
    
    double myPow(double x, int n) {
        if(x==0) return 0;
        if(n<0){
            long long pass=n;
            pass*=-1;
            double ans=recur(x,pass);
            return 1/ans;
        }
        else{
            long long pass=n;
            double ans=recur(x,pass);
            return ans;
        }
    }
    
    double recur(double x,long long n){
        if(n==0){
            double temp=1;
            return temp;
        } 
        
        double res=recur(x,n/2);
        if(n%2){
            return res*res*x;
        }
        else
            return res*res;
        
    }
};