// reverse the given string
public class reverse_string {
    public static void main(String args[]){
        String s="MADAM";
        String temp=s;
        int n=s.length();
        String ans="";
        for(int i=n-1;i>=0;i--){
            ans+=s.charAt(i);   
        }
        System.out.println(ans);
        if(ans.equals(ans)){
            System.out.println("given string is plindrome");
        }
        else{
            System.out.println("given string is not plindrome");
        }
    }
}
