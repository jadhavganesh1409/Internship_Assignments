import java.io.*;

class Palindrome {
  public static void check(String str){
    int len = str.length();
    str = str.toUpperCase();
    System.out.println(str);
    for(int i=0,j = len-1; i< len/2;i++,j--){
        if(str.charAt(i) != str.charAt(j)){
          System.out.println("String is not palindrome");
          System.exit(0);
        }
    }
    System.out.println("String is palindrome");
  }
  public static void main(String[] args) throws Exception{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    System.out.println("Enter String to check palindrome");
    String str = br.readLine();
    check(str);
  }
}