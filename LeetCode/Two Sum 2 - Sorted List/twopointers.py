def twosum(numbers, target):
    left = 0
    right = len(numbers)-1
    while numbers[left]+numbers[right] != target: #right>left would run even when target found
        if numbers[left]+numbers[right] > target:
            right-=1
        else:
            left+=1
    