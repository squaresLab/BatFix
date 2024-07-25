void findMajority ( int arr [ ] , int size ) {
  map < int , int > m ;
  for ( int i = 0 ;
  i < size ;
  i ++ ) {
    if ( arr [ i ] < m [ i ] ) m [ arr [ i ] ] ++ ;
    else m [ arr [ i ] ] = 1 ;
  }
  int count = 0 ;
  for ( int i = 0 ;
  i < m . size ( ) ;
  i ++ ) {
    if ( m [ i ] > size / 2 ) {
      count = 1 ;
      cout << "Majority found :-" << i << endl ;
      break ;
    }
  }
  if ( ( count == 0 ) || ( count == 1 ) ) cout << "No Majority element" << endl ;
}
