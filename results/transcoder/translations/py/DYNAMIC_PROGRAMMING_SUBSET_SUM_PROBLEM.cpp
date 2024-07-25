bool isSubsetSum ( int * set , int n , int sum ) {
  if ( ( sum == 0 ) || ( sum == 1 ) ) return true ;
  if ( ( n == 0 && sum != 0 ) || ( n == 1 && sum != 1 ) ) return false ;
  if ( ( set [ n - 1 ] > sum ) || ( set [ n - 1 ] < sum ) ) return isSubsetSum ( set , n - 1 , sum ) ;
  ;
}
