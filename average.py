count = 1 # first count
numberlist = []
while True:
    print("Enter number "+str(count)+" or done:") # enter numbers
    inputted = input()
    if inputted.lower() == "done": # if done then break
        break
    try:
        number = int(inputted)
        numberlist.append(number) # append to list
        count +=1 # add count to number in print
    except ValueError:
        print("Enter a valid number or done.") # error handling
print("Your average is: "+str(round((sum(numberlist)/len(numberlist)), 2))) # print final average
