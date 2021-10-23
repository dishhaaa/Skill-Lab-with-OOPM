import java.util.Scanner;

public class Lab2 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);  // Create a Scanner object


        int n1,n2,temp; //decalring variables

        System.out.println("Enter first number");

        n1=sc.nextInt();  //taing input

        System.out.println("Enter second number");

        n2=sc.nextInt(); //taking input


        // addition of both numbers
        System.out.println("Number 1 = "+n1+" Number 2 = "+n2);

        System.out.println("\n ADDITION\n");

        System.out.println("\nAddition of both numbers is: " +(n1+n2));


        //swapping both numbers
        System.out.println("\n SWAPPING\n");

        temp=n1;

        n1=n2;

        n2=temp;

        System.out.println("After swapping Number 1 = "+n1+" Number 2 = "+n2);

        //checking for even and odd

        System.out.println("\n EVEN/ODD\n");

        if(n1%2==0)

            System.out.println(n1+" is Even");

        else

            System.out.println(n1+" is Odd");



    }

}