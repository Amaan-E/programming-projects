package electricity;

public class DomesticConsumer implements BillCalculator {

    String m_name;
    String m_id;
    double m_units;

    static final double rate = 6;

    public DomesticConsumer(String name, String id, double units) {
        m_name = name;
        m_id = id;
        m_units = units;
    }

    public double calculateBill() {
        return m_units * rate;
    }
}
