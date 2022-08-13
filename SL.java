

public class SL{
    public Node head;

    public void Insert(int data) {
        Node node =new Node();
        node.data=data;

        if(head ==null){
            head= node;

        }else{
            Node temp = head;
            while(temp.next !=null){
                temp=temp.next;

            }
            temp.next=node;
 

        }

        
    }

    public void show(){
        Node temp = head;
    while( temp.next != null){
        System.out.print(temp.data + " -> ");
        temp =temp.next;

    }
    System.out.println(temp.data);



    }
    
}
