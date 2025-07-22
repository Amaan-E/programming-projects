const inputMatrix = document.querySelector("#inputMatrix");
const answer = document.querySelector("#answer");

inputMatrix.addEventListener("input", (e) => {
    // remove extra spaces
    const value = (e.target.value).replace(/[ ]+/g, " ");
    const rows = value.split("\n");

    for (let i = 0; i < rows.length - 1; i++) {
        rows[i] = rows[i].trim();
    }

    // Error Checking
    const firstCols = rows[0].split(" ").length;
    let passed = true;
    for (let i = 0; i < rows.length; i++) {
        if (rows[i].split(" ").length !== firstCols) {
            passed = false;
            break;
        }
    }
    if (!passed) {
        answer.textContent = "Invalid Matrix";
        return;
    }
    // till here

    let matrix = [];
    for (const row of rows) {
        let myRow = [];
        for (const i of row.split(" ")) {
            myRow.push(i);
        }
        matrix.push(myRow);
    }

    let transposedMatrix = [];
    for (let i = 0; i < matrix[0].length; i++) {
        let myRow = [];
        for (let j = 0; j < matrix.length; j++) {
            myRow.push(matrix[j][i]);
        }
        transposedMatrix.push(myRow);
    }
    
    transposedMatrix = transposedMatrix.map((row) => {
        return row.join(" ");
    });
    // or 
    // transposedMatrix = transposedMatrix.map((row) => row.join(" ") );

    answer.textContent = transposedMatrix.join("\n");
});
