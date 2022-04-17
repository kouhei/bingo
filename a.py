import random

l = [i+1 for i in [i for i in range(100)] ]
while(len(l) > 0):
    print(l)
    choiced_num = random.choice(l)
    print(choiced_num)
    l.remove(choiced_num)
    a = input("press enter key.")

while(True):
    print(random.randint(1, 100))