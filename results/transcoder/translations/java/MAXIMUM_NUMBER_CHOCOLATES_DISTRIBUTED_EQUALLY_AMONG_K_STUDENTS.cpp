int maxNumOfChocolates ( int arr [ ] , int n , int k ) {
  unordered_map < int , int > um ;
  vector < int > sum ;
  int curr_rem ;
  int max_sum = 0 ;
  sum . push_back ( arr [ 0 ] ) ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    sum . push_back ( sum . back ( ) + arr [ i ] ) ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    curr_rem = sum [ i ] % k ;
    if ( curr_rem == 0 ) {
      if ( max_sum < sum [ i ] ) {
        max_sum = sum [ i ] ;
      }
    }
    else if ( ! um . count ( curr_rem ) ) {
      um [ curr_rem ] = i ;
    }
    else if ( max_sum < ( sum [ i ] - sum [ um [ curr_rem ] ] ) ) {
      max_sum = sum [ i ] - sum [ um [ curr_rem ] ] ;
    }
  }
  return ( max_sum / k ) ;
}
