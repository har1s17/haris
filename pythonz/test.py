'''gen=['pop','rock','jazz']
for i in range(len(gen)):
    print("i like ",gen[i])

for num in range(2,10,2):
    print ("number",num)


current_year = int(input("Enter the Starting year: "))

final_year = int(input("Enter the end year: "))

print("Leap years from", current_year, "to", final_year, "are:")
for year in range(current_year, final_year + 1):
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        print(year)
list1=[2,4,-6,-8,9,7]
list2=[i for i in list1 if(i>0)];
print (f"positive list ={list2}")
w =input("enter any charecter")
listOrdinals=[ord(i)for i in w]
print(listOrdinals)
'''
