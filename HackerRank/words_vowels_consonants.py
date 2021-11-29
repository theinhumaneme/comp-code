# for _ in range(int(input())):
#     # text = input().rstrip().lstrip().split(' ')
#     text = input().rstrip().lstrip()
#     vowels = consonants =0
#     words = len(text.split(' '))
#     for vowel in ['a','e','i','o','u']:
#         vowels = vowels+text.lower().count(vowel)
#     consonants = len(text)-vowels-text.count(' ')
#     print(f"{words} {vowels} {consonants}")



# for _ in range(int(input())):
#     text = input().rstrip().lstrip().split(" ")
#     uneeded=['' for i in range(text.count(""))]
#     # print(uneeded)
#     # print(text)
#     final=list(set(text)-set(uneeded))
#     # print(final)
#     vowels=consonants=0
#     words = len(final)
#     for word in final:
#         for vowel in ['a','e','i','o','u']:
#             vowels = vowels+word.lower().count(vowel)
#     consonants = len(''.join(final))-vowels
#     print(f"{words} {vowels} {consonants}")
for _ in range(int(input())):
    text = input().rstrip().lstrip().split(" ")
    while True:
        try:
            text.remove("")
            # print(text)
        except:
            break
    final=text
    vowels=consonants=0
    words = len(final)
    for word in final:
        for vowel in ['a','e','i','o','u']:
            vowels = vowels+word.lower().count(vowel)
    consonants = len(''.join(final))-vowels
    
    print(text)
    print(f"{words} {vowels} {consonants}")

