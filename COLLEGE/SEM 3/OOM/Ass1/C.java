/*A company pays its employees on a weekly basis. The employees are of four types:
Salaried employees are paid a fixed weekly salary regardless of the number of hours
worked, hourly employees are paid by the hour and receive overtime pay for all hours
worked in excess of 40 hours, commission employees are paid a percentage of their sales
and salaried-commission employees receive a base salary plus a percentage of their sales.
For the current pay period, the company has decided to reward salaried-commission
employees by adding 10% to their base salaries. The company wants to implement a Java
application that performs its payroll calculations.
Identify Class, Member variable (Attributes), Methods to support the requisite functionality as
asked in the use case.*/
public class Company{
    public static void main(String[] args){
        Employee e1 = new Employee();
        e1.setEmpId(1);
        e1.setEmpName("Raj");
        e1.setEmpType("Salaried");
        e1.setSalary(10000);
        e1.setHours(40);
        e1.setSales(1000);
        e1.calculateSalary();
        e1.displayDetails();
        Employee e2 = new Employee();
        e2.setEmpId(2);
        e2.setEmpName("Rahul");
        e2.setEmpType("Hourly");
        e2.setSalary(10000);
        e2.setHours(50);
        e2.setSales(1000);
        e2.calculateSalary();
        e2.displayDetails();
        Employee e3 = new Employee();
        e3.setEmpId(3);
        e3.setEmpName("Ramesh");
        e3.setEmpType("Commission");
        e3.setSalary(10000);
        e3.setHours(40);
        e3.setSales(1000);
        e3.calculateSalary();
        e3.displayDetails();
        Employee e4 = new Employee();
        e4.setEmpId(4);
        e4.setEmpName("Rajesh");
        e4.setEmpType("Salaried-Commission");
        e4.setSalary(10000);
        e4.setHours(40);
        e4.setSales(1000);
        e4.calculateSalary();
        e4.displayDetails();
    }
}
class Employee{
    private int empId;
    private String empName;
    private String empType;
    private double salary;
    private int hours;
    private double sales;
    private double totalSalary;
    public void setEmpId(int empId){
        this.empId = empId;
    }
    public void setEmpName(String empName){
        this.empName = empName;
    }
    public void setEmpType(String empType){
        this.empType = empType;
    }
    public void setSalary(double salary){
        this.salary = salary;
    }
    public void setHours(int hours){
        this.hours = hours;
    }
    public void setSales(double sales){
        this.sales = sales;
    }
    public void calculateSalary(){
        if(empType.equals("Salaried")){
            totalSalary = salary;
        }
        else if(empType.equals("Hourly")){
            if(hours > 40){
                totalSalary = salary + (hours - 40) * 100;
            }
            else{
                totalSalary = salary;
            }
        }
        else if(empType.equals("Commission")){
            totalSalary = salary + sales * 0.1;
        }
        else if(empType.equals("Salaried-Commission")){
            totalSalary = salary + sales * 0.1 + salary * 0.1;
        }
    }
    public void displayDetails(){
        System.out.println("Employee ID: " + empId);
        System.out.println("Employee Name: " + empName);
        System.out.println("Employee Type: " + empType);
        System.out.println("Employee Salary: " + totalSalary);
    }
}
// Path: D.java
// Compare this snippet from Company.java:
// public class Company{
//     public class void Employee(String[] args){
//         public class
//     }
// }
/*A company pays its employees on a weekly basis. The employees are of four types:
Salaried employees are paid a fixed weekly salary regardless of the number of hours
worked, hourly employees are paid by the hour and receive overtime pay for all hours
worked in excess of 40 hours, commission employees are paid a percentage of their sales
and salaried-commission employees receive a base salary plus a percentage of their sales.
For the current pay period, the company has decided to reward salaried-commission
employees by adding 10% to their base salaries. The company wants to implement a Java
application that performs its payroll calculations.
Identify Class, Member variable (Attributes), Methods to support the requisite functionality as
asked in the use case.*/
public class Company{
    public static void main(String[] args){
        Employee e1 = new Employee();
        e1.setEmpId(1);
        e1.setEmpName("Raj");
        e1.setEmpType("Salaried");
        e1.setSalary(10000);
        e1.setHours(40);
        e1.setSales(1000);
        e1.calculateSalary();
        e1.displayDetails();
        Employee e2 = new Employee();
        e2.setEmpId(2);
        e2.setEmpName("Rahul");
        e2.setEmpType("Hourly");
        e2.setSalary(10000);
        e2.setHours(50);
        e2.setSales(1000);
        e2.calculateSalary();
        e2.displayDetails();
        Employee e3 = new Employee();
        e3.setEmpId(3);
        e3.setEmpName("Ramesh");
        e3.setEmpType("Commission");
        e3.setSalary(10000);
        e3.setHours(40);
        e3.setSales(1000);
        e3.calculateSalary();
        e3.displayDetails();
        Employee e4 = new Employee();
        e4.setEmpId(4);
        e4.setEmpName("Rajesh");
        e4.setEmpType("Salaried-Commission");
        e4.setSalary(10000);
        e4.setHours(40);
        e4.setSales(1000);
        e4.calculateSalary();
        e4.displayDetails();
    }
}
class Employee{
    private int empId;
    private String empName;
    private String empType;
    private double salary;
    private int hours;
    private double sales;
    private double totalSalary;
    public void setEmpId(int empId){
        this.empId = empId;
    }
    public void setEmpName(String empName){
        this.empName = empName;
    }
    public void setEmpType(String empType){
        this.empType = empType;
    }
    public void setSalary(double salary){
        this.salary = salary;
    }
    public void setHours(int hours){
        this.hours = hours;
    }
    public void setSales(double sales){
        this.sales = sales;
    }
    public void calculateSalary(){
        if(empType.equals("Salaried")){
            totalSalary = salary;
        }
        else if(empType.equals("Hourly")){
            if(hours > 40){
                totalSalary = salary + (hours - 40) * 100;
            }
            else{
                totalSalary = salary;
            }
        }
        else if(empType.equals("Commission")){
            totalSalary = salary + sales * 0.1;
        }
        else if(empType.equals("Salaried-Commission")){
            totalSalary = salary + sales * 0.1 + salary * 0.1;
        }
    }
    public void displayDetails(){
        System.out.println("Employee ID: " + empId);
        System.out.println("Employee Name: " + empName);
        System.out.println("Employee Type: " + empType);
        System.out.println("Employee Salary: " + totalSalary);
    }
}