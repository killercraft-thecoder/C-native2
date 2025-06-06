declare namespace Matrix {
    // Computes the sum of all elements in a matrix
    //% shim=pxt::Matrix::sum
    export function sum(matrix: any): number;

    // Adds two matrices element-wise
    //% shim=pxt::Matrix::add
    export function add(m1: any, m2: any): any;

    // Subtracts two matrices element-wise
    //% shim=pxt::Matrix::sub
    export function sub(m1: any, m2: any): any;

    // Multiplies two matrices
    //% shim=pxt::Matrix::mul
    export function mul(m1: any, m2: any): any;
}
