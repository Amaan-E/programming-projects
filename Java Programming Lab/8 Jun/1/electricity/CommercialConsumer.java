package electricity;

public class CommercialConsumer extends DomesticConsumer {

    static final double rate = 9;

    public CommercialConsumer(String name, String id, double units) {
        super(name, id, units);
    }
}
