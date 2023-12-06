print("enter 5 marks")
m1=int(input())
m2=int(input());
m3=int(input());
m4=int(input());
m5=int(input());
sum=m1+m2+m3+m4+m5;
avarage=sum/5;
if(m1<40 or m2<40 or m3<40 or m4<40 or m5<40):
    print("Grade:E")
elif(avarage>=91 and avarage<=100):
    print("grade: A+");
elif(avarage>=80 and avarage<=90):
    print("grade: A");
elif(avarage>=60 and avarage<=80):
    print("grade: B");
elif(avarage>=50 and avarage<=60):
    print("grade: C+");
elif(avarage>=40 and avarage<=50):
    print("grade: C");
else:
    print("grade F");
    
    
