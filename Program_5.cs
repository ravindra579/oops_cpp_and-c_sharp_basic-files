using System;
using System.Runtime.CompilerServices;

class student
{ 
private
    int rollno;
    string name;
    string branch="mechanical";
    public void printstudentdetails()
    {
        Console.Write("'Rollno = " + rollno + ",Name = " + name + ",Branch = " + "branch");
    }
     public string branch{
         get{
             return branch;
         }
     }
    public int rollno{
      set {
        rollno=value;
        }
    get {
        return rollno;
       }
    }
    public string name 
    {
        set {
            name=value;
        }
        get{
        return name;
    }
    }
};
namespace ConsoleApp5
{
    class Program
    {
        static void Main(string[] args)
        {
            student a=new student();
            a.printstudentdetails();
            a.printstudentdetails();
            Console.WriteLine(a.branch_);

        }
        
    }
}
