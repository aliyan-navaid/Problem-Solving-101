def twosum(numbers, target):
    for index, number in enumerate(numbers):
        complement = target-number

        #Search the list ahead of Selected to prevent duplicates
        left = index+1
        right = len(numbers)-1
        while right>=left:
            mid = (right+left)//2
            if numbers[mid] == complement:
                print(f"{index} {mid}")
                break
            elif numbers[mid] > complement:
                right = mid-1
            else:
                left = mid+1

twosum([2, 4, 6, 8, 10], 10)