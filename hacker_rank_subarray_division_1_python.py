def birthday(s, d, m):
    count = 0 
    i= 0
    for i in range(len(s)):
        j = i
        sum = 0
        while j < m+i:
            if j == len(s):
                break
            sum= sum + s[j]
            j=j+1
        if sum == d:
            count = count + 1
    return count 
