public class Vehicle {
    private String fuelType;

    public void printFuelType(){
        System.out.println("Fuel Type: " + fuelType);
    }
    public void setFuelType(String fuelType){
        this.fuelType = fuelType;
    }
    public static void main(String[] args) {
        Car car = new Car();
        car.setNumDoors(4);
        car.setCarModel("Toyota");
        car.setFuelType("Petrol");
        car.printFuelType();
        car.getNumDoors();
        car.getCarModel();
        System.out.println("--------------------");
        Motorcyle bike = new Motorcyle();
        bike.setFuelType("Diesel");
        bike.setHasSideCar(true);
        bike.printFuelType();
        bike.getHasSideCar();
    }
}

class Car extends Vehicle{
    private int numDoors;
    private String carModel;

    public void setNumDoors(int numDoors){
        this.numDoors = numDoors;
    }
    public void setCarModel(String carModel){
        this.carModel = carModel;
    }
    public void getNumDoors(){
        System.out.println("Number of doors: " + numDoors);
    }
    public void getCarModel(){
        System.out.println("Car Model: " + carModel);
    }
}

class Motorcyle extends Vehicle{
    private boolean hasSideCar;
    public void setHasSideCar(boolean hasSideCar){
        this.hasSideCar = hasSideCar;
    }
    public void getHasSideCar(){
        System.out.println("Has Side Car: " + hasSideCar);
    }

}
