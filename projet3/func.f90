subroutine fonction_test(x,y,o) bind(C)
implicit none

integer, intent(in) :: x,y
integer, intent(out) :: o

o = x+y

end subroutine fonction_test
