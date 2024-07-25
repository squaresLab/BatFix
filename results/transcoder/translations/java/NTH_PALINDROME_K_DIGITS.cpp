void nthPalindrome ( int n , int k ) {
  int temp = ( k & 1 ) ? ( k / 2 ) : ( k / 2 - 1 ) ;
  int palindrome = ( int ) pow ( 10 , temp ) ;
  palindrome += n - 1 ;
  cout << palindrome << endl ;
  if ( ( k & 1 ) > 0 ) {
    palindrome /= 10 ;
  }
  while ( palindrome > 0 ) {
    cout << palindrome % 10 << endl ;
    palindrome /= 10 ;
  }
  cout << "" << endl ;
}
