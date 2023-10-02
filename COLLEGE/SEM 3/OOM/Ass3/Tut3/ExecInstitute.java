class Person{
    String name;
    int age;
}

interface Course{
    public int getcourseCode();
    public String getcourseName();
}

class Student extends Person{
    int studentID;
    int batch;
    Student(String name,int age,int studentID,int batch){
        this.name = name;
        this.age = age;
        this.studentID=studentID;
        this.batch=batch;
    }
    void display(){
        System.out.println("Name: "+name);
        System.out.println("Age: "+age);
        System.out.println("Student ID: "+studentID);
        System.out.println("Batch: "+batch);
    }
    int calculateAge(){
        return age;
    }
}

class Faculty extends Person{
    int employeeID;
    String department;
    Faculty(String name,int age,int employeeID,String department){
        this.name = name;
        this.age = age;
        this.employeeID=employeeID;
        this.department=department;
    }
    void display(){
        System.out.println("Name:0 "+name);
        System.out.println("Age: "+age);
        System.out.println("Employee ID: "+employeeID);
        System.out.println("Department: "+department);
    }
    int calculateAge(){
        return age;
    }
}

class CourseEnrollment extends Student implements Course{   
    int enrollmentID;
    String semester;
    int courseCode;
    String courseName;

    CourseEnrollment(String name,int age,int studentID,int batch,int enrollmentID,String semester, int courseCode, String courseName){
        super(name,age,studentID,batch);
        this.enrollmentID=enrollmentID;
        this.semester=semester;
        this.courseCode=courseCode;
        this.courseName=courseName;
    }

    public int getcourseCode(){
        return courseCode;
    }
    public String getcourseName(){
        return courseName;
    }

    void display(){
        System.out.println("Student Name: "+name);
        System.out.println("Age: "+age);
        System.out.println("Enrollment ID: "+enrollmentID);
        System.out.println("Semester: "+semester);
        System.out.println(courseName+": "+courseCode);
    }
    int calculateDuration(){
        return 4;
    }
}

class TeachingAssignment extends Faculty{
    int assignmentID;
    String academicYear;
    TeachingAssignment(String name,int age,int employeeID,String department,int assignmentID,String academicYear){
        super(name,age,employeeID,department);
        this.assignmentID=assignmentID;
        this.academicYear=academicYear;
    }
    void display(){
        super.display();
        System.out.println("Assignment ID: "+assignmentID);
        System.out.println("Academic Year: "+academicYear);
    }
    int calculateDuration(){
        return 4;
    }
}

public class ExecInstitute{

    public static void main(String[] args) {
        Student s = new Student("Rahul", 20, 123, 2020);
        s.display();
        System.out.println("Age: "+s.calculateAge());
        System.out.println();

        Faculty f = new Faculty("Raj", 40, 456, "CSE");
        f.display();
        System.out.println("Age: "+f.calculateAge());
        System.out.println();

        CourseEnrollment ce = new CourseEnrollment("Rahul", 20, 123, 2020, 789, "Spring", 101, "Java");
        ce.display();
        System.out.println("Duration: "+ce.calculateDuration()+" years");
        System.out.println();

        TeachingAssignment ta = new TeachingAssignment("Raj", 40, 456, "CSE", 987, "2020-21");
        ta.display();
        System.out.println("Duration: "+ta.calculateDuration()+" years");
    }
}

