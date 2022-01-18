import java.util.Scanner;

class Book {
    private int Id;
    private String Name;
    private String Author;
    private double Price;
    public Book(){
    }
    public Book(int Id, String Name, String Author, double price){
        this.Id = Id;
        this.Name = Name;
        this.Author = Author;
        this.Price = price;
    }
    public void setId(int Id){this.Id = Id;}
    public int getId(){return this.Id;}
    public void setName(String Name){this.Name = Name;}
    public String getName(){return this.Name;}
    public void setAuthor(String Author){this.Author = Author;}
    public String getAuthor(){return this.Author;}
    public void setPrice(double Price){this.Price = Price;}
    public double getPrice(){return this.Price;}
    public void input(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Id : ");
        this.Id = sc.nextInt();
        System.out.println("Enter Name : ");
        this.Name = sc.nextLine();
        sc.nextLine();
        System.out.println("Enter Author : ");
        this.Author = sc.nextLine();
        System.out.println("Enter Price : ");
        this.Price = sc.nextDouble();
    }
    @Override
    public String toString() {
        return "Book Id : "+getId()+"   Name : "+getName()+"    Author : "+this.Author+"    Price : "+this.Price;
    }
}