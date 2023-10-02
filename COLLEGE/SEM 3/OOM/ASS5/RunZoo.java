// Kushal Bansal--IIT2022021

import java.util.*;

abstract class Animal{
    String name;
    int age;
    void speak(){

    }
    void eat(){

    }
}

class Lion extends Animal{

    Lion(String name, int age){
        this.name = name;
        this.age = age;
    }

    @Override
    void speak(){
        System.out.println("Roar!");
    }

    @Override
    void eat(){
        System.out.println("The animal is eating.");
    }
}

class Dolphin extends Animal{

    Dolphin(String name, int age){
        this.name = name;
        this.age = age;
    }

    @Override
    void speak(){
        System.out.println("Ee-ee!!");
    }

    @Override
    void eat(){
        System.out.println("The animal is eating.");
    }
}

public class RunZoo {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        System.out.print("Enter name for Lion : ");
        String name1 = input.next();

        System.out.print("Enter age of Lion : ");
        int age1 = input.nextInt();
        
        Lion l1 = new Lion(name1, age1);
        l1.speak();
        l1.eat();


        System.out.print("\nEnter name for Dolphin : ");
        String name2 = input.next();

        System.out.print("Enter age of Dolphin : ");
        int age2 = input.nextInt();
        
        Dolphin d1 = new Dolphin(name2, age2);
        d1.speak();
        d1.eat();
    }
}