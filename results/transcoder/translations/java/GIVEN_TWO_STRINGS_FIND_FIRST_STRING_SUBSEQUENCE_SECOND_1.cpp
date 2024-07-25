bool isSubSequence ( string str1 , string str2 , int m , int n ) {
  int j = 0 ;
  for ( int i = 0 ;
  i < n && j < m ;
  i ++ ) if ( str1 [ j ] == str2 [ i ] ) j ++ ;
  return ( j == m ) ;
}
