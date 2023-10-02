class Person {
    public String name;
    public String gender;
    public int age;
    
    public void displayBasic(){
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Gender: "+gender);
    }
}

class Student extends Person {
    private int studentID;
    private double grade;

    Student(int id, String nam, String gen, int ag, double grad) {
        studentID = id;
        grade = grad;
        name = nam;
        gender = gen;
        age = ag;
    }

    public void displayInfo() {
        System.out.println("Student ID: " + studentID);
        System.out.println("Grade: " + grade);
        this.displayBasic();

    }

    public void calculateGradeLevel() {
        if (grade >= 9.5) {
            System.out.println("Grade level: A+");
        } else if (grade >= 8.5) {
            System.out.println("Grade level: A");
        } else if (grade >= 7.5) {
            System.out.println("Grade level: B+");
        } else if (grade >= 6.5) {
            System.out.println("Grade level: B");
        } else {
            System.out.println("Grade level: C");
        }
    }

}

class Teacher extends Person {
    private int teacherID;
    private String subject;

    Teacher(int id, String nam, String gen, int ag, String sub) {
        teacherID = id;
        name = nam;
        gender = gen;
        age = ag;
        subject = sub;
    }

    public void displayInfo() {
        System.out.println("Teacher ID: " + teacherID);
        System.out.println("Subject: " + subject);
        this.displayBasic();
    }
}

class AdministrativeStaff extends Person {
    private int staffID;
    private String role;

    AdministrativeStaff(int id, String nam, String gen, int ag, String rol) {
        staffID = id;
        role = rol;
        name = nam;
        gender = gen;
        age = ag;
    }

    public void displayInfo() {
        System.out.println("Staff ID: " + staffID);
        System.out.println("Role: " + role);
        this.displayBasic();
    }
}

class Principal extends Person {
    private int principalID;
    private int yearsOfExperience;

    Principal(int id, String nam, String gen, int ag, int exp) {
        principalID = id;
        yearsOfExperience = exp;
        name = nam;
        gender = gen;
        age = ag;

    }

    public void displayInfo() {
        System.out.println("Principal ID: " + principalID);
        System.out.println("Years of experience: " + yearsOfExperience);
        this.displayBasic();
    }
}

public class SchoolManage{
    public static void main(String[] args){
        Student stu = new Student(1, "Stu1", "Male", 19, 7.5);
        stu.displayInfo();
        stu.calculateGradeLevel();

        Teacher teacher = new Teacher(2, "Teacher1", "Male", 45, "Math");
        teacher.displayInfo();

        AdministrativeStaff staff = new AdministrativeStaff(3, "Staff1", "Female", 55, "Principal");
        staff.displayInfo();

        Principal pri = new Principal(3, "Principal", "Female", 55, 12);
        pri.displayInfo();
    }
}