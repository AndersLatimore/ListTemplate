//
//  main.cpp
//  listTemplateEx
//
//  Created by Anders Akesson on 1/24/13.
//  Copyright (c) 2013 Anders Akesson. All rights reserved.
//

#include <iostream>
#include "List.h"

int main()
{

    List<int> myIntList;
    List<double> myDoubleList;
    List<string> myStringList;
    
    try {
        myStringList.print();
        myDoubleList.print();
        myIntList.print();
        
            //myIntList.insertFirst(2);
        myIntList.print();
        
            //myDoubleList.insertFirst(2.5);
        myDoubleList.print();
        
        myStringList.insertFirst("Hello");
        myStringList.print();
        
        cout << "\n*** Testing myIntList *** " << endl;
        myIntList.insertLast(4);
        myIntList.insertFirst(5);
        myIntList.insertAt(0, 6);
        myIntList.print();
        cout << endl;
        myIntList.removeLast();
        myIntList.removeFirst();
        myIntList.removeAt(1);
        myIntList.print();
        cout << "\n*** Testing inserting myIntList *** " << endl;
        myIntList.insertLast(10);
        myIntList.insertFirst(15);
        myIntList.insertAt(2, 20);
        cout << "\nElement at pos 0 in myIntList " << *myIntList.elementAt(0);
        cout << "\nElement at pos 1 in myIntList " << *myIntList.elementAt(1);
        cout << "\nElement at pos 2 in myIntList " << *myIntList.elementAt(2) << endl;
        myIntList.insertLast(5);
        myIntList.insertFirst(12);
        myIntList.insertAt(2, 8);
        myIntList.print();
        cout << endl;
        cout << "\n*** Testing removing stuff from myIntList *** " << endl;
        myIntList.removeLast();
        myIntList.removeFirst();
        myIntList.removeAt(1);
        myIntList.removeAt(2);
        myIntList.removeAt(3);
        myIntList.removeAt(0);
        myIntList.removeAt(1);
        myIntList.print();
        
        cout << "\n*** Testing myDoubleList *** " << endl;
        cout << myDoubleList.removeAt(1);
        cout << myDoubleList.removeAt(0);
        cout << myDoubleList.removeAt(2);
        myDoubleList.removeFirst();
        myDoubleList.removeLast();
        
        
        cout << "\n*** Testing adding stuff to myDoubleList *** " << endl;
        myDoubleList.insertFirst(5.8);
        myDoubleList.insertLast(9.99);
        myDoubleList.insertAt(0, 3.32);
        cout << "\nElement at pos 1 in myDoubleList " << *myDoubleList.elementAt(2);
        myDoubleList.print();
        
        cout << "\n*** Testing adding more stuff to myDoubleList *** " << endl;
        myDoubleList.insertFirst(2.8);
        myDoubleList.insertLast(91.29);
        myDoubleList.insertAt(2, 6.32);
        myDoubleList.insertFirst(43.8);
        myDoubleList.insertLast(99.8);
        myDoubleList.insertAt(0, 9.56);
        cout << "\nElement at pos 1 in myDoubleList " << *myDoubleList.elementAt(0) << endl;
        myDoubleList.print();
        
        cout << "\n*** Testing myStringList *** " << endl;
        myStringList.removeFirst();
        myStringList.removeLast();
        myStringList.removeAt(-1);
        myStringList.removeAt(0);
        myStringList.removeAt(1);
        myStringList.removeAt(2);
        cout << "\nElement at pos 0 in myStringList " << *myStringList.elementAt(0) << endl;
        myStringList.print();
        
        cout << "\n*** Testing to add stuff to myStringList *** " << endl;
        myStringList.insertFirst("This");
        myStringList.insertLast("is");
        myStringList.insertAt(2, "the");
        myStringList.insertLast("end");
        cout << "\n*** Element at pos 1 in myStringList " << *myStringList.elementAt(1) << endl;
        myStringList.print();
        
        cout << "\n*** Testing to remove stuff to myStringList *** " << endl;
        myStringList.removeFirst();
        myStringList.removeLast();
        myStringList.removeLast();
        myStringList.removeAt(1);
        myStringList.print();
    }
    catch (exception& e)
    {
        cout << e.what();
        return 1;
    }
    
     
    
    return 0;
}

