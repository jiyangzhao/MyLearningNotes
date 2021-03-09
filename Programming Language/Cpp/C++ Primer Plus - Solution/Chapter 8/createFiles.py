import os 
import re
import sys

ch = input("Chapter: ")
probs = input("No. of problems: ")

path =  os.getcwd()
print(path)

for i in range(int(probs)):
	newName = "Problems_" + str(ch) + "_" + str(i+1) + ".cpp";
	file = open(path + "\\" + newName, "w")
	file.close()

	
# filenames = os.listdir(path)
