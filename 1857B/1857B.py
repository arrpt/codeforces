for i in range(int(input())):
    n = input()
    a = [0]+ list(map(int, list(n)))
    k = len(a)
    i = k - 1
    while i >= 0:
        if a[i] > 4:
            a[i-1]+=1
            k = i
        i -= 1
        
    if a[0]!=0:
        print(str(a[0]) + n[1:k] + '0'*(len(n)-k))
    else:
        print(n[1:k]+'0'*(len(n)-k))