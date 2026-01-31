import java.util.Stack;

public class StackPushAtBottom {

    public static void pushAtBottom(int data, Stack<Integer> stack) {
        if(stack.empty()) {
            stack.push(data);
            return;
        }

        int top = stack.pop();
        pushAtBottom(data, stack);
        stack.push(top);
    }

    public static void reverse(Stack<Integer> stack) {
        if(stack.isEmpty()) {
            return;
        }

        int top = stack.pop();
        reverse(stack);
        pushAtBottom(top, stack);
    }

    public static void main(String[] args) {
        Stack<Integer> s = new Stack<>();

        s.add(1);
        s.add(2);
        s.add(3);

//        pushAtBottom(4, s);
//        reverse(s);

        while(!s.empty()) {
            System.out.println(s.peek());
            s.pop();
        }
    }
}
