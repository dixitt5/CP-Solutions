public class Main{
     public ListNode mergeKLists(ListNode[] lists) {
        PriorityQueue<ListNode> pq=new PriorityQueue<>(new Comparator<ListNode>(){
            public int compare(ListNode o1, ListNode o2)
            {
                return o1.val-o2.val; //for min heap
            }
        });
        for(int i=0;i<lists.length;i++)
        {
            if(lists[i]!=null)
            pq.add(lists[i]); //sabke first ptr daaldie, however they are nodes
        }
        ListNode Dummy=new ListNode();
        ListNode temp=Dummy; //saving dummy node's address
        while(pq.size()!=0)
        {
            ListNode rv=pq.poll();
            Dummy.next=rv;
            Dummy=Dummy.next; //moving the dummy pointer
            if(rv.next!=null)
            {
                pq.add(rv.next); //moving the pointer of rv's linkedlist
            }
        }
        
        return temp.next;
    }
}