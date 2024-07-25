void subArraySum ( int * arr , int n , int sum ) {
  int cur_sum = 0 ;
  int start = 0 ;
  int end = - 1 ;
  unordered_map < int , int > hashMap ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    cur_sum = cur_sum + arr [ i ] ;
    if ( cur_sum - sum == 0 ) {
      start = 0 ;
      end = i ;
      break ;
    }
    if ( hashMap . count ( cur_sum - sum ) ) {
      start = hashMap . at ( cur_sum - sum ) + 1 ;
      end = i ;
      break ;
    }
    hashMap [ cur_sum ] = i ;
  }
  if ( end == - 1 ) cout << "No subarray with given sum exists" << endl ;
  else cout << "Sum found between indexes " << start << " to " << end << endl ;
}
