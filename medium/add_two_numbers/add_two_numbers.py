from typing import Any, List, Optional


def add_simple(a, b) -> int:
    return a + b


# res = add_simple(10, 20)
# print(res)


def reverse_string(s: str) -> str:
    return s[::-1]


# st = reverse_string("hello")
# print(st)


def str_to_digit(s: str) -> list[int]:
    new_list = []
    for ch in s:
        new_list.append(int(ch))
    return new_list


# std = str_to_digit("456")
# print(std)


def add_digits_with_carry(d1, d2, carry) -> tuple[int]:
    res = d1 + d2 + carry
    new_digit = res // 10
    carry = res % 10
    return (carry, new_digit)


# adwc = add_digits_with_carry(8, 4, 1)
# print(adwc)


def reverse_combine(num_list: list[int]) -> int:
    num = 0
    num_list.reverse()
    for x in num_list:
        num = num * 10 + x
    return num


# rc = reverse_combine([3, 2, 1])
# print(rc)


def zip_add(list1: list[int], list2: list[int]) -> list[int]:
    res = []
    for x, y in zip(list1, list2):
        res.append(x + y)
    return res


# print(zip_add([1, 2, 3], [4, 5, 6]))


class ListNode:
    def __init__(self, val=0, next=None) -> None:
        self.val = val
        self.next = next


# node3 = ListNode(30)
# node2 = ListNode(20, node3)
# node1 = ListNode(10, node2)


def read_linkedlist(head: ListNode) -> None:
    curr = head
    while curr:
        print(curr.val, end=' -> ')
        curr = curr.next
    print("None")


# read_linkedlist(node1)

def covertlinkedlisttolist(ll: ListNode) -> list[int]:
    curr = ll
    num = []
    while curr:
        num.append(curr.val)
        curr = curr.next
    return num


def count_node(head: ListNode) -> int:
    count = 0
    curr = head
    while curr:
        count += 1
        curr = curr.next
    return count


# res = count_node(node1)
# print(res)


def build_list(py_list: list[int]) -> ListNode:
    head = ListNode(0)
    curr = head
    for n in py_list:
        curr.next = ListNode(n)
        curr = curr.next
    return head.next


# num = [2, 4, 3]

# head = build_list(num)
# read_linkedlist(head)


l1 = [9, 9, 9]
l2 = [1]

new_l = build_list(l1)
new_2 = build_list(l2)

read_linkedlist(new_l)
read_linkedlist(new_2)

res = covertlinkedlisttolist(new_l)
res.reverse()
print(res)


def addTwoNumbers(l1: ListNode, l2: ListNode) -> ListNode:
    dummy = ListNode(0)
    curr = dummy
    carry = 0

    while l1 is not None or l2 is not None or carry > 0:

        val1: int = l1.val if l1 else 0
        val2: int = l2.val if l2 else 0

        total: int = val1 + val2 + carry

        carry: int = total // 10
        digit: int = total % 10

        curr.next = ListNode(digit)
        curr = curr.next

        if l1:
            l1 = l1.next
        if l2:
            l2 = l2.next

    return dummy.next


res = addTwoNumbers(new_l, new_2)
read_linkedlist(res)
