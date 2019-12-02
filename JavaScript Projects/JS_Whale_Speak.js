let input = 'hello there, human';
const vowels = ['a', 'e', 'i', 'o', 'u'];
let whaleSpeak = [];

for (let inputIndex = 0; inputIndex< input.length; inputIndex++){
 for (let vowelsIndex=0; vowelsIndex<vowels.length; vowelsIndex++){
	if (input[inputIndex] === vowels[vowelsIndex]){
      whaleSpeak.push(input[inputIndex]);
   }
 }
  if (input[inputIndex] === 'e' || input[inputIndex] === 'u'){
    whaleSpeak.push(input[inputIndex]);
  }
 };

console.log(whaleSpeak.join('').toUpperCase());
