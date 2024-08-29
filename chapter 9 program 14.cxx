
	#include <iostream.h>
	 #include <conio.h>
	  float area(int b, int h); 
	  void main()
	   { 
	  int base, height;
	   float ar; 
	   clrscr(); 
	   cout<<"Enter base: "; 
	   cin>>base; 
	   cout<<"Enter height: ";
	    cin>>height; 
	    ar = area(base, height); 
	    cout<<"Area of triangle is "<<ar;
	     getch(); 
	     }
	      float area(int b, int h)
	      {
	       float a; 
	       a = 0.5*b*h;
	        return a; 
}