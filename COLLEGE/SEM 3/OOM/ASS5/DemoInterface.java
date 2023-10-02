// Kushal Bansal--IIT2022021

import java.util.*;

interface Shape{
    double area();
    double perimeter();
}

class Circle implements Shape{

    double r;

    Circle(double r) {
        this.r = r;
    }

    @Override
    public double area() {
        return Math.PI * r * r;
    }

    @Override
    public double perimeter() {
        return 2 * Math.PI * r;
    }
}

class Rectangle implements Shape{

    double l, b;

    Rectangle(double l, double b) {
        this.l = l;
        this.b = b;
    }

    @Override
    public double area() {
        return l * b;
    }

    @Override
    public double perimeter() {
        return 2 * l * b;
    }
}

public class DemoInterface {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        System.out.print("Enter radius : ");
        double radius = input.nextDouble();

        Circle c1 = new Circle(radius);
        System.out.println("Area of circle --> " + c1.area());
        System.out.println("Perimeter of circle --> " + c1.perimeter());

        System.out.print("\nEnter length : ");
        double length = input.nextDouble();
        System.out.print("Enter breadth : ");
        double breadth = input.nextDouble();

        Rectangle r1 = new Rectangle(length, breadth);
        System.out.println("Area of Rectangle --> " + r1.area());
        System.out.println("Perimeter of Rectangle --> " + r1.perimeter());
        
    }
}