class Book{
    private String title;
    private String author;
    private int yearPublished;
    private double price;

    public Book(){
        this.title = "title";
        this.author = "author";
        this.yearPublished = 0;
        this.price = 0.0;
    }
    public Book(String title, String author, int yearPublished, double price){
        this.title = title;
        this.author = author;
        this.yearPublished = yearPublished;
        this.price = price;
    }

    public void displayDetails(){
        System.out.println("Title: " + this.title);
        System.out.println("Author: " + this.author);
        System.out.println("Year Published: " + this.yearPublished);
        System.out.println("Price: " + this.price);
    }
}

public class BookTest{
    public static void main(String[] args){
        Book book1 = new Book();
        Book book2 = new Book("The Great Gatsby", "F. Scott Fitzgerald", 1925, 10.99);
        Book book3 = new Book("The Catcher in the Rye", "J.D. Salinger", 1951, 9.99);
        book1.displayDetails();
        book2.displayDetails();
        book3.displayDetails();
    }
}