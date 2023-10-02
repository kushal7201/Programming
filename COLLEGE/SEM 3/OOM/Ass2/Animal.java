public class Animal {
    private String name, sound, food, movement, gender;
    public Animal(String name, String sound, String food, String speed, String gender) {
        this.name = name;
        this.sound = sound;
        this.food = food;
        this.movement = speed;
        this.gender = gender;
    }

    void foodType() {
        System.out.println(name + " is a: " + food);
    }

    void movementSpeed() {
        System.out.println(name + " moves " + movement);
    }

    void makeSound() {
        System.out.println(name + " sound: " + sound);
    }

    String getGender() {
        return gender;
    }
    public static void main(String[] args) {
        Lion l1 = new Lion("Male");
        l1.foodType();
        l1.movementSpeed();
        l1.makeSound();
        System.out.println("Gender: " + l1.getGender());

        Hippo hi1 = new Hippo("Female");
        hi1.foodType();
        hi1.movementSpeed();
        hi1.makeSound();
        System.out.println("Gender: " + hi1.getGender());

        Tiger t1 = new Tiger("Male");
        t1.foodType();
        t1.movementSpeed();
        t1.makeSound();
        System.out.println("Gender: " + t1.getGender());

        Wolf w1 = new Wolf("Female");
        w1.foodType();
        w1.movementSpeed();
        w1.makeSound();
        System.out.println("Gender: " + w1.getGender());

        Dog d1 = new Dog("Male");
        d1.foodType();
        d1.movementSpeed();
        d1.makeSound();
        System.out.println("Gender: " + d1.getGender());

        Cat c1 = new Cat("Female");
        c1.foodType();
        c1.movementSpeed();
        c1.makeSound();
        System.out.println("Gender: " + c1.getGender());

        Horse ho1 = new Horse("Male");
        ho1.foodType();
        ho1.movementSpeed();
        ho1.makeSound();
        System.out.println("Gender: " + ho1.getGender());

        Pigeon p1 = new Pigeon("Female");
        p1.foodType();
        p1.movementSpeed();
        p1.makeSound();
        System.out.println("Gender: " + p1.getGender());
    }
}

class Lion extends Animal {
    public Lion(String gender) {
        super("Lion", "roaring", "Carnivores", "fast", gender);
    }
}

class Hippo extends Animal {
    public Hippo(String gender) {
        super("Hippo", "grunting", "Omnivores", "slow and heavy", gender);
    }
}

class Tiger extends Animal {
    public Tiger(String gender) {
        super("Tiger", "roaring", "Carnivores", "fast", gender);
    }
}

class Wolf extends Animal {
    public Wolf(String gender) {
        super("Wolf", "howling", "Carnivores", "fast", gender);
    }
}

class Dog extends Animal {
    public Dog(String gender) {
        super("Dog", "barking", "Omnivores", "varied", gender);
    }
}

class Cat extends Animal {
    public Cat(String gender) {
        super("Cat", "meowing", "Carnivores", "varied", gender);
    }
}

class Horse extends Animal {
    public Horse(String gender) {
        super("Horse", "neighing", "Herbivores", "fast", gender);
    }
}

class Pigeon extends Animal {
    public Pigeon(String gender) {
        super("Pigeon", "cooing", "Herbivores", "flying", gender);
    }
}
