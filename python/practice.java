import java.util.Scanner;

public class practice {

    // function to toggle string
    public static String toggle(String s) {
        StringBuilder toggledString = new StringBuilder();

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (Character.isLowerCase(c)) {
                toggledString.append(Character.toUpperCase(c));  // lower case --> upper case
            } else if (Character.isUpperCase(c)) {
                toggledString.append(Character.toLowerCase(c));  // upper case --> lower case
            }
            else{
                toggledString.append(c);
            }
        }

        return toggledString.toString();
    }

    // function to get user ID
    public static String getUserId(String firstName, String lastName, int pincode, int n) {
        String smaller="", longer="";

        // 1st step find smaller and longer
        if (firstName.length() < lastName.length()) {
            smaller = firstName;
            longer = lastName;
        } else if (firstName.length() > lastName.length()) {
            smaller = lastName;
            longer = firstName;
        } else {  // if lengths are equal, compare lexicographically
            if (firstName.compareTo(lastName) <= 0) {
                smaller = firstName;
                longer = lastName;
            } else {
                smaller = lastName;
                longer = firstName;
            }
        }

        // Last character of the smaller string
        char lastCharOfSmaller = longer.charAt(longer.length() - 1);

        // 2nd step: find pincode nth digit from left and right
        String pin = Integer.toString(pincode);

        // nth digit from left (n - 1 because of 0-indexing)
        char nthLeft = pin.charAt(n - 1);

        // nth digit from right
        char nthRight = pin.charAt(pin.length() - n);

        // Combine lastCharOfSmaller, longer, nthLeft, and nthRight
        String userId = lastCharOfSmaller + smaller + nthLeft + nthRight;

        // Toggle the case of the combined string
        return toggle(userId);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter first name: ");
        String firstName = scanner.next();

        System.out.print("Enter last name: ");
        String lastName = scanner.next();

        System.out.print("Enter pincode: ");
        int pincode = scanner.nextInt();

        System.out.print("Enter n (<= length of pincode): ");
        int n = scanner.nextInt();

        String userId = getUserId(firstName, lastName, pincode, n);

        System.out.println("User ID will be: " + userId);
        
        scanner.close();
    }
}
