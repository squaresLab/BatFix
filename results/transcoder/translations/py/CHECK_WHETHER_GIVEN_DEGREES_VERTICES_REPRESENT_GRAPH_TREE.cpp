bool check ( vector < int > degree , int n ) {
  int deg_sum = sum ( degree ) ;
  if ( ( 2 * ( n - 1 ) ) == deg_sum ) return true ;
  else return false ;
}
