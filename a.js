const randomChoice = (p) => {
  const MAX = p.length;
  return p[Math.floor(Math.random() * MAX )];
};

const getNum = () => {
  choiced = randomChoice(arr);
  arr.splice(arr.indexOf(choiced), 1);
  return choiced;
};


const MAX = 50;
// while(true){
//   console.log( Math.floor(Math.random() * MAX ) );
// }

let arr = new Array(MAX).fill(0).map((v, i)=> ++i);

let choiced = 0;

while(arr.length > 0){
  console.log(getNum());
}