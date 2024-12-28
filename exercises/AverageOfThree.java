package exercises;

import java.util.Scanner;

public class AverageOfThree {
    public static int avj(int a,int b ,int c) {
        return ((a+b+c)/3);
    }

    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    int c = sc.nextInt();
    int average = avj(a,b,c);
    System.out.println(average);
    sc.close();

    }
}
