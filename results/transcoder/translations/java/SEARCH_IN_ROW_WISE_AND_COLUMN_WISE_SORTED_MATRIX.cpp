private : void search ( vector < vector < int >> & mat , int n , int x ) {
  int i = 0 , j = n - 1 ;
  while ( i < n && j >= 0 ) {
    if ( mat [ i ] [ j ] == x ) {
      cout << "n Found at " << i << " " << j << endl ;
      return ;
    }
    if ( mat [ i ] [ j ] > x ) {
      j -- ;
    }
    else {
      i ++ ;
    }
  }
  cout << "n Element not found" << endl ;
  return ;
}
