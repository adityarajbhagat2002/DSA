package LinkedList;

public class SL {
    private class Node{
        private Node head;
        private Node tail;

        private int size;

        private int value;
        private Node next;

        public void  SL(){
            this.size=0;
            
        }

        public void insertatfirst(int value){ // inserting at first
            Node node =new Node(value);
            node.next= head;
            head  = node;
            
            if(tail == null){
                tail =head;

            }
            size = size +1;


         }

        public Node(int value){
            this.value=value;

        }
        public Node(int value ,Node next){
            this.value=value;
            this.next=next;

        }


    

}
}
