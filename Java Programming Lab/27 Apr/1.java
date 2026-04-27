/*
1. Write a Java program to read n elements into a one-
dimensional array and find the sum, average, maximum, and
minimum values.
*/

import java.util.Scanner;

class One {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter number of elements: ");
        int x = input.nextInt();
        int a[] = new int[x];

        int sum = 0;
        int min = 0;
        int max = 0;

        System.out.println("Enter elements: ");
        for (int i = 0; i < x; ++i) {
            a[i] = input.nextInt();
            if (a[i] < a[min]) {
                min = i;
            } else if (a[i] > a[max]) {
                max = i;
            }
            sum += a[i];
        }

        int avg = sum / x;

        System.out.println("Average : " + avg);
        System.out.println("Min : " + a[min]);
        System.out.println("Max : " + a[max]);

        input.close();
    }
}
