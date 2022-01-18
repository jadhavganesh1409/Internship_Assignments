import java.util.*;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Scanner;

public class Program {
    private static Scanner sc = new Scanner(System.in);
    private static HashMap<Integer, Book> books = new HashMap<>();
    private static int menu(){
        System.out.println("0. Exit");
        System.out.println("1. Add Book");
        System.out.println("2. Delete Book");
        System.out.println("3. Search Book");
        System.out.println("4. Display Books");
        return sc.nextInt();
    }
    public static void main(String[] args) {
        int choice;
        do{
            choice = menu();
            switch(choice){
                case 1:
                {
                    Book book = new Book();
                    book.input();
                    books.put(book.getId(), book);
                    //list.add(book);
                    break;
                }
                case 2:{
                    if(books.isEmpty()){
                        System.out.println("No Books");
                    }else{
                        System.out.println("Enter Book Id : ");
                        int id = sc.nextInt();
                        books.remove(id);
                        
                    }
                    break;
                }
                case 3:{
                    if(books.isEmpty()){
                        System.out.println("No Books");
                    }else{
                        System.out.println("Enter Book Id : ");
                        int id = sc.nextInt();
                        System.out.println(books.get(id));
                    }
                    break;
                }
                case 4:
                {
                    if(books.isEmpty()){
                        System.out.println("No Books");
                    }else{
                        for (Map.Entry<Integer, Book> entry : books.entrySet()) {
                            System.out.println(entry.getValue());
                        }
                    }
                    break;
                }
            }
        }while(choice != 0);
    }
}
