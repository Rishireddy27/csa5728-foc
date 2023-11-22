Initialize count_A to 0
Initialize count_B to 0
Initialize count_C to 0
Initialize count_D to 0
Initialize count_F to 0

Repeat for each student from 1 to 200:
    Input student_number
    Input number_grade

    Output "Student Number:", student_number
    Output "Number Grade:", number_grade

    Determine letter_grade based on number_grade:
        If number_grade >= 90:
            letter_grade = "A"
            Increment count_A
        Else If number_grade >= 78:
            letter_grade = "B"
            Increment count_B
        Else If number_grade >= 65:
            letter_grade = "C"
            Increment count_C
        Else If number_grade >= 50:
            letter_grade = "D"
            Increment count_D
        Else:
            letter_grade = "F"
            Increment count_F

    Output "Letter Grade:", letter_grade
    Output newline  

Output "Total number of As:", count_A
Output "Total number of Bs:", count_B
Output "Total number of Cs:", count_C
Output "Total number of Ds:", count_D
Output "Total number of Fs:", count_F
