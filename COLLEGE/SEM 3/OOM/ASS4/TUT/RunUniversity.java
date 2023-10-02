import java.util.*;

class Person {
    private int id;
    private String firstName;
    private String lastName;
    private String email;

    public Person(int id, String firstName, String lastName, String email) {
        this.id = id;
        this.firstName = firstName;
        this.lastName = lastName;
        this.email = email;
    }

    public int getId() {
        return id;
    }

    public String getFirstName() {
        return firstName;
    }

    public String getLastName() {
        return lastName;
    }

    public String getEmail() {
        return email;
    }
}

class Student extends Person {
    private int studentId;
    private List<Course> enrolledCourses;

    public Student(int id, String firstName, String lastName, String email, int studentId) {
        super(id, firstName, lastName, email);
        this.studentId = studentId;
        this.enrolledCourses = new ArrayList<>();
    }

    public void enrollCourse(Course course) {
        enrolledCourses.add(course);
        course.enrollStudent(this);
    }

    public void dropCourse(Course course) {
        enrolledCourses.remove(course);
        course.dropStudent(this);
    }

    public List<Course> getEnrolledCourses() {
        return enrolledCourses;
    }
}

class Instructor extends Person {
    private int instructorId;
    private List<Course> coursesTaught;

    public Instructor(int id, String firstName, String lastName, String email, int instructorId) {
        super(id, firstName, lastName, email);
        this.instructorId = instructorId;
        this.coursesTaught = new ArrayList<>();
    }

    public void assignCourse(Course course) {
        coursesTaught.add(course);
        course.setInstructor(this);
    }

    public List<Course> getAssignedCourses() {
        return coursesTaught;
    }
}

class Course {
    private int courseId;
    private String courseName;
    private Instructor instructor;
    private List<Student> studentsEnrolled;

    public Course(int courseId, String courseName) {
        this.courseId = courseId;
        this.courseName = courseName;
        this.studentsEnrolled = new ArrayList<>();
    }

    public void enrollStudent(Student student) {
        studentsEnrolled.add(student);
    }

    public void dropStudent(Student student) {
        studentsEnrolled.remove(student);
    }

    public List<Student> getEnrolledStudents() {
        return studentsEnrolled;
    }

    public void setInstructor(Instructor instructor) {
        this.instructor = instructor;
    }

    public Instructor getInstructor() {
        return instructor;
    }
     public int getCourseId() {
        return courseId;
    }

    public String getCourseName() {
        return courseName;
    }
}

public class RunUniversity{
    public static void main(String[] args) {
        Student student1 = new Student(1, "John", "Doe", "john@example.com", 101);
        Student student2 = new Student(2, "Jane", "Smith", "jane@example.com", 102);

        Instructor instructor1 = new Instructor(101, "Professor", "Johnson", "prof.johnson@example.com", 201);
        Instructor instructor2 = new Instructor(102, "Professor", "Smith", "prof.smith@example.com", 202);

        Course course1 = new Course(1001, "Math 101");
        Course course2 = new Course(1002, "History 101");

        student1.enrollCourse(course1);
        student1.enrollCourse(course2);
        student2.enrollCourse(course1);

        instructor1.assignCourse(course1);
        instructor2.assignCourse(course2);

        displayCourseInfo(course1);
        displayCourseInfo(course2);
    }

    public static void displayCourseInfo(Course course) {
        System.out.println("Course ID: " + course.getCourseId());
        System.out.println("Course Name: " + course.getCourseName());
        Instructor instructor = course.getInstructor();
        System.out.println("Instructor: " + instructor.getFirstName() + " " + instructor.getLastName());
        System.out.println("Enrolled Students:");
        List<Student> students = course.getEnrolledStudents();
        for (Student student : students) {
            System.out.println(student.getFirstName() + " " + student.getLastName());
        }
    }
}
