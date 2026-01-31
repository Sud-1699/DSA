import java.util.ArrayList;

public class StackClass {
    // Stack implementation using LinkedList

    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            next = null;
        }
    }
    // Linked List Stack
    static class Stack {
        public static Node head;
        public static boolean isEmpty() {
            return head == null;
        }

        public static void push(int data) {
            Node node = new Node(data);
            if(isEmpty()) {
                head = node;
                return;
            }

            node.next = head;
            head = node;
        }

        public static int pop() {
            if(isEmpty()) {
                return -1;
            }

            int data = head.data;
            head = head.next;

            return data;
        }

        public static int peek() {
            if(isEmpty()) {
                return -1;
            }
            return head.data;
        }
    }

    static class Stack1 {
        public static ArrayList<Integer> list = new ArrayList<>();
        public static boolean isEmpty() {
            return list.size() == 0;
        }

        public static void push(int data) {
            list.add(data);
        }

        public static int pop() {
            if(isEmpty()) {
                return -1;
            }

            return list.remove(list.size() - 1);
        }

        public static int peek() {
            return list.get(list.size() - 1);
        }
    }

    public static void main(String[] args) {
        Stack1 s = new Stack1();
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);

        while (!s.isEmpty()) {
            System.out.println(s.peek());
            s.pop();
        }
    }
}
