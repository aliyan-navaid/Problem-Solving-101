def twosum(numbers, target):
    map = {}
    for index, number in enumerate(numbers):
        complement = target - number
        if complement in map:
            print(f"{map[complement]} {index}")
        else:
            map[number] = index

twosum([2,4,6,8,10], 10)