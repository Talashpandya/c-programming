//  package exercises;

// import java.util.Scanner;

// class GreatestCommonDivisor {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n1 = sc.nextInt();
//         int n2 = sc.nextInt();
//         while(n1 != n2) {

//             if(n1>n2) {
 
//                 n1 = n1 - n2;
 
//             } else {
 
//                 n2 = n2 - n1;
 
//             }
 
//         }
 
//         System.out.println("GCD is : "+ n2);       
        
        
        
//         sc.close(); 
    
//     }
     
// }
package exercises ;

import java.util.Scanner;

public class GreatestCommonDivisor {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        while (a!=b) {  
            if (a>b) a=a-b;
            else b=b-a;

        }
        System.out.println(b);
        sc.close();
    }
}