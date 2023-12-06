square_area = lambda side: side ** 2
rectangle_area = lambda length, width: length * width
triangle_area = lambda base, height: 0.5 * base * height
side_length = float(input("Enter the side length of the square: "))
length_rect = float(input("Enter the length of the rectangle: "))
width_rect = float(input("Enter the width of the rectangle: "))
base_triangle = float(input("Enter the base of the triangle: "))
height_triangle = float(input("Enter the height of the triangle: "))
print("Area of the square:", square_area(side_length))
print("Area of the rectangle:", rectangle_area(length_rect, width_rect))
print("Area of the triangle:", triangle_area(base_triangle, height_triangle))
