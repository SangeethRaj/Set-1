n = int(input("Enter Number: "))
Rev = 0
while(num > 0):
    Rem = n %10
    Rev = (Rev *10) + Rem
    n = n //10
