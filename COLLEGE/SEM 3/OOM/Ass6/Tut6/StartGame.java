interface Scene{
    void display();
}

class House implements Scene{
    public void display(){
        System.out.println("House overriding scene interface method");
    }
}

class BusStop implements Scene{
    public void display(){
        System.out.println("Bus stop overriding scene interface method");
    }
}

class SupperMarket implements Scene{
    public void display(){
        System.out.println("Supper market overriding scene interface method");
    }
}

public class StartGame {
    public static void main(String[] args){
        House h = new House();
        h.display();
        BusStop b =  new BusStop();
        b.display();
        SupperMarket s = new SupperMarket();
        s.display();
    }
}