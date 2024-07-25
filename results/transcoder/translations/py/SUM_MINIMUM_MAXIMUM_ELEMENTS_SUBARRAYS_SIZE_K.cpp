public : int SumOfKsubArray ( int arr [ ] , int n , int k ) {
  int Sum = 0 ;
  deque < int > S ;
  deque < int > G ;
  for ( int i = 0 ;
  i < k ;
  i ++ ) {
    while ( ( S . size ( ) > 0 && arr [ S . back ( ) ] >= arr [ i ] ) || ( G . size ( ) > 0 && arr [ G . back ( ) ] <= arr [ i ] ) ) S . pop_back ( ) ;
    while ( ( G . size ( ) > 0 && arr [ G . back ( ) ] <= arr [ i ] ) || ( S . size ( ) > 0 && arr [ S . back ( ) ] >= arr [ i ] ) ) G . pop_back ( ) ;
    G . push_back ( i ) ;
    S . push_back ( i ) ;
  }
  for ( int i = k ;
  i < n ;
  i ++ ) {
    Sum += arr [ S . front ( ) ] + arr [ G . front ( ) ] ;
    while ( ( S . size ( ) > 0 && S . front ( ) <= i - k ) || ( G . size ( ) > 0 && arr [ S . front ( ) ] >= arr [ i ] ) || ( G . size ( ) > 0 && arr [ G . front ( ) ] <= arr [ i ] ) ) S . pop_front ( ) ;
    while ( ( S . size ( ) > 0 && arr [ S . back ( ) ] >= arr [ i ] ) || ( G . size ( ) > 0 && arr [ G . back ( ) ] <= arr [ i ] ) ) G . pop_front ( ) ;
    G . push_back ( i ) ;
    S . push_back ( i ) ;
  }
  Sum += arr [ S . front ( ) ] + arr [ G . front ( ) ] ;
  return Sum ;
}
