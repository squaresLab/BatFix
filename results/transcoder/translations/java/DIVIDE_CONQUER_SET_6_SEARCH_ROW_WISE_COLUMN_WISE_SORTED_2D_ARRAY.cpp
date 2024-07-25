void search ( vector < vector < int >> & mat , int fromRow , int toRow , int fromCol , int toCol , int key ) {
  int i = fromRow + ( toRow - fromRow ) / 2 ;
  int j = fromCol + ( toCol - fromCol ) / 2 ;
  if ( mat [ i ] [ j ] == key ) {
    cout << "Found " << key << " at " << i << " " << j << endl ;
  }
  else {
    if ( i != toRow || j != fromCol ) {
      search ( mat , fromRow , i , j , toCol , key ) ;
    }
    if ( fromRow == toRow && fromCol + 1 == toCol ) if ( mat [ fromRow ] [ toCol ] == key ) cout << "Found " << key << " at " << fromRow << " " << toCol << endl ;
    if ( mat [ i ] [ j ] < key ) {
      if ( i + 1 <= toRow ) {
        search ( mat , i + 1 , toRow , fromCol , toCol , key ) ;
      }
    }
    else {
      if ( j - 1 >= fromCol ) {
        search ( mat , fromRow , toRow , fromCol , j - 1 , key ) ;
      }
    }
  }
}
