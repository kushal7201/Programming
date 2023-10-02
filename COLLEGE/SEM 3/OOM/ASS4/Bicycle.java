public class Bicycle {
    private int gears;
    private int speed;

    void incSpeed(int sp){
        this.speed+=sp;
    }
    public void decSpeed(int sp){
        this.speed-=sp;
    }
    public Bicycle(int gear, int sp){
        this.gears = gear;
        this.speed = sp;
    }
    public static void main(String[] args){
        MountainBike m1;
        m1 = new MountainBike(29);
        m1.updateSeatHeight(30);
        System.out.println("Seat height of m1 is "+ m1.seatHeight);

    }
}

class MountainBike{
    public float seatHeight;
    public void updateSeatHeight(float height){
        this.seatHeight = height;
    }
    public MountainBike(float height){
        this.seatHeight = height;
    }
}

