void maxProduct ( int arr [ ] , int n ) {
  if ( n < 2 ) {
    cout << "No pairs exists" << endl ;
    return ;
  }
  if ( n == 2 ) {
    cout << arr [ 0 ] << " " << arr [ 1 ] << endl ;
    return ;
  }
  int posa = INT_MAX , posb = INT_MAX ;
  int nega = INT_MIN , negb = INT_MIN ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] > posa ) {
      posb = posa ;
      posa = arr [ i ] ;
    }
    else if ( arr [ i ] > posb ) {
      posb = arr [ i ] ;
    }
    if ( arr [ i ] < 0 && abs ( arr [ i ] ) > abs ( nega ) ) {
      negb = nega ;
      nega = arr [ i ] ;
    }
    else if ( arr [ i ] < 0 && abs ( arr [ i ] ) > abs ( negb ) ) {
      negb = arr [ i ] ;
    }
  }
  if ( nega * negb > posa * posb ) {
    cout << "Max product pair is {" << nega << ", " << negb << "}" << endl ;
  }
  else {
    cout << "Max product pair is {" << posa << ", " << posb << "}" << endl ;
  }
}
