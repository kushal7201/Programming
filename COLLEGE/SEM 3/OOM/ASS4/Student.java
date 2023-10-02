public class Student {
    private int roll_num;
    private float height;
    
    public void displayDetails(){
        System.out.println("Roll Number: " + roll_num);
        System.out.println("Height: " + height);
    }
    public float avgHeight(Student[] st){
        float sum = 0.0f;
        for(int i=0;i<15;i++){
            sum += st[i].height;
        }
        return sum/15;
    }
    public static void main(String[] args){
        Student st[] = new Student[15];
        for(int i=0;i<15;i++){
            st[i] = new Student();
            st[i].roll_num = i+1;
            st[i].height = (5.5f+(i/10.0f));
        }
        for(int i=0;i<15;i++){
            st[i].displayDetails();
        }
        System.out.println("Average Height: " + st[0].avgHeight(st));
    }
}
