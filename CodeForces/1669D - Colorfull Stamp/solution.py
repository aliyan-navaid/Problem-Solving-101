cases = input()
for case in cases:
    length = int(input())
    picture = input()

    possible = 1
    if picture.count("W")==length:
        possible = 0
    elif length==1:
        possible = 0
    elif length==2 and picture.count("W")==1:
        possible = 0
    else:
        for character in range(1,length-1): #check 2nd to 2nd last
            if picture[character]=='B' or picture[character]=='R':
                if picture[character-1] == 'W' and picture[character+1] == 'W':
                    possible = 0
    if possible:
        print("YES\n")
    else: 
        print("NO\n")


