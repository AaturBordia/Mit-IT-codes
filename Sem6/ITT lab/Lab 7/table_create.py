#!/usr/bin/python
import sqlite3
conn = sqlite3.connect('student_database.db')
print ("Opened database successfully")
conn.execute('''CREATE TABLE STUDENT
 (STUDENT_ID INT PRIMARY KEY ,
 REG INT ,
 BRANCH TEXT ,
 SEMESTER INT,
 SECTION CHAR(5),
 CGPA REAL,
 email char(50));''')
print ("Table created successfully")
conn.close()
