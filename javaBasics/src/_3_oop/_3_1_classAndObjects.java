package _3_oop;

public class _3_1_classAndObjects {
    public static void main(String[] args) {
        // we can't do:
        // Calculator.add();

        //one way is to create a instance of that class
        Calculator cal = new Calculator();
        cal.add();

        //another way:
        // we have to make that method of that class as a static method
        Calculator.difference();
    }
}

class Calculator {
    static void difference() {
        System.out.println("Finding difference of any number");
    }

    void add() {
        System.out.println("Adding a value");
    }
}