package _4_methods;

public class _4_1_methodOverloading {
    public static void main(String[] args) {
        // overloading means methods have same name but different parameter
        add();
        add(1, 2);
    }

    static void add() {
        System.out.println("This is just a add function");
    }

    static void add(int a, int b) {
        System.out.printf("Sum: %d\n", (a + b));
    }
}
