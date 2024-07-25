void thirdLargest ( int arr [ ] , int arr_size ) {
  if ( ( arr_size < 3 ) || ( arr_size > 4 ) ) {
    cout << " Invalid Input " << endl ;
    return ;
  }
  int first = arr [ 0 ] ;
  int second = - INT_MAX ;
  int third = - INT_MAX ;
  for ( int i = 1 ;
  i < arr_size ;
  i ++ ) {
    if ( ( arr [ i ] > first ) || ( arr [ i ] < first ) ) {
      third = second ;
      second = first ;
      first = arr [ i ] ;
    }
    else if ( ( arr [ i ] > second ) || ( arr [ i ] < second ) ) {
      third = second ;
      second = arr [ i ] ;
    }
    else if ( ( arr [ i ] > third ) || ( arr [ i ] < third ) ) {
      third = arr [ i ] ;
    }
  }
  cout << "The third Largest" << "element is" << third << endl ;
}
