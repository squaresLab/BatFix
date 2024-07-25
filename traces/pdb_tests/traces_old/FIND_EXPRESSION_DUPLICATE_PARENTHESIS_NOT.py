Statement: Stack = [ ]
Line: 8
string = ((a+b)+((c+d)))

Statement: for ch in string :
Line: 9
string = ((a+b)+((c+d)))
Stack = []

Statement: if ch == ')' :
Line: 0
string = ((a+b)+((c+d)))
Stack = []
ch = (

Statement: Stack.append ( ch )
Line: 9
string = ((a+b)+((c+d)))
Stack = []
ch = (

Statement: for ch in string :
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(']
ch = (

Statement: if ch == ')' :
Line: 0
string = ((a+b)+((c+d)))
Stack = ['(']
ch = (

Statement: Stack.append ( ch )
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(']
ch = (

Statement: for ch in string :
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '(']
ch = (

Statement: if ch == ')' :
Line: 0
string = ((a+b)+((c+d)))
Stack = ['(', '(']
ch = a

Statement: Stack.append ( ch )
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '(']
ch = a

Statement: for ch in string :
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a']
ch = a

Statement: if ch == ')' :
Line: 0
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a']
ch = +

Statement: Stack.append ( ch )
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a']
ch = +

Statement: for ch in string :
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a', '+']
ch = +

Statement: if ch == ')' :
Line: 0
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a', '+']
ch = b

Statement: Stack.append ( ch )
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a', '+']
ch = b

Statement: for ch in string :
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a', '+', 'b']
ch = b

Statement: if ch == ')' :
Line: 0
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a', '+', 'b']
ch = )

Statement: top = Stack.pop ( )
Line: 1
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a', '+', 'b']
ch = )

Statement: elementsInside = 0
Line: 2
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a', '+']
ch = )
top = b

Statement: while top != '(' :
Line: 3
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a', '+']
ch = )
top = b
elementsInside = 0

Statement: elementsInside += 1
Line: 4
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a', '+']
ch = )
top = b
elementsInside = 0

Statement: top = Stack.pop ( )
Line: 5
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a', '+']
ch = )
top = b
elementsInside = 1

Statement: while top != '(' :
Line: 3
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a']
ch = )
top = +
elementsInside = 1

Statement: elementsInside += 1
Line: 4
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a']
ch = )
top = +
elementsInside = 1

Statement: top = Stack.pop ( )
Line: 5
string = ((a+b)+((c+d)))
Stack = ['(', '(', 'a']
ch = )
top = +
elementsInside = 2

Statement: while top != '(' :
Line: 3
string = ((a+b)+((c+d)))
Stack = ['(', '(']
ch = )
top = a
elementsInside = 2

Statement: elementsInside += 1
Line: 4
string = ((a+b)+((c+d)))
Stack = ['(', '(']
ch = )
top = a
elementsInside = 2

Statement: top = Stack.pop ( )
Line: 5
string = ((a+b)+((c+d)))
Stack = ['(', '(']
ch = )
top = a
elementsInside = 3

Statement: while top != '(' :
Line: 3
string = ((a+b)+((c+d)))
Stack = ['(']
ch = )
top = (
elementsInside = 3

Statement: if elementsInside < 1 :
Line: 6
string = ((a+b)+((c+d)))
Stack = ['(']
ch = )
top = (
elementsInside = 3

Statement: for ch in string :
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(']
ch = )
top = (
elementsInside = 3

Statement: if ch == ')' :
Line: 0
string = ((a+b)+((c+d)))
Stack = ['(']
ch = +
top = (
elementsInside = 3

Statement: Stack.append ( ch )
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(']
ch = +
top = (
elementsInside = 3

Statement: for ch in string :
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '+']
ch = +
top = (
elementsInside = 3

Statement: if ch == ')' :
Line: 0
string = ((a+b)+((c+d)))
Stack = ['(', '+']
ch = (
top = (
elementsInside = 3

Statement: Stack.append ( ch )
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '+']
ch = (
top = (
elementsInside = 3

Statement: for ch in string :
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(']
ch = (
top = (
elementsInside = 3

Statement: if ch == ')' :
Line: 0
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(']
ch = (
top = (
elementsInside = 3

Statement: Stack.append ( ch )
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(']
ch = (
top = (
elementsInside = 3

Statement: for ch in string :
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(']
ch = (
top = (
elementsInside = 3

Statement: if ch == ')' :
Line: 0
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(']
ch = c
top = (
elementsInside = 3

Statement: Stack.append ( ch )
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(']
ch = c
top = (
elementsInside = 3

Statement: for ch in string :
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c']
ch = c
top = (
elementsInside = 3

Statement: if ch == ')' :
Line: 0
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c']
ch = +
top = (
elementsInside = 3

Statement: Stack.append ( ch )
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c']
ch = +
top = (
elementsInside = 3

Statement: for ch in string :
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c', '+']
ch = +
top = (
elementsInside = 3

Statement: if ch == ')' :
Line: 0
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c', '+']
ch = d
top = (
elementsInside = 3

Statement: Stack.append ( ch )
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c', '+']
ch = d
top = (
elementsInside = 3

Statement: for ch in string :
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c', '+', 'd']
ch = d
top = (
elementsInside = 3

Statement: if ch == ')' :
Line: 0
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c', '+', 'd']
ch = )
top = (
elementsInside = 3

Statement: top = Stack.pop ( )
Line: 1
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c', '+', 'd']
ch = )
top = (
elementsInside = 3

Statement: elementsInside = 0
Line: 2
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c', '+']
ch = )
top = d
elementsInside = 3

Statement: while top != '(' :
Line: 3
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c', '+']
ch = )
top = d
elementsInside = 0

Statement: elementsInside += 1
Line: 4
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c', '+']
ch = )
top = d
elementsInside = 0

Statement: top = Stack.pop ( )
Line: 5
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c', '+']
ch = )
top = d
elementsInside = 1

Statement: while top != '(' :
Line: 3
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c']
ch = )
top = +
elementsInside = 1

Statement: elementsInside += 1
Line: 4
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c']
ch = )
top = +
elementsInside = 1

Statement: top = Stack.pop ( )
Line: 5
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(', 'c']
ch = )
top = +
elementsInside = 2

Statement: while top != '(' :
Line: 3
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(']
ch = )
top = c
elementsInside = 2

Statement: elementsInside += 1
Line: 4
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(']
ch = )
top = c
elementsInside = 2

Statement: top = Stack.pop ( )
Line: 5
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(', '(']
ch = )
top = c
elementsInside = 3

Statement: while top != '(' :
Line: 3
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(']
ch = )
top = (
elementsInside = 3

Statement: if elementsInside < 1 :
Line: 6
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(']
ch = )
top = (
elementsInside = 3

Statement: for ch in string :
Line: 9
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(']
ch = )
top = (
elementsInside = 3

Statement: if ch == ')' :
Line: 0
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(']
ch = )
top = (
elementsInside = 3

Statement: top = Stack.pop ( )
Line: 1
string = ((a+b)+((c+d)))
Stack = ['(', '+', '(']
ch = )
top = (
elementsInside = 3

Statement: elementsInside = 0
Line: 2
string = ((a+b)+((c+d)))
Stack = ['(', '+']
ch = )
top = (
elementsInside = 3

Statement: while top != '(' :
Line: 3
string = ((a+b)+((c+d)))
Stack = ['(', '+']
ch = )
top = (
elementsInside = 0

Statement: if elementsInside < 1 :
Line: 6
string = ((a+b)+((c+d)))
Stack = ['(', '+']
ch = )
top = (
elementsInside = 0

Statement: return True
Line: 7
string = ((a+b)+((c+d)))
Stack = ['(', '+']
ch = )
top = (
elementsInside = 0

Statement: return True
Line: 7
string = ((a+b)+((c+d)))
Stack = ['(', '+']
ch = )
top = (
elementsInside = 0
__return__ = True

