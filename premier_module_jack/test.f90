module work_array
implicit none
integer :: a=1
end module work_array

subroutine modifier(x,y)
use work_array
implicit none
integer, intent(in) :: x
integer, intent(out) :: y
y=a
a=x
end subroutine modifier
