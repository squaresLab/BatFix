void printBracketNumber ( string exp , int n ) {
  int leftBnum = 1 ;
  list < int > rightBnum ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( exp [ i ] == '(' ) {
      cout << leftBnum << " " ;
      rightBnum . push_back ( leftBnum ) ;
      leftBnum ++ ;
    }
    else if ( exp [ i ] == ')' ) {
      cout << rightBnum . back ( ) << " " ;
      rightBnum . pop_back ( ) ;
    }
  }
}
