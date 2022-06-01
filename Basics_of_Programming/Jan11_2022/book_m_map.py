bookdict = {}

def insert(bid, bname, price, author):
    for book in bookdict.keys():
        if book == bid:
            print("Book Already Added")
            return

    bookdict[bid]={}
    bookdict[bid]['Book_Name'] = bname
    bookdict[bid]['Price'] = price
    bookdict[bid]['Author'] = author

def delete(bid):
    flag = 0
    for book in bookdict.keys():
        if book == bid:
            flag = 1;
    if flag == 1:
        del bookdict[bid]
        print("Book removed")
    else:
        print("Book Not found")
    
def search(bid):
    flag = 0
    for i in bookdict.keys():
        if i == bid:
            print("Book Id: ",bid)
            print("Book Name: ",bookdict[i]['Book_Name'])
            print("Author: ",bookdict[i]['Author'])
            print("Price: ",bookdict[i]['Price'])
            flag =1
            return
    if flag != 1:
        print("Book Not found")

def list_all():
    if not bookdict:
        print("Book list is Empty")
    else:
        for i in bookdict.keys():
            print(i,bookdict[i]['Book_Name'],bookdict[i]['Price'],bookdict[i]['Author'])
    
task=1
while(task!=5):
    print("-------------------------------------------------");
    print("1. Insert a book");
    print("2. Delete a book");
    print("3. Search a book by bid");
    print("4. List all the books");
    print("5. Exit");
    print("--------------------------------------------------");
    task=int(input("Enter your choice : "));
    
    if task == 1:
        bookId = input("Book Id: ")
        bName = input("Book Name: ")
        Price = input("Price: ")
        Author = input("Author: ")
        insert(int(bookId),bName,Price,Author)
    if task == 2:
        temp = input("Book Id to Delete: ")
        delete(int(temp))
    if task == 3:
        temp = int(input("Book Id to Search: "))
        search(temp)
    if task == 4:
        print("ID Name Author Price")
        list_all()