import Levenshtein

s = input()
t = input()

print((Levenshtein.distance(s, t)) / 3)