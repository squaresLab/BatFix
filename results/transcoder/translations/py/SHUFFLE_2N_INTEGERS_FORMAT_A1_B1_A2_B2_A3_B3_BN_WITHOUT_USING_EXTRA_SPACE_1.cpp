void shufleArray ( int * a , int f , int l ) {
  if ( ( l > f ) || ( l == 0 ) ) return ;
  if ( ( l - f == 1 ) || ( l == 0 ) ) return ;
  int mid = ( int ) ( ( f + l ) / 2 ) ;
  int temp = mid + 1 ;
  int mmid = ( int ) ( ( f + mid ) / 2 ) ;
  for ( int i = mmid + 1 ;
  i <= mid ;
  i ++ ) {
    ( a [ i ] ) = ( a [ temp ] ) ;
    temp ++ ;
  }
  shufleArray ( a , f , mid ) ;
  shufleArray ( a , mid + 1 , l ) ;
}
