import java.util.*;

class Animal {
    String name;
    int age;
    String gender;

    public Animal(String name, int age, String gender) {
        this.name = name;
        this.age = age;
        this.gender = gender;
    }

    void eat() {
    };

    void makeSound() {
    };

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getGender() {
        return gender;
    }
}

interface Eater {
    void eat();
}

interface SoundMaker {
    void makeSound();
}

class Mammal extends Animal implements Eater, SoundMaker {
    String furColor;

    public Mammal(String name, int age, String gender, String furColor) {
        super(name, age, gender);
        this.furColor = furColor;
    }

    @Override
    public void eat() {
        System.out.println(getName() + " the mammal is eating.");
    }

    @Override
    public void makeSound() {
        System.out.println(getName() + " the mammal is making a sound.");
    }
}

class Bird extends Animal implements Eater, SoundMaker {
    double wingSpan;

    public Bird(String name, int age, String gender, double wingSpan) {
        super(name, age, gender);
        this.wingSpan = wingSpan;
    }

    @Override
    public void eat() {
        System.out.println(getName() + " the bird is eating.");
    }

    @Override
    public void makeSound() {
        System.out.println(getName() + " the bird is making a sound.");
    }
}

class Reptile extends Animal implements Eater, SoundMaker {
    String scaleColor;

    public Reptile(String name, int age, String gender, String scaleColor) {
        super(name, age, gender);
        this.scaleColor = scaleColor;
    }

    @Override
    public void eat() {
        System.out.println(getName() + " the reptile is eating.");
    }

    @Override
    public void makeSound() {
        System.out.println(getName() + " the reptile is making a sound.");

    }
}

    class Zoo {
        ArrayList<Animal> animals;

        public Zoo() {
            animals = new ArrayList<>();
        }

        public void addAnimal(Animal animal) {
            animals.add(animal);
        }

        public void performDailyActivities() {
            for (Animal animal : animals) {
                animal.eat();
                animal.makeSound();
            }
        }
    }

public class RunZoo{
    public static void main(String[] args) {
        Zoo Z1 = new Zoo();

     
        Z1.addAnimal(new Mammal("Lion", 5, "Male", "Yellow"));
        Z1.addAnimal(new Bird("Eagle", 3, "Female", 6.2));
        Z1.addAnimal(new Reptile("Snake", 2, "Male", "Green"));

        
        Z1.performDailyActivities();
    }
}
