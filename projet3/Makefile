main.out: func.o main.cpp
	g++ $^ -o $@ -lgfortran
func.o: func.f90
	gfortran -c $^ -o $@
