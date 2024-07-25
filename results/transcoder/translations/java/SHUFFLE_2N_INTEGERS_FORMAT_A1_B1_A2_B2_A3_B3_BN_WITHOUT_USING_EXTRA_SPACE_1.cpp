void shufleArray ( int a [ ] , int f , int l ) {
  if ( l > f ) return ;
  if ( l - f == 1 ) return ;
  int mid = ( f + l ) / 2 ;
  int temp = mid + 1 ;
  int mmid = ( f + mid ) / 2 ;
  for ( int i = mmid + 1 ;
  i <= mid ;
  i ++ ) {
    int temp1 = a [ i ] ;
    a [ i ] = a [ temp ] ;
    a [ temp ++ ] = temp1 ;
  }
  shufleArray ( a , f , mid ) ;
  shufleArray ( a , mid + 1 , l ) ;
}
