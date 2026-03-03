    str = binary(n - 1, str);
    String strinv= str;
    //Invert String
    strinv = strinv.replaceAll("0", "x");
    strinv = strinv.replaceAll("1", "0");
    strinv = strinv.replaceAll("x", "1");
    StringBuilder sb  =new StringBuilder(strinv);
    sb.reverse();//Reverse  String 
    String strfinal = str+"1"+sb.toString();
    return strfinal;
}
public char findKthBit(int n, int k) {
 
    String s ="";
    String str =  binary(n,s);
    return str.charAt(k-1);
}