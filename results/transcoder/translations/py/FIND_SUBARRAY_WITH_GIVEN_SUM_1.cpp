int subArraySum ( int arr [ ] , int n , int sum ) {
  int curr_sum = arr [ 0 ] ;
  int start = 0 ;
  int i = 1 ;
  while ( i <= n ) {
    while ( curr_sum > sum && start < i - 1 ) {
      curr_sum = curr_sum - arr [ start ] ;
      start ++ ;
    }
    if ( curr_sum == sum ) {
      cout << "Sum found between indexes" << endl ;
      cout << start << " and " << i - 1 << endl ;
      return 1 ;
    }
    if ( i < n ) curr_sum = curr_sum + arr [ i ] ;
    i ++ ;
  }
  cout << "No subarray found" << endl ;
  return 0 ;
}
