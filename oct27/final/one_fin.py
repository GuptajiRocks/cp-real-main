def sort_by_frequency(word):
    freq = {}
    for ch in word:
        freq[ch] = freq.get(ch, 0) + 1
    
    sorted_chars = sorted(word, key=lambda ch: (freq[ch], -ord(ch)))
    
    return ''.join(sorted_chars)

N = int(input().strip())
words = input().strip().split()

result = [sort_by_frequency(w) for w in words]

print(' '.join(result))
