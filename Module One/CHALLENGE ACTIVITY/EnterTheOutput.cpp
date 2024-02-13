/*
CHALLENGE ACTIVITY 1.8.1: Enter the output.
*/
/*
--------------------
Level 1

#include <iostream>
using namespace std;

int main() {
   cout << "Sam is nice.";

   return 0;
}

OUTPUT:
Sam is nice.

EXPLANATION: The statement - cout << "Sam is nice."; outputs the text inside "" on the screen.
--------------------
*/
/*
--------------------
Level 2

#include <iostream>
using namespace std;

int main() {
   cout << "Ann";
   cout << " is ";
   cout << "happy.";

   return 0;
}

OUTPUT
Ann is happy.

EXPLANATION: The statement does not include newline so it outputs "Ann is happy." on the screen.
--------------------
*/
/*
--------------------
Level 3

#include <iostream>
using namespace std;

int main() {
   cout << "Ann" << endl;
   cout << "is" << endl;
   cout << "great.";

   return 0;
}

OUTPUT
Ann
is
great.

EXPLANATION: Each endl moves the cursor to the next line.
--------------------
*/
/*
--------------------
Level 4


#include <iostream>
using namespace std;

int main() {
   int personAge;

   personAge = 18;
   
   cout << "Ron is ";
   cout << personAge;
   cout << ".";

   return 0;
}

OUTPUT
Ron is 18.

EXPLANATION: The statement cout << personAge; outputs the value of integer variable personAge
on the screen. There is no endl used, thus, the output is in single line.
--------------------
*/
/*
--------------------
Level 5

#include <iostream>
using namespace std;

int main() {
   int personAge;

   personAge = 22;

   cout << "Sam is " << personAge << "years.";

   return 0;
}

OUTPUT
Sam is 22years.
--------------------
*/