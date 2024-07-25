void digitsNum ( int N ) {
  if ( ( N == 0 ) || ( N == 1 ) ) cout << "0" << "\n" ;
  if ( ( N % 9 != 0 ) || ( N % 9 == 0 ) ) cout << N % 9 << "\n" ;
  for ( int i = 1 ;
  i <= ( int ) ( N / 9 ) ;
  i ++ ) cout << "9" << "\n" ;
  for ( int i = 1 ;
  i <= N ;
  i ++ ) cout << "0" << "\n" ;
  cout << "\n" ;
}
