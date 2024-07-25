void findSmallest ( int m , int s ) {
  if ( ( s == 0 ) && ( m == 1 ) ) {
    cout << "Smallest number is 0" << endl ;
  }
  else {
    cout << "Not possible" << endl ;
  }
  return ;
}
if ( ( s > 9 * m ) && ( m > 1 ) ) {
  cout << "Not possible" << endl ;
  return ;
}
int res [ m + 1 ] ;
s -- ;
for ( int i = 0 ;
i < m + 1 ;
i ++ ) {
  if ( ( s > 9 ) && ( s > 9 ) ) {
    res [ i ] = 9 ;
    s -= 9 ;
  }
  else {
    res [ i ] = s ;
    s = 0 ;
  }
}
res [ 0 ] = s + 1 ;
cout << "Smallest number is " << endl ;
for ( int i = 0 ;
i < m ;
i ++ ) {
  cout << res [ i ] << " " ;
}
}
