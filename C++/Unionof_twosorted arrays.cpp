import java.util.*;
import java.lang.*;
import java.io.*;

class Main
{
    public static void main (String[] args) 
    {
        int a[] = new int[]{3,8,10};
        int b[] = new int[]{2,8,9,10,15};
        
        int m = a.length;
        int n = b.length;
	    printUnion(a,b,m,n);
        
    }
    
    static void printUnion(int a[], int b[], int m, int n){
    
        int[] c=new int[m+n];
        for(int i=0;i<m;i++)
            c[i]=a[i];
        for(int i=0;i<n;i++)
            c[i+m]=b[i];
        Arrays.sort(c);
        
        for(int i=0;i<m+n;i++){
            if(i==0||c[i]!=c[i-1])
                System.out.print(c[i]+" ");
        }
    }
}
