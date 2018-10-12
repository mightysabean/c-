import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user="user1",
  passwd="pass1",
  database="mydatabase"
)

mycursor = mydb.cursor()

mycursor.execute("CREATE TABLE customers (name VARCHAR(255), address VARCHAR(255))")