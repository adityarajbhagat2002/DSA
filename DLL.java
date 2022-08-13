import javax.swing.plaf.synth.SynthSeparatorUI;

public class DLL {

    Node head;

    public void insertFirst(int value){
        Node node =new Node(value);
         node.next= head;
         node.prev=null;
         if(head !=null){
            
             head.prev=node;
         }
         head=node;


    }

    public void display(){
        Node node= head;
        while(node != null){
            System.out.print(node.value + " ->");
            node= node.next;
        }
        
        System.out.println();
    }

    
    private class Node{
        int value;
        Node prev;
        Node next;
        
        public Node(int value){
            this.value=value;

        }
        public Node(int value,Node prev,Node next){
            this.value=value;
            this.next=next;
            this.prev=prev;

        }
    }
    
}
