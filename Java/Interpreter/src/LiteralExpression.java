package Java.Interpreter.src;

public class LiteralExpression {
    private String literal;
    boolean isMatch(String toMatch)
    {
        return toMatch.equals(literal);
    }

}
