class Solution {
public:
    int removeDuplicates(vector<int>& numbers) {
        int insert_ptr   {0};
        int traverse_ptr {1};
        int curr_value   {numbers[0]};
        
        while (traverse_ptr < (int)numbers.size()) {
		    /* when you encounter a new number: 
			   1) insert the old value in it's correct place in array
			   2) update the curr_value with the new value
			   3) move the insert_ptr to next index
			*/
            if (curr_value != numbers[traverse_ptr]) {
                numbers[insert_ptr] = curr_value;
                curr_value = numbers[traverse_ptr];
				++insert_ptr;
            }
            ++traverse_ptr;
        }
		
        // inserting the last unique element into the array
        numbers[insert_ptr] = curr_value;
        
		// since insert_ptr is an index, the no. of elements till that index would be insert_ptr + 1
        return insert_ptr + 1;
    }
};
