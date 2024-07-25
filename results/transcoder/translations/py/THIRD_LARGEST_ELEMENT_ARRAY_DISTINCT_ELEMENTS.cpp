void thirdLargest ( int arr [ ] , int arr_size ) {
  if ( ( arr_size < 3 ) || ( arr_size > 4 ) ) {
    cout << " Invalid Input " << endl ;
    return ;
  }
  int first = arr [ 0 ] ;
  for ( int i = 1 ;
  i < arr_size ;
  i ++ ) {
    if ( ( arr [ i ] > first ) && ( arr [ i ] < first ) ) first = arr [ i ] ;
  }
  int second = - INT_MAX ;
  for ( int i = 0 ;
  i < arr_size ;
  i ++ ) {
    if ( ( arr [ i ] > second && arr [ i ] < first ) || ( arr [ i ] < second && arr [ i ] > first ) ) second = arr [ i ] ;
  }
  int third = - INT_MAX ;
  for ( int i = 0 ;
  i < arr_size ;
  i ++ ) {
    if ( ( arr [ i ] > third && arr [ i ] < second ) || ( arr [ i ] < third && arr [ i ] > first ) ) third = arr [ i ] ;
  }
  cout << "The Third Largest" << "element is" << third << endl ;
}
