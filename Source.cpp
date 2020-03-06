#include<iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* i = l1; ListNode* j = l2;
		ListNode* l3;
		if (l1->val == 0) {
			l3 = l2;
			return l3;
		}
		if (l2->val==0) {
			l3 = l1;
			return l3;
		}

		ListNode node(0);
		l3 = &node;
		ListNode* k = l3;
		int temp = 0;
		while (true) {
			int v = i->val + j->val;
			if (v < 10) {
				k->val = v + temp;
				ListNode tempNode(0);
				k->next = &tempNode;
				k = k->next;
				temp = 0;
			}
			else {
				k->val =( v + temp)%10;
				ListNode tempNode(0);
				k->next = &tempNode;
				k = k->next;
				temp = 1;
			}
			i = i->next; j = j->next;
			if (i->next==NULL && j->next==NULL) {
				int v = i->val + j->val;
				if (v < 10) {
					k->val = v + temp;
					temp = 0;
					return l3;
				}
				else {
					k->val = (v + temp) % 10;
					ListNode tempNode(1);
					k->next = &tempNode;
					k = k->next;
					temp = 1;
					return l3;
				}
			}
			else if (i->next==NULL) {
				int v = i->val + j->val;
				if (v < 10) {
					k->val = v + temp;
					ListNode tempNode(1);
					k->next = &tempNode;
					k = k->next;
					temp = 0;
				}
				else {
					k->val = (v + temp) % 10;
					ListNode tempNode(1);
					k->next = &tempNode;
					k = k->next;
					temp = 1;
				}
				j = j->next;
				break;
			}
			else if (j->next=NULL) {
				int v = i->val + j->val;
				if (v < 10) {
					k->val = v + temp;
					ListNode tempNode(1);
					k->next = &tempNode;
					k = k->next;
					temp = 0;
				}
				else {
					k->val = (v + temp) % 10;
					ListNode tempNode(1);
					k->next = &tempNode;
					k = k->next;
					temp = 1;
				}
				i = i->next;
				break;
			}
		}
		if(i->next==NULL){}
		if(j->next==NULL){}
	}
int main() {
	cin.get();
	return 0;
}