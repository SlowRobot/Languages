public class Math {
    public static void main(String[] args) {
        int myNumber = 42;
        int result = ((((myNumber * myNumber) + myNumber) / myNumber) + 17 - myNumber) / 6;
        System.out.println(result);
        System.out.println(result == 3);
    }
}