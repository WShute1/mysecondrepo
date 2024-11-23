"""
fruits = ["apple", "banana", "cherry"]
print("First fruits:", fruits[0]) #The square brackets, [], means the printed value is only that specific numbered term from the above list, the list starting at 0.

fruits.append("orange") #Append - This adds the term to the list.
print("Updated list:", fruits)

fruits.remove("banana")  #Remove - This removes the fruit from the list
print("List after removing banana", fruits)
"""
wildlife = ["Cheetah","Dog","Stag","Swordfish","Rhino","Buzzard"]
wildlife.append("Jaguar")#Add only one animal to the list.
wildlife.extend(["Hare","Grasshopper"]) #Add the following two animals to the end of the list.
wildlife[2]="Penguin" #This replaces the third word in the list with Penguin. Note that in the square brackets is 2. The first value listed is [0].
wildlife.pop(8) #Removes the NINTH term in the list.
wildlife.sort() #Sorts the list in alphabetical order.
print("Alphabetised Animal List",wildlife) #Prints the list.
print ("Count of 'Hare':",wildlife.count("Hare")) #Prints a count of the number of times 'Hare' appears in the list.
