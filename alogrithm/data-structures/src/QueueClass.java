public class QueueClass {

    //Array
    static class QueueArray {
        static int[] arr;
        static int size;
        static int rear = -1;

        QueueArray(int n) {
            arr = new int[n];
            size = n;
        }

        public static boolean isEmpty() {
            return rear == -1;
        }

        //Enqueue
        public static void add(int data) {
            if(rear == size - 1) {
                System.out.println("QueueArray is full");
            }

            rear++;
            arr[rear] = data;
        }

        //Dequeue
        public static int remove() {
            if(isEmpty()) {
                return -1;
            }

            int front = arr[0];
            for(int i = 0; i < rear; i++) {
                arr[i] = arr[i + 1];
            }

            rear--;
            return front;
        }

        //Front
        public static int peek() {
            if(isEmpty()) {
                return -1;
            }

            return arr[0];
        }

    }

    static class QueueLinkedList {
        static Node head = null;
        static Node tail = null;

        static class Node {
            int data;
            Node next;

            Node(int data) {
                this.data = data;
                next = null;
            }
        }

        public static boolean isEmpty() {
            return head == null && tail == null;
        }

        public static void add(int data) {
            Node node = new Node(data);

            if(isEmpty()) {
                tail = head = node;
            }

            tail.next = node;
            tail = node;
        }

        public static int remove() {
            if(isEmpty()) {
                return -1;
            }

            int front = head.data;
            if(head == tail) {
                tail = null;
            }
            head = head.next;
            return front;
        }

        public static int peek() {
            if(isEmpty()) {
                return -1;
            }

            return head.data;
        }
    }

    public static void main(String[] args) {
        QueueLinkedList q = new QueueLinkedList();

        q.add(1);
        q.add(2);
        q.add(3);

        while(!q.isEmpty()) {
            System.out.println(q.peek());
            q.remove();
        }
    }
}
