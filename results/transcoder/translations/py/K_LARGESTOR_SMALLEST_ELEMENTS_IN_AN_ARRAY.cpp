void kLargest ( vector < int > & arr , int k ) {
  sort ( arr . begin ( ) , arr . end ( ) ) ;
  for ( int i = 0 ;
  i < k ;
  i ++ ) cout << arr [ i ] << " " ;
}
