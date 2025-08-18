
n = int(input("give me a number: "))
for i in range(2,n):
    if( n % i ==0):
        print(f"{n} n'est pas composee") 
        break
else:
        print(f"{n} est premier")



