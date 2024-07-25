void findCombinations ( string str , int index , string out ) {
  if ( index == str . length ( ) ) {
    cout << out << endl ;
  }
  for ( int i = index ;
  i < str . length ( ) ;
  i ++ ) {
    findCombinations ( str , i + 1 , out + "(" + str . substr ( index , i + 1 ) + ")" ) ;
  }
}
