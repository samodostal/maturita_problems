const fs = require("fs");
console.log("Ideme nacitat subor v ktorom sa vysvetluje ako je voda a ako sus");
let endOfLine = false;
let matrix = [[], [], [], [], [], [], [], [], [], []];
let currentMatrix = 0;
let land = 0;
let numberOfWater = 0;
let firstPointSelected = false;

const main = async () => {
  fs.readFile("02.txt", "utf-8", (err, data) => {
    for (let i = 0; i < data.length; i++) {
      if ((i + 1) % 11 === 0) {
        endOfLine = true;
        currentMatrix++;
        continue;
      } else {
        if (Number(data[i]) === 1) {
          land++;
        }
        endOfLine = false;
      }

      matrix[currentMatrix].push(data[i]);
    }
    console.log(((land / data.length) * 100).toFixed(2) + '% tvori sus');

    for (let x = 0; x < matrix.length; x++) {
      for (let y = 0; y < matrix[x].length; y++) {
        const point = matrix[x][y];
        if (point === "1" && !firstPointSelected) {
          checkPoint([x, y]);
          firstPointSelected = true;
        }
      }
    }
    if (t < land) {
        console.log('Nesuvisly celok');
    } else {
        console.log('Suvisly celok');
    }
  });
};

let t = 0;

const checkPoint = (coords) => {
  const x = coords[0];
  const y = coords[1];
  try {
    const pointAbove = x - 1 >= 0 ? matrix[x - 1][y] : matrix[0][0];
    const pointBellow = x + 1 <= 9 ? matrix[x + 1][y] : matrix[0][0];
    const pointLeft = y - 1 >= 0 ? matrix[x][y - 1] : matrix[0][0];
    const pointRight = y + 1 <= 9 ? matrix[x][y + 1] : matrix[0][0];

    matrix[x][y] = "2";
    t++;

    if (pointAbove === "1") {
      checkPoint([x - 1, y]);
    }
    if (pointBellow === "1") {
      checkPoint([x + 1, y]);
    }
    if (pointLeft === "1") {
      checkPoint([x, y - 1]);
    }
    if (pointRight === "1") {
      checkPoint([x, y + 1]);
    }
  } catch (err) {}
};

main();
