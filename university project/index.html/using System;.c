using System;
class ConstructorExample
{
    public static int Age { get; }
    static ConstructorExample()
    {
        Age = 20;
        Console.WriteLine("Static Constructor called.");
    }
}
class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine($"Age is: {ConstructorExample.Age}");
        Console.WriteLine("In Lab No: 1\nStudent Name: Ramesh Acharya\Section/Roll no: C/89");
    }
}
