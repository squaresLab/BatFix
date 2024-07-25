void sortUsingHash ( int a [ ] , int n ) {
  int max = std :: max ( a , a + n ) ;
  int hash [ max + 1 ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    hash [ a [ i ] ] += 1 ;
  }
  for ( int i = 0 ;
  i <= max ;
  i ++ ) {
    if ( hash [ i ] != 0 ) {
      for ( int j = 0 ;
      j < hash [ i ] ;
      j ++ ) {
        std :: cout << i << " " ;
      }
    }
  }
}
