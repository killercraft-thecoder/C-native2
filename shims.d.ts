// Shims for native C++ functions
declare namespace Matrix {
    // Computes sum of all elements
    //% shim=Matrix::sum
    function sum(matrix: number[][]): number;

    // Adds two matrices element-wise
    //% shim=Matrix::add
    function add(m1: number[][], m2: number[][]): number[][];

    // Subtracts two matrices element-wise
    //% shim=Matrix::sub
    function sub(m1: number[][], m2: number[][]): number[][];

    // Multiplies two matrices
    //% shim=Matrix::mul
    function mul(m1: number[][], m2: number[][]): number[][];
}
