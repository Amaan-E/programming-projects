class BankAccount {

    String m_accountNumber;
    double m_balance;
    double m_interestRate;

    void deposit(double amount) {
        if (amount > 0) {
            m_balance += amount;
        }
    }
}

class SavingsAccount extends BankAccount {

    double m_minimumBalance;

    double withdraw(double amount) {
        assert (amount <= m_balance);
        return (amount <= m_balance) ? m_balance -= amount : 0;
    }
}

class Four {

    public static void main(String[] args) {
        BankAccount b = new BankAccount();
        b.deposit(1000);
        SavingsAccount s = new SavingsAccount();
        s.deposit(1000);
        s.withdraw(1000);
    }
}
