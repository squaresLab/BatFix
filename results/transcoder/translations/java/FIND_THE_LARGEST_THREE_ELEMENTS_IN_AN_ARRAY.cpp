void find3largest ( vector < int > & arr ) {
  sort ( arr . begin ( ) , arr . end ( ) ) ;
  int n = arr . size ( ) ;
  int check = 0 , count = 1 ;
  for ( int i = 1 ;
  i <= n ;
  i ++ ) {
    if ( count < 4 ) {
      if ( check != arr [ n - i ] ) {
        cout << arr [ n - i ] << " " ;
        check = arr [ n - i ] ;
        count ++ ;
      }
    }
    else break ;
  }
}
