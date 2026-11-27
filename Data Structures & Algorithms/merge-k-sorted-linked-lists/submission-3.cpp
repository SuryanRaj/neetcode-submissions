class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) {
            return NULL;
        }
        ListNode *head = NULL;
        ListNode *temp = head;
        for (int i = 0; i < lists.size(); i++) {
            if (lists[i] != NULL) {
                head = lists[i];
                break;
            }
        }
        for (int i = 0; i < lists.size() - 1; i++) {
            if (lists[i] != NULL) {
                temp = lists[i];
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                int j = i + 1;
                while (j < lists.size() && lists[j] == NULL) {
                    j++;
                }
                if (j < lists.size()) {
                    temp->next = lists[j];
                }
            }
        }

        // --- ONLY CHANGE: O(N log N) sort instead of O(N^2) bubble sort ---
        vector<int> vals;
        for (ListNode *curr = head; curr != NULL; curr = curr->next) {
            vals.push_back(curr->val);
        }
        sort(vals.begin(), vals.end());

        int idx = 0;
        for (ListNode *curr = head; curr != NULL; curr = curr->next) {
            curr->val = vals[idx++];
        }
        // ------------------------------------------------------------------

        return head;
    }
};