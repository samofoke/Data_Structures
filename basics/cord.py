def solution(s):
    for i in range(len(s)):
        if (s[i] == ('^' or 'v')):
            print(2)
        elif (s[i] == '>' or s[i] == 'v'):
            print(3)
        else:
            if (s[i] == '<'):
                print(0)


solution("^^>>>vvvvv<<<<")

#this solution is flawed it really needs a new deeper understanding
#surely I will have a look at it later, as for now I will keep on looking
# at more problems to improve on my skills.
