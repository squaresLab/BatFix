void thirdLargest ( int arr [ ] , int arr_size ) {
  if ( arr_size < 3 ) {
    printf ( " Invalid Input " ) ;
    return ;
  }
  int first = arr [ 0 ] ;
  for ( int i = 1 ;
  i < arr_size ;
  i ++ ) if ( arr [ i ] > first ) first = arr [ i ] ;
  int second = INT_MAX ;
  for ( int i = 0 ;
  i < arr_size ;
  i ++ ) if ( arr [ i ] > second && arr [ i ] < first ) second = arr [ i ] ;
  int third = INT_MAX ;
  for ( int i = 0 ;
  i < arr_size ;
  i ++ ) if ( arr [ i ] > third && arr [ i ] < second ) third = arr [ i ] ;
  printf ( "The third Largest " "element is %d\n" , third ) ;
}
