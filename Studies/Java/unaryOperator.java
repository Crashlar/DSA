public class unaryOperator {
    public static void main(String[] args) {
        int a = 10;
        int b = a;

        System.out.println("a: " + a);
        System.out.println("b: " + b);

        // Unary plus (no effect)
        int c = +a;
        System.out.println("c (+a): " + c);

        // Unary minus
        int d = -a;
        System.out.println("d (-a): " + d);

        // Increment operator (prefix)
        int e = ++a; // a becomes 11, then e becomes 11
        System.out.println("e (++a): " + e);
        System.out.println("a after ++a: " + a);

        // Increment operator (postfix)
        int f = a++; // f becomes 11, then a becomes 12
        System.out.println("f (a++): " + f);
        System.out.println("a after a++: " + a);

        // Decrement operator (prefix)
        int g = --a; // a becomes 11, then g becomes 11
        System.out.println("g (--a): " + g);
        System.out.println("a after --a: " + a);

        // Decrement operator (postfix)
        int h = a--; // h becomes 11, then a becomes 10
        System.out.println("h (a--): " + h);
        System.out.println("a after a--: " + a);

        // Logical NOT operator (for boolean)
        boolean isTrue = true;
        boolean isFalse = !isTrue;
        System.out.println("isTrue: " + isTrue);
        System.out.println("isFalse (!isTrue): " + isFalse);

        // Bitwise NOT operator (for integers)
        int x = 5; // Binary: 00000101
        int y = ~x; // Binary: 11111010 (two's complement for -6)
        System.out.println("x: " + x);
    }
}