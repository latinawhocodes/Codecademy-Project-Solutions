//AlyssaYeilyurt

function getSleepHours(day){
  switch(day){
    case 'monday':
      return 8;
      break;
    case 'tuesday':
      return 7;
      break;
    case 'wednesday':
      return 6;
      break;
    case 'thursday':
      return 5;
      break;
    case 'friday':
      return 4;
      break;
    case 'saturday':
      return 3;
      break;
    case 'sunday':
  };
};

function getActualSleepHours(){
  getSleepHours('monday') + getSleepHours('tuesday') + getSleepHours('wednesday') + getSleepHours('thursday') + getSleepHours('friday') + getSleepHours('saturday') + getSleepHours('sunday'); 
}

function getIdealSleepHours(){
  const idealHours = 8;
  return idealHours*7;
};

function calculateSleepDebt(){
  const actualSleepHours = getActualSleepHours();
  let idealSleepHours = getIdealSleepHours();

	if (actualSleepHours === idealSleepHours){
  console.log('You are getting the right amount of sleep.');
	} else if (actualSleepHours > idealSleepHours){
  console.log('You are sleeping a bit too much. You should sleep ' + actualSleepHours - idealSleepHours + ' hour(s) less.');  
	} else if (actualSleepHours < idealSleepHours) {
  console.log('You should sleep more. You should sleep ' + (idealSleepHours - actualSleepHours) + ' hour(s) more.');
	};
};

calculateSleepDebt();
