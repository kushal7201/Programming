import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

class Book {
    private String title;

    public Book(String title) {
        this.title = title;
    }

    public String getTitle() {
        return title;
    }
}

class User {
    private String name;

    public User(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }
}


class Transaction {
    private User user;
    private Book book;
    private String borrowDate;

    public Transaction(User user, Book book, String borrowDate) {
        this.user = user;
        this.book = book;
        this.borrowDate = borrowDate;
    }

    public User getUser() {
        return user;
    }

    public Book getBook() {
        return book;
    }

    public String getBorrowDate() {
        return borrowDate;
    }
}

class Library {
    private List<Book> availableBooks;
    private Map<User, List<Book>> borrowedBooks;
    private Map<User, List<Transaction>> transactionHistory;


    public Library() {
        availableBooks = new ArrayList<>();
        borrowedBooks = new HashMap<>();
        transactionHistory = new HashMap<>();
    }

    public void addBook(Book book) {
        availableBooks.add(book);
    }

    public void addUser(User user) {
        transactionHistory.put(user, new ArrayList<>());
        borrowedBooks.put(user, new ArrayList<>());
    }

    public void displayAvailableBooks() {
        System.out.println("Available Books:");
        for (Book book : availableBooks) {
            System.out.println("- " + book.getTitle());
        }
    }

    public void borrowBook(User user, Book book) {
        if (availableBooks.contains(book)) {
            availableBooks.remove(book);
            borrowedBooks.get(user).add(book);
            String borrowDate = "2023-08-20"; // Replace with actual date
            Transaction transaction = new Transaction(user, book, borrowDate);
            transactionHistory.get(user).add(transaction);
            System.out.println(user.getName() + " borrowed the book: " + book.getTitle());
        } else {
            System.out.println("Book not available for borrowing: " + book.getTitle());
        }
    }

    public void returnBook(User user, Book book) {
        if (borrowedBooks.get(user).contains(book)) {
            borrowedBooks.get(user).remove(book);
            availableBooks.add(book);
            System.out.println(user.getName() + " returned the book: " + book.getTitle());
        } else {
            System.out.println("Book not borrowed by " + user.getName() + ": " + book.getTitle());
        }
    }
}

public class RunLibrary {
    public static void main(String[] args) {
        Library library = new Library();

        Book book1 = new Book("The Great Gatsby");
        Book book2 = new Book("To Kill a Mockingbird");
        library.addBook(book1);
        library.addBook(book2);

        User user1 = new User("Alice");
        User user2 = new User("Bob");
        library.addUser(user1);
        library.addUser(user2);

        library.displayAvailableBooks();

        library.borrowBook(user1, book1);
        library.borrowBook(user2, book2);

        library.returnBook(user1, book1);

        library.displayAvailableBooks();
    }
}
