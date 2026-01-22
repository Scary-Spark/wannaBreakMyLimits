package _4_methods;

class Tree {
    void hasLeafs() {
        System.out.println("All trees has leafs");
    }
}

class Oak extends Tree {
    @Override
    void hasLeafs() {
        System.out.println("Oak trees do not have leafs");
    }
}

public class _4_2_methodOverriding {
    public static void main(String[] args) {
        /*
            overriding means the child class has the same method as parent class but different implementation
         */

        Tree oak = new Oak();
        oak.hasLeafs();
    }
}
