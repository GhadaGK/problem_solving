def sockMerchant(n, ar):
    ar.sort()
    i = 0
    counter = 0
    while i < n - 1:
        if ar[i] == ar[i+1]:
            i = i+2
            counter+=1
        else:
            i+=1
    return counter
