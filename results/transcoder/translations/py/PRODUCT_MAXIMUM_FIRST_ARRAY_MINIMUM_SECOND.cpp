double minmaxProduct ( vector < double > & arr1 , vector < double > & arr2 , int n1 , int n2 ) {
  sort ( arr1 . begin ( ) , arr1 . end ( ) ) ;
  sort ( arr2 . begin ( ) , arr2 . end ( ) ) ;
  return arr1 [ n1 - 1 ] * arr2 [ 0 ] ;
}
