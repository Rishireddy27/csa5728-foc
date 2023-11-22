#include<stdio.h>
def calculate_ticket_charge(age):
    if age >= 55:
        return "$10.00"
    elif 21 <= age <= 54:
        return "$15.00"
    elif 13 <= age <= 20:
        return "$10.00"
    elif 3 <= age <= 12:
        return "$5.00"
    else:
        return "Free"


person_age = int(input("Enter the age of the person: "))
ticket_charge = calculate_ticket_charge(person_age)
print(f"The ticket charge is: {ticket_charge}")
