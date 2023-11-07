Topic - Two Pointers, Hashmap

## Bruteforce - Nested Loops
***Time Complexity:*** O(n) <br>
***Space Complexity:*** O(1) 

Consider a list with target 5:
[1, 2, 3, 5, 4, 5]

You can check all possible combination of two numbers via nested loops

<pre>
-----First Pass-----
[1, 2, 3, 4, 5] 
 |  |
 f  s
 
[1, 2, 3, 4] 
 |     |
 f     s

 [1, 2, 3, 4] 
 |         |
 f         s
 
-----Second Pass-----
 [1, 2, 3, 4]    Sum Found
     |  |
     f  s
</pre>

> Notice the second loop variable starts from (first+1) to avoid checking same pair again. <br>
For Example: (1, 2) then (2, 1)



## Hashmap


