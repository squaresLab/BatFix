bool isPermutedMatrix ( vector < vector < int >> & mat , int n ) {
  string strCat ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    strCat . push_back ( "" ) ;
    strCat . push_back ( mat [ 0 ] [ i ] ) ;
  }
  strCat . push_back ( strCat ) ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    string currStr ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      currStr . push_back ( "" ) ;
      currStr . push_back ( mat [ i ] [ j ] ) ;
    }
    if ( ( strCat . find ( currStr ) != string :: npos ) || ( strCat . find ( currStr ) != string :: npos ) ) {
      return true ;
    }
  }
  return false ;
}
