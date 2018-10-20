def is_leap(year):
    leap = False
    if (year % 4) == 0:
        if (year % 100) == 0:
            if (year % 400) == 0:
                leap="yes"
            else:
                leap="no"
        else:
            leap="yes"
    else:
        leap="no"
    
    return leap
year=int(input())
print(is_leap(year))