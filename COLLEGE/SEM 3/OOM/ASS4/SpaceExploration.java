class Spacecraft{
    String name;
    double fuelCapacity;

    Spacecraft(String name, double fuelCapacity){
        this.name = name;
        this.fuelCapacity = fuelCapacity;
    }

    void getName(){
        System.out.println("Name: " + this.name);
    }

    void getFuelCapacity(){
        System.out.println("Fuel Capacity: " + fuelCapacity);
    }
}

class Spaceship extends Spacecraft{
    int crewSize;
    Spaceship(String name, double fuelCapacity, int crewSize){
        super(name, fuelCapacity);
        this.crewSize = crewSize;
    }

    void getCrewSize(){
        System.out.println("Crew Size: "+ crewSize);
    }
}

class Starship extends Spaceship{
    double warpSpeed;
    Starship(String name, double fuelCapacity, int crewSize, double warpSpeed){
        super(name, fuelCapacity, crewSize);
        this.warpSpeed = warpSpeed;
    }

    void getWarpSpeed(){
        System.out.println("Warp Speed: " + warpSpeed);
    }
}

public class SpaceExploration {
    public static void main(String[] args){
        System.out.println();
        Spacecraft sc = new Spacecraft("Orion", 8600);
        System.out.println("Spacecraft: ");
        sc.getName();
        sc.getFuelCapacity();
        System.out.println();
        Spaceship ss = new Spaceship("Dark Phoenix", 104326.245, 10);
        System.out.println("Spaceship: ");
        ss.getName();
        ss.getFuelCapacity();
        ss.getCrewSize();
        System.out.println();
        Starship sts = new Starship("Silver Wings of Morning", 1179340.162, 100, 670616629);
        System.out.println("Starship: ");
        sts.getName();
        sts.getFuelCapacity();
        sts.getCrewSize();
        sts.getWarpSpeed();
        System.out.println();
    }
}
