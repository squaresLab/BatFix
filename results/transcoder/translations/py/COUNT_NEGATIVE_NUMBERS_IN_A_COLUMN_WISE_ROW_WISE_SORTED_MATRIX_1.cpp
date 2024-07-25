public : int countNegative ( vector < vector < int >> & M , int n , int m ) {
  int count = 0 ;
  int i = 0 ;
  int j = m - 1 ;
  while ( j >= 0 && i < n ) {
    if ( M [ i ] [ j ] < 0 ) {
      count += ( j + 1 ) ;
      i ++ ;
    }
    else {
      j -- ;
    }
  }
  return count ;
}
