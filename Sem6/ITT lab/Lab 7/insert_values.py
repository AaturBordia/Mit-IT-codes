#!/usr/bin/python
import sqlite3
conn = sqlite3.connect('student_database.db')
print ("Opened database successfully")
conn.execute("INSERT INTO STUDENT VALUES (1, 210911340, 'IT', 6, 'B', 7.25, 'aatur@gmail.com' )");
conn.execute("INSERT INTO STUDENT VALUES (2, 210911162, 'IT', 6, 'B', 9.12, 'artham@gmail.com' )");
conn.execute("INSERT INTO STUDENT VALUES (3, 210968192, 'DSC', 6, 'A', 8.95, 'aakash@gmail.com' )");
conn.execute("INSERT INTO STUDENT VALUES (4, 210906296, 'EEE', 6, 'B', 8.08, 'sundar@gmail.com' )");
conn.execute("INSERT INTO STUDENT VALUES (5, 210907494, 'ECE', 5, 'A', 8.08, 'naveen@gmail.com' )");
conn.commit()
print ("Records created successfully")
conn.close()
