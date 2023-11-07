def twosum(nums, target):
    
    #Iterate over each number
    for first in range(len(nums)-1):
        #Iterate over items from the number next to first
        for second in range(first+1, len(nums)):
            if nums[first] + nums[second] == target:
                print(f"Number {first}, {second}")