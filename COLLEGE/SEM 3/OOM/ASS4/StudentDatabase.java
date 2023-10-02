import java.util.*;

class Student{
    public int studentid;
    public String firstName;
    public String lastName;
    Student(int studentid, String firstName, String lastName){
        this.studentid = studentid;
        this.firstName = firstName;
        this.lastName = lastName;
    }
}

/*Then, create a StudentDatabase class that uses an appropriate collection to store instances of
Student and provides the following functionality: */
// Path: StudentDatabase.java
public class StudentDatabase{
    ArrayList<Student> studentList = new ArrayList<Student>();
    public void addStudent(Student student){
        studentList.add(student);
    }
    public void removeStudent(int id){
        for(Student student: studentList){
            if(student.studentid==id){
                studentList.remove(student);
                break;
            }
        }
    }
    public void printDetails(){
        for(Student student: studentList){
            System.out.println(student.studentid+": "+student.firstName+" "+student.lastName);
        }
    }
    public static void main(String[] args){
        StudentDatabase database = new StudentDatabase();
        database.addStudent(new Student(1, "Person1", "Doe"));
        database.addStudent(new Student(2, "Person2", "da"));
        database.addStudent(new Student(3, "Person3", "sdf"));
        database.addStudent(new Student(3, "Person3", "sdf"));
        database.printDetails();
        database.removeStudent(2);
        database.printDetails();
    }
}