txt=input("\nEnter Text: ")
txt=txt.lower()     
word=txt.split(' ')  

dict1=dict()     
newlist=list()   

for x in word:  
    if x=='':   
        continue
    elif (x[-1]=='.' or x[-1]==',' or x[-1]=='\n'):
        newlist.append(x[0:-1])
    else:
        newlist.append(x[0:])
        
key=dict1.keys()

for x in newlist: 
    if x in key:
        count=dict1[x]   
        dict1[x]=count+1
    else:
        dict1[x]=1

try:
    str=input("\nWord to check Occurence: ")
    print(f"\nOccurence of {str} is {dict1[str]}")
except:
    print(f"\nOccurence of word {str} is 0")