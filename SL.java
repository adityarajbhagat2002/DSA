

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

    public void insertAtStart(int data){
        Node node= new Node();
        node.data=data;
        node.next=null;
        node.next=head;
        head=node;
        }
    public void insertAt(int index,int data){
        Node node = new Node();
        node.data=data;
        node.next=null;
        if(index==0){
            insertAtStart(data);
        }else{
            
            Node temp =head;
            for(int i=0;i<index-1;i++){
                temp=temp.next;
            }
            node.next=temp.next;
            temp.next=node;
        }



    } 
    public void delete(int index){
        if(index==0){
            head=head.next;

        }else{
            Node temp =head;
            Node del =null;
            for(int i=0;i<index-1;i++){
                temp=temp.next;
                
            }
            del=temp.next;
            temp.next=del.next;
            del=null;
           
        }
       

    }
}
