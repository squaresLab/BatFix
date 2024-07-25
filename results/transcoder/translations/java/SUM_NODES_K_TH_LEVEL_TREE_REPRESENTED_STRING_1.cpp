int sumAtKthLevel ( string & tree , int k , int level ) {
  if ( tree [ i ++ ] == '(' ) {
    if ( tree [ i ] == ')' ) return 0 ;
    int sum = 0 ;
    if ( level == k ) sum = tree [ i ] - '0' ;
    ++ i ;
    int leftsum = sumAtKthLevel ( tree , k , level + 1 ) ;
    ++ i ;
    int rightsum = sumAtKthLevel ( tree , k , level + 1 ) ;
    ++ i ;
    return sum + leftsum + rightsum ;
  }
  return numeric_limits < int > :: min ( ) ;
}
