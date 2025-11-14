class BankAccountClass {

    private String AccountHolderName;
    private double balance;

    // parameteris constructor
    public BankAccountClass(String AccountHolderName, double balance) {
        this.AccountHolderName = AccountHolderName;
        this.balance = balance;
    }

    // public to deposit any person outside
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            showMessage("Deposit SuccessFul");
        } else
            showMessage("Invalid Desposit amount");
    }

    // withdrawal from outside
    public void withdrawal(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            showMessage("Withdrawal successful.");
        } else
            showMessage("Amount is less in account ");
    }

    // check balance
    public double getBalance() {
        return balance;
    }

    // Private method to show internal messages
    private void showMessage(String message) {
        System.out.println("Message: " + message);
    }

    // mini statement
    public void miniStatement() {
        System.out.println("Account Holder: " + AccountHolderName);
        System.out.println("Current Balance: Rs " + balance);
    }
}
public class BankAccount{
    public static void main(String[] args) {
        BankAccountClass account = new BankAccountClass("Mukesh", 5000.0);
        account.deposit(1500.0);
        account.withdrawal(2000.0);
        account.withdrawal(6000.0); // Should trigger private message
        System.out.println("Final Balance: RS " + account.getBalance());
        account.miniStatement();
    }
}
