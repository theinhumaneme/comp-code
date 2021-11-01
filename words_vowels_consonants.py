for _ in range(int(input())):
    # text = input().rstrip().lstrip().split(' ')
    text = input().rstrip().lstrip()
    vowels = consonants =0
    words = len(text.split(' '))
    for vowel in ['a','e','i','o','u']:
        vowels = vowels+text.lower().count(vowel)
    consonants = len(text)-vowels-text.count(' ')
    print(f"{words} {vowels} {consonants}")



