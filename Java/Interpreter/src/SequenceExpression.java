package Java.Interpreter.src;
import Java.Interpreter.src.RegularExpression;

public class SequenceExpression extends RegularExpression{
    RegularExpression expression1;
    RegularExpression expression2;
    
    boolean isMatch(String toMatch)
    {
        return expression1.contains(expression1) && toMatch.contains(expression1)
    }  
    
    RegularExpression getExpression1(){
        return expression1;
    }
    void setExpression1(String expression)
    {
        this.expression1 = expression;
    }

    RegularExpression getExpression2(){
        return expression2;
    }
    void setExpression2(String expression)
    {
        this.expression2 = expression;
    }
}
