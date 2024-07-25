void nthPalindrome ( int n , int k ) {
  if ( ( k & 1 ) != 0 ) {
    int temp = k / 2 ;
    if ( temp > 0 ) {
      int palindrome = 10 * temp ;
      palindrome = palindrome + n - 1 ;
      cout << palindrome << " " ;
      if ( ( k & 1 ) != 0 ) {
        palindrome = palindrome / 10 ;
      }
      while ( ( palindrome ) ) {
        cout << palindrome % 10 << " " ;
        palindrome = palindrome / 10 ;
      }
    }
  }
}
