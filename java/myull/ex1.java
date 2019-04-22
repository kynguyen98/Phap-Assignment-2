class myult{
    static long factorial (int n){
        int fact=1;
        for (int i=1;i<=n;i++){
            if (n==0) return 1;
            else if (n<=-1) return -1;
            else fact=fact*i; 
        }
        return fact;
    }
    static boolean prime (int n){
        boolean result=true;
        if (n==0||n<0){
            result =false;
        }
        else {
            for (int i=2;i<n;i++){
                if (n%i==0){
                    result=false;
                }
            }
        }
        return result;
    }
    static boolean istriangle(double a,double b,double c){
        boolean istriangle=true;
        if (a<(b+c)&&b<(a+c)&&c<(b+a)){
            return istriangle;
        }
        else {
            istriangle=false;
            return istriangle;
        }
    }
}
class demo{
    public static void main(String[] args) {
        double a=12,b=2,c=6;
        System.out.println("12,2 and 8 create a triangle is: "+myult.istriangle(a, b, c));
        System.out.println("the factorial of 6 is: "+myult.factorial(6));
        System.out.println("saying that 12 is prime number is: "+myult.prime(12));
    }
}