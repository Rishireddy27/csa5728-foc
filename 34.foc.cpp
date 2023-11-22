#include<stdio.h>
int main(){
def calculate_room_cost(num_people, is_company_business, customer_age):
    base_price = 0
    if num_people == 2:
        base_price = 85
    elif num_people == 3:
        base_price = 90
    elif num_people == 4:
        base_price = 95
    else:
        base_price = 95 + (num_people - 4) * 6
    if is_company_business:
        base_price *= 0.8  # 20% discount for company business

    if customer_age > 60:
        base_price *= 0.85  # 15% discount for customers over 60

    return base_priice;
num_people = int(input("Enter the number of people: "))
is_company_business = input("Is the customer staying on company business? (yes/no): ").lower() == 'yes'
customer_age = int(input("Enter the customer's age: "))

room_cost = calculate_room_cost(num_people, is_company_business, customer_age)
print(f"The cost of the room is: ${room_cost:.2f}");
}
