class Animal {
    private String name;
    private String food;
    private String sound;
    private String movement;

    public Animal(String name, String food, String sound, String movement) {
        this.name = name;
        this.food = food;
        this.sound = sound;
        this.movement = movement;
    }

    public void makeSound() {
        System.out.println(name + " makes a " + sound + " sound.");
    }

    public void move() {
        System.out.println(name + " moves " + movement + ".");
    }
    public void food() {
        System.out.println(name + " eats " + food + ".");
    }
}

class Lion extends Animal {
    public Lion() {
        super("Lion", "meat", "roar", "gracefully");
    }
}

class Hippo extends Animal {
    public Hippo() {
        super("Hippo", "plants", "grunt", "heavily");
    }
}

class Tiger extends Animal {
    public Tiger() {
        super("Tiger", "meat", "roar", "stealthily");
    }
}

class Wolf extends Animal {
    public Wolf() {
        super("Wolf", "meat", "howl", "in a pack");
    }
}

class Dog extends Animal {
    public Dog() {
        super("Dog", "varied", "bark", "playfully");
    }
}

class Cat extends Animal {
    public Cat() {
        super("Cat", "varied", "meow", "gracefully");
    }
}

class Horse extends Animal {
    public Horse() {
        super("Horse", "plants", "neigh", "elegantly");
    }
}

class Pigeon extends Animal {
    public Pigeon() {
        super("Pigeon", "seeds", "coo", "in flight");
    }
}

public class AnimalSimulation {
    public static void main(String[] args) {
        Lion lion = new Lion();
        Hippo hippo = new Hippo();
        Tiger tiger = new Tiger();

        lion.makeSound();  
        hippo.move();      
        tiger.food(); 
    }
}
