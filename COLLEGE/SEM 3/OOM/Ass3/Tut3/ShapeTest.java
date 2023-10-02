import java.lang.Math.*;

class Shape {
    public double calculateArea(){
        return 0.0;
    }
    public double calculatePerimeter(){
        return 0.0;
    }
}

class Circle extends Shape{
    private double radius;
    
    Circle(double rad){
        radius = rad;
    }
    @Override
    public double calculateArea(){
        return Math.PI*radius*radius;
    }
    @Override
    public double calculatePerimeter(){
        return 2*Math.PI*radius;
    }

}

class Rectangle extends Shape{
    private double length;
    private double breadth;

    Rectangle(double len, double bread){
        length= len;
        breadth= bread;
    }

    @Override
    public double calculateArea(){
        return length*breadth;
    }
    @Override
    public double calculatePerimeter(){
        return 2*(length+breadth);
    }

}

class ShapeTest{
    public static void main(String[] args) {
    Circle c1 = new Circle(5.9);
    Rectangle r1 = new Rectangle(5, 6);
    System.out.println("Area of Circle: "+c1.calculateArea());
    System.out.println("Perimeter of Circle: "+c1.calculatePerimeter());
    System.out.println("Area of Rectangle: "+r1.calculateArea());
    System.out.println("Perimeter of Rectangle: "+r1.calculatePerimeter());
    }
}