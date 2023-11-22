Initialize total_points to 0
Initialize total_units to 0

Repeat for each course:
    Input course_name
    Input letter_grade
    Input units

    Convert letter_grade to numeric equivalent:
        Case "A": grade_points = 4.0
        Case "B": grade_points = 3.0
        Case "C": grade_points = 2.0
        Case "D": grade_points = 1.0
        Case "F": grade_points = 0.0

    Calculate course_points = grade_points * units
    Add course_points to total_points
    Add units to total_units

Calculate GPA = total_points / total_units

Output "The GPA for the semester is:", GPA
