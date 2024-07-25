void subArraySum ( int * arr , int n , int Sum ) {
  int Map [ n ] ;
  int currSum = 0 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    currSum = currSum + arr [ i ] ;
    if ( currSum == Sum ) {
      cout << "Sum found between indexes 0 to" << i << endl ;
      return ;
    }
    if ( ( currSum - Sum ) < Map [ i ] ) {
      cout << "Sum found between indexes" << "" << Map [ i ] + 1 << "to" << i << endl ;
      return ;
    }
    Map [ currSum ] = i ;
  }
  cout << "No subarray with given sum exists" << endl ;
}
