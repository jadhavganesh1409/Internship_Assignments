#include <iostream>
#include <string>
#include<math.h>

using namespace std;

const string units[] = {"" ,"One ","Two ","Three ","Four ","Five ","Six ","Seven ",
                "Eight ","Nine ","Ten ","Eleven ","Twelve ","Thirteen ","Fourteen ","Fifteen ",
                "Sixteen ","Seventeen ","Eighteen ","Nineteen "};
 
const string tens[] = {"" ,"" ,"Twenty ","Thirty ","Forty ","Fifty ","Sixty ","Seventy ","Eighty ","Ninety "};

unsigned long long int number;

string words(int n, string words)
{
    string sol="";

    if (n == 0)
    {
        return "";
    }

    if ((n/100) > 0)
    {
        sol += units[n/100] + "Hundred ";
    }
          
    if ((n%100) > 19)
    {
        return sol + tens[(n%100) / 10] + units[(n%100) % 10] + words;
    }
    else 
    {
        return sol+ units[n%100] + words;
    }
}

string american(unsigned long long int n)
{
    string sq;
  
    sq = words((n % 1000), "");
    sq = words(((n / 1000) % 1000), "Thousand ") + sq;
    sq = words(((n / 1000000) % 1000), "Million, ") + sq;
    sq = words(((n / 1000000000) % 1000), "Billion, ") + sq;
    sq = words(((n / 1000000000000) % 1000), "Trillion, ") + sq;
    sq = words(((n / 1000000000000000) % 1000), "Quadrillion, ") + sq;
    sq = words(((n / 1000000000000000000) % 1000), "Quintillion, ") + sq;
    //sq = words(((n / 10000000000000000000) % 1000),  "Sextillion, ") +  sq;
   
   
    return sq;
}
 
int main()
{
    
    while(1)
    {
        cout<<"\n\nEnter the Number: ";
        cin>>number;

        if(number==0)
        {
            cout<<"Words: Zero";
            continue;
        }
        if(number==-1)
            break;
        
        if(number>pow(10,19))
            cout<<"Out of Range";
        else
        {
           
            cout<<"\n Word: "+american(number);
        }    
    }
    return 0;
}