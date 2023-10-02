class Parent {

    private int age;

    public Parent(int age) {
        this.age = age;
    }

    public void displayInfo() {

        System.out.println("Age: " + age);
    }
}

public class AccessModifierPuzzle {
    public static void main(String[] args) {
        Parent parent = new Parent(35);
        parent.displayInfo();
    }
}