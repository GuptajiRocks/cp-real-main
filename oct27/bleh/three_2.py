arr = [3,3,3,3,3,1,3]
n = len(arr)
dd = dict()

for i in range(n):
    now_key = arr[i]

    if now_key not in dd:
        dd[now_key] = [i]
    else:
        dd[now_key].append(i)

final = []

for i, k in dd.items():
    if len(k) <= i:
        final.append(k)
    else:
        for m in range(0, len(k), i):
            final.append(k[m:m+i])
    

print(dd)
fin = sorted(final, key=len)
print(fin)



