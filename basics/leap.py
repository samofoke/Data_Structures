def is_leap(year):
    
    if (year % 4 == 0 and year % 400 == 0):
        return True
    elif (year % 4 == 0 and year % 100 != 0):
        return True
    elif (year % 4 != 0 and year % 100 == 0):
        return False
    # Write your logic here
    else:
        return False

year = int(input())
print(is_leap(year))
