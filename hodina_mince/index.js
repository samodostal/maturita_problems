const bankovky = [500, 200, 100, 50, 20, 10, 5, 2, 1];
const pouzite = [];

let pocet = 0;

const main = (input) => {
	console.log(`Zadana suma: ${input}`);
	rec(input);
	bankovky.forEach(item => {
		pocet = 0;
		pouzite.forEach(bank => {
			if(bank === item) {
				pocet++;
			}
		});
		if(pocet !== 0) {
			console.log(`Bankovka: ${item}, bola pouzita ${pocet}`);
		}
	});
}

const rec = (val) => {
	for(item of bankovky) {
		if(item <= val) {
			pouzite.push(item);
			return rec(val - item);
		}
	}
}

main(1243);

