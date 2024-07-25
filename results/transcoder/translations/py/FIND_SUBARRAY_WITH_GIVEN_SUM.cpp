int subArraySum ( int arr [ ] , int n , int sum ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int curr_sum = arr [ i ] ;
    int j = i + 1 ;
    while ( j <= n ) {
      if ( curr_sum == sum ) {
        cout << "Sum found between" << endl ;
        cout << "indexes " << i << " and " << j - 1 << endl ;
        return 1 ;
      }
      if ( curr_sum > sum || j == n ) break ;
      curr_sum = curr_sum + arr [ j ] ;
      j ++ ;
    }
  }
  cout << "No subarray found" << endl ;
  return 0 ;
}
