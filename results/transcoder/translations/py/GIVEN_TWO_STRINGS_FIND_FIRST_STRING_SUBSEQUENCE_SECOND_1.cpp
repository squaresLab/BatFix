bool isSubSequence ( string str1 , string str2 , int m , int n ) {
  int j = 0 ;
  int i = 0 ;
  while ( j < m && i < n ) {
    if ( str1 [ j ] == str2 [ i ] ) j = j + 1 ;
    i = i + 1 ;
  }
  return j == m ;
}
