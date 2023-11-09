Topic - Two Pointers, Hashmap

Consider a list [1, 2, 3, 5, 4, 5] with target 5:


## Bruteforce - Two Pointer
***Time Complexity:*** O(n) <br>
***Space Complexity:*** O(1) 

You can check all possible combination of two numbers via nested loops

### Algorithm
For each number <br>
Check all numbers from (Selected Number + 1) to end of list
If they add up to target, return True.

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
***Time Complexity:*** O(n) <br>
***Space Complexity:*** O(n) 

Instead to searching all possible complements (Target-Number) via two pointers, you can find in in a map where the lookup is O(1)

### Algorithm
For each number <br>
Check if complement exists <br>
If Yes: Return True <br>
Else: Add number to Hashmap

<pre>
-----First Pass----- Complement:4
[1, 2, 3, 4, 5]     
 |  
 f  

Map = {} 

-----Second Pass----- Complement: 3
[1, 2, 3, 4, 5]     
    |  
    f  

Map = {1} 

-----Third Pass-----Complement: 2
[1, 2, 3, 4, 5]     
       |  
       f  

Map = {1, 2} 
          | 
   Complement Found

</pre>

> We add number to map later in order to prevent the complement from being the same element



