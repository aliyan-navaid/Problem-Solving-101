Topic - Two Pointers, Hashmap, Binary Search

Consider a list [2, 4, 6, 8, 10] with target 10

## Two Pointer
**Time Complexity** O(n) <br>
**Space Complexity** O(1)

### Algorithm
<pre>
Start with both both ends of the list <br>
While left and right not add up to target:
    if sum(left, right) > target:
        Shift right inwards
    else:
        Shift left inwards
</pre>

<pre>
-----First Pass-----
[2, 4, 6, 8, 10]    Sum=12 : Sum > target
 |           |
 L           R

[2, 4, 6, 8, 10]    Sum=10 : Sum = target
 |        |
 L        R
</pre>

> When List is sorted, it's a good idea to use two pointers

## Hashmap
**Time Complexity** O(n) <br>
**Space Complexity** O(n)

For each element search the map if complement exists

### Algorithm
<pre>
For each number
    Check if complement exists 
    If Yes: Return True
    Else: Add number to Hashmap
</pre>

<pre>
-----First Pass-----
[2, 4, 6, 8, 10]    Complement=8
 |           
 f      

Map = {}


[2, 4, 6, 8, 10]    Complement=6
    |        
    f        

Map = {2}

[2, 4, 6, 8, 10]    Complement=4
       |        
       f        

Map = {2, 4}
          |
 Complement Found
</pre>

## Binary Search
**Time Complexity** O(nlog(n)) <br>
**Space Complexity** O(1)

For each element search the list via Binary Search if complement exists

### Algorithm
<pre>
For each number
    Binary Search for Complement 
    If Yes: Return True
    Else: Continue
</pre>
