const inputMatrix = document.querySelector("#inputMatrix");
const answer = document.querySelector("#answer");

inputMatrix.addEventListener("input", (e) => {
    const value = ((e.target.value).replace(/[ ]+/g, " ")).split("\n");
    const rows = value.map(row => row.trim());

    // Error Checking
    // Length of first col:
    const firstCols = rows[0].split(" ").length;
    const passed = rows.every(row => row.split(" ").length === firstCols);
    if (!passed) {
        answer.textContent = "Invalid Matrix"; 
        return;
    }

    const matrix = rows.map((row) => row.split(" "));

    const transposedMatrix = matrix[0].map((_, i) => matrix.map(row => row[i]));
    
    answer.textContent = (transposedMatrix.map((row) => row.join(" "))).join("\n");
});
