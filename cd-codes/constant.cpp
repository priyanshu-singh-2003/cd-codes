#include <iostream>
#include <ctype.h>

using namespace std;
string solve( string s ) {
   int start;
   if( s[0] == '-' && isdigit( s[1] ) ) {
      start = 1;
   }
   else {
      start = 0;
   }

   for( int i = start; i < s.length(); i++ ) {
      if( !isdigit( s[i] )) {
         return "False";
      }
   }
   return "True";
}

int main()
{
   cout << "Is "687" a numeric string? : " << solve( "687" ) << endl;
   cout << "Is "256l" a numeric string? : " << solve( "256l" ) << endl;
   cout << "Is "-5845" a numeric string? : " << solve( "-5845" ) << endl;
   cout << "Is "-89A2" a numeric string? : " << solve( "-89A2" ) << endl;
   cout << "Is "-256" a numeric string? : " << solve( "-256" ) << endl;
}