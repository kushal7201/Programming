import java.lang.Math.*;

public class Circle{
    private double radius;
    private double area;
    private double circumference;

    public Circle(double rad){
        this.radius = rad;
    }
    public double calculateArea(){
        return Math.PI*radius*radius; 
    }
    public double calculateCircumference(){
        return 2*Math.PI*radius;
    }
    public static void main(String[] args){
        Circle c1 = new Circle(4.4);
        c1.area = c1.calculateArea();
        c1.circumference = c1.calculateCircumference();
        
        System.out.println("Circle Properties: ");
        System.out.println("Radius: "+c1.radius);
        System.out.println("Area: "+c1.area);
        System.out.println("Circumference: "+c1.circumference);



    }
}