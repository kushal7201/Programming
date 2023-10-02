// Kushal Bansal--IIT2022021

import java.util.*;

interface BankAccount{
    void deposit(double amt);
    void withdraw(double amt);
}

class SavingsAccount implements BankAccount{

    double balance;
    double Rate = 12;

    SavingsAccount(double balance){
        this.balance = balance;
    }

    public void deposit(double amt) {
        this.balance += amt;
        System.out.println("Updated Balance --> " + this.balance);
    }

    public void withdraw(double amt) {
        if(balance < amt){
            System.out.println("Insufficient Balance");
        }
        else{
            this.balance -= amt;
            System.out.println("Updated Balance --> " + this.balance);
        }
    }

    double calculateInterest(double amt, int year){
        return amt * Rate * year / 100;
    }
}

class CheckingAccount implements BankAccount{

    double balance;
    double Rate = 12;
    double feepermonth = 10;

    CheckingAccount(double balance){
        this.balance = balance;
    }

    public void deposit(double amt) {
        this.balance += amt;
        System.out.println("Updated Balance --> " + this.balance);
    }

    public void withdraw(double amt) {
        if(balance < amt){
            System.out.println("Insufficient Balance");
        }
        else{
            this.balance -= amt;
            System.out.println("Updated Balance --> " + this.balance);
        }
    }

    double calculateInterest(double amt, int year){
        return (amt * Rate * year / 100) - (year * 12 * feepermonth);
    }
}

public class RunBank {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        System.out.print("Enter Balance for Savings Account : ");
        double rs = input.nextDouble();

        SavingsAccount acc1 = new SavingsAccount(rs);
        System.out.print("Enter Amount to be deposited : ");
        double rs1 = input.nextDouble();
        acc1.deposit(rs1);

        System.out.print("Enter Amount to be withdrawn : ");
        double rs2 = input.nextDouble();
        acc1.withdraw(rs2);

        System.out.print("Enter Time duration for calculating Interest : ");
        int rs3 = input.nextInt();
        System.out.println("Interest for " + rs3 + " is " + acc1.calculateInterest(rs, rs3));

        System.out.print("\nEnter Balance for Checkings Account : ");
        double Rs = input.nextDouble();

        CheckingAccount acc2 = new CheckingAccount(Rs);
        System.out.print("Enter Amount to be deposited : ");
        double Rs1 = input.nextDouble();
        acc2.deposit(Rs1);

        System.out.print("Enter Amount to be withdrawn : ");
        double Rs2 = input.nextDouble();
        acc2.withdraw(Rs2);

        System.out.print("Enter Time duration for calculating Interest : ");
        int Rs3 = input.nextInt();
        System.out.println("Interest for " + Rs3 + " is " + acc1.calculateInterest(Rs, Rs3));

        input.close();
    }
}