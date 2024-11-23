#In Python, you comment with # instead of //
#In Python, you do not need to reference a standard library such as stdio.h like you do in C

def main(): # A def main is specified but not an int main()
    print("Hello World!") #The print function is "print", not "printf"
    print("Goodbye World!")

if __name__=="__main__": #If the defined main contains the phrase main, shall be considered the main definiton.
    main()

#To execute $python helloworld.py   -There is no need to compile.