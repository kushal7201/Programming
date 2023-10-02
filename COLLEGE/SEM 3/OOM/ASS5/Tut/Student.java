class Student {
    int rollNo;
    String name;
    static String college = "SIET";

    static void change() {
        college = "IIITA";
    }

    Student(int rollNo, String name) {
        this.rollNo = rollNo;
        this.name = name;
    }

    void display() {
        System.out.println(rollNo + " " + name + " " + college);
    }

    public static void main(String args[]) {
        Student s1 = new Student(111, "NAME1");
        Student s2 = new Student(222, "NAME2");
        Student s3 = new Student(333, "NAME3");
        Student.change();
        // s1.change();
        s1.display();
        s2.display();
        s3.display();
    }
}
