#!/usr/bin/python
import sqlite3
conn = sqlite3.connect('student_database.db')
print ("Opened database successfully")
a=input("Enter Student ID")
b=input("Enter CGPA")
conn.execute("UPDATE STUDENT SET CGPA = " + b + " WHERE STUDENT_ID = "+a )
cursor = conn.execute("SELECT * FROM STUDENT")
for i in cursor:
    print(i)
print ("Operation done successfully")
conn.close()
