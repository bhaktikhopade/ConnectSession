# Write a Program of Word Frequency

def WordFrequency():
    s = input('Enter a sentence: ')
    d = {}
    for i in s.split():
        if i not in d:
            d[i] = 1
        else:
            d[i]+=1
    for word,count in d.items():
        print(f"'{word}' occurs {count} times in the given sentence.")

WordFrequency()
