### Fizz Buzz ###
number = 0
for i in range(101):
    if number % 3 == 0 and number % 5 == 0:
        print("FizzBuzz")
    elif number % 3 == 0:
        print("Fizz")
    elif number % 5 == 0:
        print("Buzz")
  
    else:
        print(number)
    number += 1    
