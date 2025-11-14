// package Studies.OOP;

// Write a Java program to create a class known as "BankAccount" with methods called deposit() and withdraw(). Create a subclass called SavingsAccount that overrides the withdraw() method to prevent withdrawals if the account balance falls below one hundred
// Date - 10 / 10 / 2025
class BankAccountClass {
    protected int balance;

    public BankAccountClass(int balance) {
        this.balance = balance;
    }

    // withdraw
    public void withdraw(int balance) {
        if (this.balance > balance) {
            this.balance -= balance;
            System.out.println("Withdraw successful");
        } else {
            System.out.println("Insufficient balance.");
        }
    }

    // get balance in some  case
    public int getBalance() {
        return balance;
    }

    public void deposit(int balance) {
        if (balance > 0) {
            this.balance += balance;
            System.out.println("Deposit successful. Current balance: Rs " + balance);
        } else {
            System.out.println("Invalid deposit amount.");
        }
    }

}

class SavingAccountClass extends BankAccountClass {

    public SavingAccountClass(int intitalBalance) {
        super(intitalBalance);
    }

    // getting minimum as to collect balance for never close the bankAccount
    @Override
    public void withdraw(int balance) {
        if (this.balance - balance >= 100) {
            this.balance -= balance;
            System.out.println("Withdraw successful from Savings Account. Remaining balance: Rs" + balance);
        } else {
            System.out.println("Withdrawal denied. Minimum balance of Rs100 must be maintained.");
        }
    }

}

public class BankService {
    public static void main(String[] args) {
        SavingAccountClass myAccount = new SavingAccountClass(500);

        myAccount.deposit(200); 
        myAccount.withdraw(550); 
        myAccount.withdraw(400);
        System.out.println("Final balance: Rs" + myAccount.getBalance());

    }
}
