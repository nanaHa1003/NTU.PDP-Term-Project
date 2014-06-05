CC   = icpc -gxx-name=g++-4.8
OPTS = --std=c++0x -O3 -ipo -openmp

NVCC = nvcc -ccbin=/usr/bin/gcc

INCLUDE = -I/opt/NVIDIA/cuda-5.5/include
LINK    = -L/opt/NVIDIA/cuda-5.5/lib64 -lcudart
