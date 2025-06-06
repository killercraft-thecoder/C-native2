// tests go here; this will not be compiled when this package is used as an extension.
// Import Matrix namespace (if required)
namespace MatrixTest {
    // Sample matrices for testing
    let matrixA = [
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9]
    ];

    let matrixB = [
        [9, 8, 7],
        [6, 5, 4],
        [3, 2, 1]
    ];

    // Run tests
    console.log("Sum of matrixA:" + Matrix.sum(matrixA)); // Expected: 45
    console.log("Sum of matrixB:" + Matrix.sum(matrixB)); // Expected: 45

    console.log("Matrix addition:");
    console.log(Matrix.add(matrixA, matrixB));
    // Expected: 
    // [
    //  [10, 10, 10],
    //  [10, 10, 10],
    //  [10, 10, 10]
    // ]

    console.log("Matrix subtraction:");
    console.log(Matrix.sub(matrixA, matrixB));
    // Expected:
    // [
    //  [-8, -6, -4],
    //  [-2, 0, 2],
    //  [4, 6, 8]
    // ]

    console.log("Matrix multiplication:");
    console.log(Matrix.mul(matrixA, matrixB));
    // Expected (depends on matrix multiplication rules)
}
