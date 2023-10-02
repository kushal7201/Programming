import java.util.*;

class Bank {
    private ArrayList<Account> A=new ArrayList<>();
    public void addAccount(Account a){
        A.add(a);
    }
    public Account searchAcc(double accno){
        for(int i=0;i<A.size();i++){
            if(A.get(i).getAccountNumber()==accno){
                return A.get(i);
            }
        }
        return new Account(0);
    }
}


class Account
{
    private double bal;  //The current balance
    private int accnum;  //The account number
    
    
    public Account(int a)
    {    
	bal=0.0;
	accnum=a;
    }
    
    public void deposit(double sum)
    {
	if (sum>0)
	    bal+=sum;    
	else
	    System.err.println("Account.deposit(...): "
			       +"cannot deposit negative amount.");    
    }
    
    public void withdraw(double sum)
    {
	if (sum>0)
	    bal-=sum;    
	else
	    System.err.println("Account.withdraw(...): "
			       +"cannot withdraw negative amount.");    
    }
    
    public double getBalance()
    {
	return bal;
    }
    
    public double getAccountNumber()
    {
	return accnum;
    }
    
    public String toString()
    {
	return "Acc " + accnum + ": " + "balance = " + bal;    
    }
    
    public final void print()
    {
	//Don't override this,
	//override the toString method
	System.out.println( toString() );    
    }
    
}
class CurrentAccount extends Account {
    private double overdraftLimit;
    public CurrentAccount(int val,double odl){
        super(val);
        this.overdraftLimit=odl;
    }
    
    @Override
    public void withdraw(double sum){
        if(overdraftLimit+ getBalance()>sum) super.withdraw(sum);
        else System.out.println("Overdraft Limit exceeeded: Cannot withdraw");
    }
    
    
}

class SavingsAccount extends Account {
    private double interest;
    public SavingsAccount(int val,double interest){
        super(val);
        this.interest=interest;
    }
    public void addInterest(){
        deposit(this.getBalance()*(this.interest));
    }
    @Override
    public void withdraw(double sum){
        if (sum<=getBalance()) super.withdraw(sum);
        else System.out.println("Cannot withdraw more than acc balance");
	       
	
    }
    
    
}

public class RunBank {
    public static void main(String[] args) {
        Bank B1=new Bank();
        SavingsAccount S1=new SavingsAccount(1001,.08);
        B1.addAccount(S1);
        CurrentAccount C1=new CurrentAccount(1002,8000);
        B1.addAccount(C1);
        B1.searchAcc(1001).deposit(7000);
        B1.searchAcc(1002).deposit(10000);
        SavingsAccount S=(SavingsAccount) B1.searchAcc(1001);
        S.addInterest();
        
        B1.searchAcc(1001).withdraw(2000);
        B1.searchAcc(1001).print();
        B1.searchAcc(1002).withdraw(150000);
        B1.searchAcc(1002).print();
        B1.searchAcc(1002).withdraw(12500);
        B1.searchAcc(1002).print();
        
      
    }
}