public class SuppressWarningsAnnotation {
    @SuppressWarnings("deprecation")
    static void urmomOrSomething() {
        DeprecatedStuffClass something = new DeprecatedStuffClass();
        something.somethingSpecial();
    }

    public static void main(String[] args) {
        urmomOrSomething();
    }
}
