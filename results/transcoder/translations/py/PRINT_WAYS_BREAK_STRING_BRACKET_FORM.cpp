void findCombinations ( string & string , int index , string & out ) {
  if ( index == string . size ( ) ) cout << endl ;
  for ( int i = index ;
  i < string . size ( ) ;
  i += 1 ) findCombinations ( string , i + 1 , out + "(" + string . substr ( index , i + 1 ) + ")" ) ;
}
