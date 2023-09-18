## Why Lists?

### In a general list:
- New values are added in a position determined by the user.
- Element is removed from a position determined by the user.

### Important Notice:
- If we keep adding and removing from the 1st position (the head of the list) the general list will behave as a stack.
- If we keep adding from one end and removing from another end the list will behave as a queue.

### Application:
- In queues, sometimes we need a priority for some elements, we may need to put an emergency call prior to others. 

### Definition: 
- A general list of elements of type T is a finite sequence of elements of T together with the following operations:-
- Create the list, leaving it empty
- Determine whether the list is full/empty or not
- Find the size of the list
- Insert a new entry in the position 0 <= p <= size
- Delete an entry from the position 0 <= p <= size - 1
- Traverse the list, visiting each entry
- Clear the list to make it empty