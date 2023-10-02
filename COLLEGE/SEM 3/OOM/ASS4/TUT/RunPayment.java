abstract class PaymentMethod {
    double amount;
    public void processPayment(double amount) {

    }
    public String generateReceipt() {
        return "";
    }

}

class CreditCard extends PaymentMethod {
    private String cardNumber;
    private String cardHolder;

    public CreditCard(String cardNumber, String cardHolder) {
        this.cardNumber = cardNumber;
        this.cardHolder = cardHolder;
    }

    @Override
    public void processPayment(double amount) {
        System.out.println("Processing credit card payment of $" + amount);
    }

    @Override
    public String generateReceipt() {
        return "Credit Card Payment Receipt";
    }
}

class Paypal extends PaymentMethod {
    private String email;

    public Paypal(String email) {
        this.email = email;
    }

    @Override
    public void processPayment(double amount) {
        System.out.println("Processing PayPal payment of $" + amount);
    }

    @Override
    public String generateReceipt() {
        return "Paypal Payment Receipt";
    }
}

class Bitcoin extends PaymentMethod {
    private String id;

    public Bitcoin(String id) {
        this.id = id;
    }

    @Override
    public void processPayment(double amount) {
        System.out.println("Processing Bitcoin payment of $" + amount);
    }

    @Override
    public String generateReceipt() {
        return "Bitcoin Payment Receipt";
    }
}

public class RunPayment {
    public static void main(String[] args) {
        PaymentMethod CreditCard=new CreditCard("1234-5678-9012-3456", "John Cena");
        PaymentMethod Paypal = new Paypal("john@wwe.com");
        PaymentMethod Bitcoin= new Bitcoin("nevergiveupcena");
        double amount=100;
        CreditCard.processPayment(amount);
        CreditCard.generateReceipt();
        Paypal.processPayment(amount);
        Paypal.generateReceipt();
        Bitcoin.processPayment(amount);
        Bitcoin.generateReceipt();
        
    }
}