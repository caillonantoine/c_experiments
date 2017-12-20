module samples
	implicit none
	real, allocatable :: buffer(:,:)
end module samples

subroutine set_buffer_size(x,y)
	use samples
	implicit none
	integer, intent(in) :: x,y

	if (allocated(buffer)) deallocate(buffer)
	allocate(buffer(x,y))
end subroutine set_buffer_size

subroutine clear()
	use samples
	implicit none
	if (allocated(buffer)) deallocate(buffer)
end subroutine clear

subroutine get_buffer(y,M,N)
use samples
implicit none

integer, intent(in) :: M,N
real, intent(out), dimension(M,N) :: y
integer :: ii, jj

do ii = 1,M
	do jj = 1,N
		y(ii,jj) = buffer(ii,jj)
	enddo
enddo

end subroutine get_buffer

subroutine write_buffer(y,M,N)
use samples
implicit none

integer, intent(in) :: M,N
real, intent(in), dimension(M,N) :: y
integer :: ii, jj

do ii = 1,M
	do jj = 1,N
		buffer(ii,jj) = y(ii,jj)
	enddo
enddo


end subroutine write_buffer
