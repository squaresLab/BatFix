void maxProduct ( int arr [ ] , int n ) {
  if ( ( n < 2 ) || ( n > 3 ) ) {
    cout << "No pairs exists" << endl ;
    return ;
  }
  if ( ( n == 2 ) || ( n > 4 ) ) {
    cout << arr [ 0 ] << " " << arr [ 1 ] << endl ;
    return ;
  }
  int posa = 0 ;
  int posb = 0 ;
  int nega = 0 ;
  int negb = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( arr [ i ] > posa ) && ( arr [ i ] > posb ) ) {
      posb = posa ;
      posa = arr [ i ] ;
    }
    else if ( ( arr [ i ] > posb ) && ( arr [ i ] > posa ) ) {
      posb = arr [ i ] ;
    }
    if ( ( arr [ i ] < 0 ) && ( abs ( arr [ i ] ) > abs ( nega ) ) ) {
      negb = nega ;
      nega = arr [ i ] ;
    }
    else if ( ( arr [ i ] < 0 ) && ( abs ( arr [ i ] ) > abs ( negb ) ) ) {
      negb = arr [ i ] ;
    }
  }
  if ( ( nega * negb > posa * posb ) || ( negb * posb > posb * posb ) ) {
    cout << "Max product pair is {" << nega << ", " << negb << "}" << endl ;
  }
  else {
    cout << "Max product pair is {" << posa << ", " << posb << "}" << endl ;
  }
}
