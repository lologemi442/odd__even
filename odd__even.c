#include <iostream.h>
#include <conio.h>
void main ()
{
 int x, y;
 L: cout << "\n Enter a number: " ;
 cin >> x;
 y=x%2;
 if (y==0)
 cout << " The number is even\n" << endl;
 else
 cout << " The number is odd\n" << endl;
 goto L;
getch ();
}
