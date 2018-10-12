import mysql.connector

mydb=mysql.connector.connect(
host="localhost",
user="myusername",
passwd="1234567"
)
print(mydb)