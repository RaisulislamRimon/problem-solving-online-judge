# problem url: https://judge.beecrowd.com/en/problems/view/1048
# beecrowd | 1048
# Salary Increase
# solution code: https://www.programiz.com/online-compiler/7SqVUZYOW68Nn

# taking input from user
taking_input = float(input())

# calculating function
def salary_calculation(rate, taking_input):
    money_earned = (rate * taking_input) / 100
    new_salary = taking_input + money_earned
    return new_salary, money_earned
    
# result show function
def result_show(rate):
    new_salary, money_earned = salary_calculation(rate, taking_input)
    print(f"Novo salario: {new_salary:.2f}")
    print(f"Reajuste ganho: {money_earned:.2f}")
    print(f"Em percentual: {rate} %")

if taking_input >= 0 and taking_input <= 400:
    rate = 15 # Readjustment Rate in % (percenetage)
    result_show(rate)
elif taking_input > 400 and taking_input <= 800:
    rate = 12
    result_show(rate)
elif taking_input > 800 and taking_input <= 1200:
    rate = 10
    result_show(rate)
elif taking_input > 1200 and taking_input <= 2000:
    rate = 7
    result_show(rate)
elif taking_input > 2000:
    rate = 4
    result_show(rate)

