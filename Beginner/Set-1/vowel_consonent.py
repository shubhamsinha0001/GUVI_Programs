n=input().lower()
if(n.isalpha()):
    if(n=='a' or n=='e' or n=='i' or n=='u'):
        print("Vowel")
    else:
        print("Consonant")
else:
    print("invalid")