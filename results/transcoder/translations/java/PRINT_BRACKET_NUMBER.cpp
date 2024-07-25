void printBracketNumber ( string exp , int n ) {
  int left_bnum = 1 ;
  stack < int > right_bnum ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( exp [ i ] == '(' ) {
      cout << left_bnum << " " ;
      right_bnum . push ( left_bnum ) ;
      left_bnum ++ ;
    }
    else if ( exp [ i ] == ')' ) {
      cout << right_bnum . top ( ) << " " ;
      right_bnum . pop ( ) ;
    }
  }
}
