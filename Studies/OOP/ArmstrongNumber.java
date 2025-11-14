public class ArmstrongNumber {

    public static int CountDigit(int num){
        int count = 0 ; 
        while(num >  0){
            num = num / 10 ;
            count++ ; 
        }
        return count; 
    }

    public static void CheckArmstrong(int num , int length){
        int sum = 0 , remainder  ; 
    
        // copy the num 
        int temp = num;
        while ( temp > 0 ){
            remainder = temp % 10 ; 
            sum += Math.pow(remainder, length);
            temp /= 10 ;  
        }
        if (sum == num) {
            System.out.println(num + " is an Armstrong number.");
            // return true;
        } else {
            System.out.println(num + " is not an Armstrong number.");
            // return false;
        }
        
    }
    
    public static void main(String[] args) {
        
        int num  = 154 ;
        
        int length = CountDigit(num);

        CheckArmstrong(num, length);

        
    }
}
