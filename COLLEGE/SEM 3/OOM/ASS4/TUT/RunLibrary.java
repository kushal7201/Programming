import java.util.*;

class Author{
    private String name;
    private List<Book> books;
    public Author(String name){
        this.name=name;
        this.books=new ArrayList<>();
    }
    public String getName(){
        return name;
    }
    public List<Book> getBooks(){
        return books;
    }
    public void addBooks(Book book){
        books.add(book);
    }
}
class Book{
    private String title;
    private Author author;
    private String genre;
    private boolean isAvailable;

    public Book(String title, Author author, String genre, boolean isAvailable){
        this.title=title;
        this.author=author;
        this.genre=genre;
        this.isAvailable=isAvailable;
    }
    public String getTitle(){
        return title;
    }
    public Author getAuthor(){
        return author;
    }
    public String getGenre(){
        return genre;
    }
    public boolean isAvailable(){
        return isAvailable;
    }
    public void setAvailable(boolean available){
        isAvailable=available;
    }
}
class Patron{
    private String name;
    private List<Book> borrowedBooks;
    public Patron(String name){
        this.name=name;
        this.borrowedBooks=new ArrayList<>();
    }
    public String getName(){
        return name;
    }
    public List<Book> getBorrowedBooks(){
        return borrowedBooks;
    }
    public void borrowBook(Book book){
        if(book.isAvailable()){
            borrowedBooks.add(book);
            book.setAvailable(false);
        }
        else{
            System.out.println("Book is not available for borrowing");
        }
    }
    public void returnBook(Book book){
        if(borrowedBooks.contains(book)){
            borrowedBooks.remove(book);
            book.setAvailable(true);
        }
        else{
            System.out.println("Book was not borrowed by this patron.");
        }
    }
}
    class Library{
        private List<Book> books;
        private Map<String, Author> authors;
        private List<Patron> patrons;

        public Library(){
            this.books=new ArrayList<>();
            this.authors=new HashMap<>();
            this.patrons=new ArrayList<>();
        }
    
    public void addBook(Book book){
        books.add(book);
        Author author= book.getAuthor();
        if(!authors.containsKey(author.getName())){
            authors.put(author.getName(), author);
        }
        author.addBooks(book);
    }
        public void addAuthor(Author author){
            authors.put(author.getName(), author);
        }
        public void registerPatron(Patron patron){
            patrons.add(patron);
        }
    
    public void displayAvailableBooks(){
        System.out.println("Available Books");
        for(Book book: books){
            if(book.isAvailable()){
                System.out.println("Title: "+book.getTitle()+" Author: "+book.getAuthor()+" Genre: "+book.getGenre());
            }
        }
    }
    public void displayBorrowedBooksbyPatron(Patron patron){
        System.out.println("Books borrowed by "+patron.getName());
        for(Book book: patron.getBorrowedBooks()){
            System.out.println("Title: "+book.getTitle()+" Author: "+book.getAuthor()+" Genre: "+book.getGenre());
        }
    }
    public void displayBooksByAuthor(Author author){
        System.out.println("Books written by " +author.getName());
        for(Book book: author.getBooks()){
            System.out.println("Title: "+book.getTitle()+" Genre: "+book.getGenre());
        }
    }
}

public class RunLibrary{
    public static void main(String[] args) {
        Library library = new Library();

        Author author1 = new Author("Author 1");
        Author author2 = new Author("Author 2");

        Book book1 = new Book("Book 1", author1, "Genre 1", true);
        Book book2 = new Book("Book 2", author1, "Genre 2", true);
        Book book3 = new Book("Book 3", author2, "Genre 1", true);

        library.addAuthor(author1);
        library.addAuthor(author2);
        library.addBook(book1);
        library.addBook(book2);
        library.addBook(book3);

        Patron patron1 = new Patron("Patron 1");
        Patron patron2 = new Patron("Patron 2");

        library.registerPatron(patron1);
        library.registerPatron(patron2);

        patron1.borrowBook(book1);
        patron1.borrowBook(book2);
        patron2.borrowBook(book3);

        library.displayAvailableBooks();

        library.displayBorrowedBooksbyPatron(patron1);
        library.displayBorrowedBooksbyPatron(patron2);

        library.displayBooksByAuthor(author1);
        library.displayBooksByAuthor(author2);
    }

    }

