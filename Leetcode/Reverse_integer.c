int reverse(int x){
       if(x>=1534236469|| x==-2147483648){
           return 0;
       }
        long long int dividend=0;
        int remainder;
        while(x!=0){

            remainder=x%10;
            // dividend=10*dividend+remainder;
            x/=10;
            if (dividend > INT_MAX/10 || (dividend == INT_MAX / 10 && remainder > 7)) return 0;
            if (dividend < INT_MIN/10 || (dividend == INT_MIN / 10 && remainder < -8)) return 0;
            // x/=10;
            dividend=10*dividend+remainder;
        }
        return dividend;
}
