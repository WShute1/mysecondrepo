amphibians =("frog","salamander","axolotl") #Creation of the original list
print("Second amphibian:",amphibians[1]) #prints only the second term in the list.

#Because the terms in a tuple are immutable, they cannot be altered. 
# Therefore to replace a term in a tuple, it needs to be converted into a list,
#  the term replaced, and then converted back into a tuple.
lst=list(amphibians)
lst[1]="turtle"
amphibians=tuple(lst)
print("Corrected list of amphibians:",amphibians)