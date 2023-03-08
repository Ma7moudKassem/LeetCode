ListNode list1 = new(1);
ListNode elem2 = new(2);
ListNode elem4 = new(4);

elem2.next = elem4;
list1.next = elem2;

ListNode list2 = new(1);
ListNode elem3 = new(3);
ListNode elem41 = new(4);

elem3.next = elem41;
list2.next = elem3;

MergeTwoLists(list1, list2);

ListNode MergeTwoLists(ListNode list1, ListNode list2)
{
    if (list1 is null) return list2; if (list2 is null) return list1;

    if (list1.val > list2.val)
    {
        list2.next = MergeTwoLists(list1, list2.next);
        return list2;
    }
    else
    {
        list1.next = MergeTwoLists(list1.next, list2);
        return list1;
    }
}


class ListNode
{
    public int val;
    public ListNode next;
    public ListNode(int val = 0, ListNode next = null)
    {
        this.val = val;
        this.next = next;
    }
}