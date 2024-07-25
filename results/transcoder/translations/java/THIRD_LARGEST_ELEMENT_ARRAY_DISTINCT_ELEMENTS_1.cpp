void thirdLargest ( int arr [ ] , int arr_size ) {
  if ( arr_size < 3 ) {
    printf ( " Invalid Input " ) ;
    return ;
  }
  int first = arr [ 0 ] , second = INT_MAX , third = INT_MAX ;
  for ( int i = 1 ;
  i < arr_size ;
  i ++ ) {
    if ( arr [ i ] > first ) {
      third = second ;
      second = first ;
      first = arr [ i ] ;
    }
    else if ( arr [ i ] > second ) {
      third = second ;
      second = arr [ i ] ;
    }
    else if ( arr [ i ] > third ) {
      third = arr [ i ] ;
    }
  }
  printf ( "The third Largest element is %d\n" , third ) ;
}
