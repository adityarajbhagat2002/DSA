

import java.util.*;

public class Runner {
    public static void main(String[] args) {

        SL list = new SL();
        list.Insert(5);
        list.Insert(45);
        list.Insert(76);
        list.Insert(6);
        list.Insert(96);
        list.insertAtStart(45);
        list.insertAt(3, 46);
        list.insertAt(0,50);
        list.delete(3);
        

        list.show();

    }

}


