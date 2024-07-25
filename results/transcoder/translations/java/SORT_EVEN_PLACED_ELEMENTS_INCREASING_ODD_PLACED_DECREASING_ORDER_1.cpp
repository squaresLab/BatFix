void bitonicGenerator ( int arr [ ] , int n ) {
  int i = 1 ;
  int j = n - 1 ;
  if ( j % 2 != 0 ) {
    j -- ;
  }
  while ( i < j ) {
    arr = swap ( arr [ i ] , arr [ j ] ) ;
    i += 2 ;
    j -= 2 ;
  }
  sort ( arr , arr + ( n + 1 ) / 2 ) ;
  sort ( arr + ( n + 1 ) / 2 , arr + n ) ;
  int low = ( n + 1 ) / 2 , high = n - 1 ;
  while ( low < high ) {
    int temp = arr [ low ] ;
    arr [ low ] = arr [ high ] ;
    arr [ high ] = temp ;
    low ++ ;
    high -- ;
  }
}
