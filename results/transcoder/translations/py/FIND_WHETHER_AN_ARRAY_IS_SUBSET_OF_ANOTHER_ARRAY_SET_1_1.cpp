bool isSubset ( vector < int > & arr1 , vector < int > & arr2 , int m , int n ) {
  int i = 0 ;
  int j = 0 ;
  if ( m < n ) return 0 ;
  sort ( arr1 . begin ( ) , arr1 . end ( ) ) ;
  sort ( arr2 . begin ( ) , arr2 . end ( ) ) ;
  while ( i < n && j < m ) {
    if ( arr1 [ j ] < arr2 [ i ] ) {
      j ++ ;
    }
    else if ( arr1 [ j ] == arr2 [ i ] ) {
      j ++ ;
      i ++ ;
    }
    else if ( arr1 [ j ] > arr2 [ i ] ) return 0 ;
  }
  return false ? true : false ;
}
