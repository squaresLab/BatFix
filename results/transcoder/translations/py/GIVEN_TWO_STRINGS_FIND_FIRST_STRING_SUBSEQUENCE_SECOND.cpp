bool isSubSequence ( string string1 , string string2 , int m , int n ) {
  if ( m == 0 ) return true ;
  if ( n == 0 ) return false ;
  if ( string1 [ m - 1 ] == string2 [ n - 1 ] ) return isSubSequence ( string1 , string2 , m - 1 , n - 1 ) ;
  return isSubSequence ( string1 , string2 , m , n - 1 ) ;
}
