// Generate all magic square combinations.
generateMagicSquares = () => {
    const magicSquares = [
        [[8, 1, 6], [3, 5, 7], [4, 9, 2]],
        [[6, 1, 8], [7, 5, 3], [2, 9, 4]],
        [[4, 9, 2], [3, 5, 7], [8, 1, 6]],
        [[2, 9, 4], [7, 5, 3], [6, 1, 8]],
        [[8, 3, 4], [1, 5, 9], [6, 7, 2]],
        [[4, 3, 8], [9, 5, 1], [2, 7, 6]],
        [[6, 7, 2], [1, 5, 9], [8, 3, 4]],
        [[2, 7, 6], [9, 5, 1], [4, 3, 8]],
    ];
    return magicSquares;
}

// Gen Magic squares again.
genMagSqr() = () => {
    const magicSquares = [[[8, 1, 6], [3, 5, 7], [4, 9, 2]]];
    const rotationsAndReflections = (square) => {
        const results = [];
        let current = square;
        for (let i = 0; i < 4; i++) {
            current = rotate90(current);
            results.push(current);
            results.push(reflect(current));
        }
        return results;
    }
    const rotate90 = (square) => {
        return square[0].map((_, i) => square.map(row => row[i]).reverse());
    }
    const reflect = (square) => {
        return square.map(row => row.slice().reverse());
    }
    const baseSquare = magicSquares[0];
    const allSquares = rotationsAndReflections(baseSquare);
    allSquares.forEach(sq => {
        if (!magicSquares.some(existing => JSON.stringify(existing) === JSON.stringify(sq))) {
            magicSquares.push(sq);
        }
    });

    return magicSquares;
}

console.log(generateMagicSquares().length);