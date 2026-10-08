class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        string s1, s2;

        // Convert l1 to string
        ListNode* temp1 = l1;
        while (temp1 != NULL) {
            s1 += to_string(temp1->val);
            temp1 = temp1->next;
        }

        // Convert l2 to string
        ListNode* temp2 = l2;
        while (temp2 != NULL) {
            s2 += to_string(temp2->val);
            temp2 = temp2->next;
        }

        // Because linked lists are in reverse order,
        // reverse the strings to get normal numbers
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        // Add the two strings
        string sum = "";
        int i = s1.size() - 1;
        int j = s2.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {

            int total = carry;

            if (i >= 0) {
                total += s1[i] - '0';
                i--;
            }

            if (j >= 0) {
                total += s2[j] - '0';
                j--;
            }

            sum += char((total % 10) + '0');
            carry = total / 10;
        }

        // sum is already in reverse order
        // because we added from right to left

        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        for (char c : sum) {
            curr->next = new ListNode(c - '0');
            curr = curr->next;
        }

        return dummy->next;
    }
};