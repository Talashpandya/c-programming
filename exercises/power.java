package exercises;

import java.util.Scanner;

public class power {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        int a = sc.nextInt();
        int n = sc.nextInt();
        int result = 1 ;
        for (int i = 1; i <= n; i++) {
            result = result * a;
            System.out.println(result);
        }
        sc.close();

    }
}
