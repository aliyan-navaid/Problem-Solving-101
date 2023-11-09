#Two Pass - Two Loops
def twosum(nums, target):
    map = {}
    for index, number in enumerate(nums):
        map[number] = index

    for index, number in enumerate(nums):
        complement = target - number
        if complement in map and map[complement] != index:
            return [index, map[complement]]

#One Pass - Same thing in single loop      
def twosum(nums, target):
    map = {}
    for index, number in enumerate(nums):
        complement = target - number
        if complement in map:
            return [index, map[complement]]
        map[number] = index