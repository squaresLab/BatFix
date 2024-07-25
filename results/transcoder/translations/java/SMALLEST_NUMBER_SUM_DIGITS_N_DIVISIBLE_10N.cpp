void digitsNum ( int N ) {
  if ( N == 0 ) {
    cout << "0" ;
  }
  if ( N % 9 != 0 ) {
    cout << ( N % 9 ) ;
  }
  for ( int i = 1 ;
  i <= ( N / 9 ) ;
  ++ i ) {
    cout << "9" ;
  }
  for ( int i = 1 ;
  i <= N ;
  ++ i ) {
    cout << "0" ;
  }
  cout << "" ;
}
