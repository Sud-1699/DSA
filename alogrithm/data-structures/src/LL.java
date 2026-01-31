class LL {
    Node head;
    int size;

    LL() {
        this.size = 0;
    }

    class Node {
        String data;
        Node next;

        Node(String data) {
            this.data = data;
            this.next = null;
            size++;
        }
    }

    public void addFirst(String data) {
        Node node = new Node(data);

        if(head == null) {
            head = node;
            return;
        }

        Node currentNode = head;

        head = node;
        head.next = currentNode;
    }

    public void addLast(String data) {
        Node node = new Node(data);

        if(head == null) {
            head = node;
            return;
        }

        if(head.next == null) {
            head.next = node;
            return;
        }

        Node currentNode = head;
        while (currentNode.next != null) {
            currentNode = currentNode.next;
        }

        currentNode.next = node;
    }

    public void deleteFirst() {
        if(head == null) {
            return;
        }

        /*if(head.next == null) {
            head = null;
            return;
        }

        Node currentNode = head;
        head = currentNode.next;*/
        size--;
        head = head.next;
    }

    public void deleteLast() {
        if(head == null) {
            return;
        }

        size--;
        if(head.next == null) {
            head = null;
            return;
        }

        Node secondLastNode = head;
        Node lastNode = secondLastNode.next;
        while (lastNode.next != null) {
            lastNode = lastNode.next;
            secondLastNode = secondLastNode.next;
        }

        secondLastNode.next = null;
    }

    public void reverseIterator() {
        if(head == null || head.next == null) {
            return;
        }

        Node prevNode = head;
        Node currentNode = head.next;
        while (currentNode != null) {
            Node nextNode = currentNode.next;
            currentNode.next = prevNode;

            prevNode = currentNode;
            currentNode = nextNode;
        }

        head.next = null;
        head = prevNode;
    }

    public Node reverseRecursion(Node head) {
        if(head == null || head.next == null) {
            return head;
        }

        Node newHead = reverseRecursion(head.next);
        head.next.next = head;
        head.next = null;

        return newHead;
    }

    public void printList() {
        Node currentNode = head;

        while(currentNode != null) {
            System.out.print(currentNode.data + " -> ");
            currentNode = currentNode.next;
        }

        System.out.print("null");
        System.out.println("");
    }

    public int getSize() {
        return size;
    }

    public static void main(String[] args) {
        LL linkedList = new LL();

        /*linkedList.addFirst("a");
        linkedList.addFirst("is");
        linkedList.addFirst("This");

        linkedList.printList();

        linkedList.addLast("Linked List");
        linkedList.printList();

        linkedList.deleteFirst();
        linkedList.printList();

        linkedList.deleteLast();
        linkedList.printList();
        System.out.println(linkedList.getSize());*/

        linkedList.addLast("1");
        linkedList.addLast("2");
        linkedList.addLast("3");
        linkedList.addLast("4");

        linkedList.printList();

//        linkedList.reverseIterator();
        linkedList.head = linkedList.reverseRecursion(linkedList.head);
        linkedList.printList();
    }
}
