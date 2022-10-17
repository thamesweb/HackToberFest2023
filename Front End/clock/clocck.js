setInterval(setclock , 1000);

const hourhand = document.querySelector('[data-hour-hand]');
const minutehand = document.querySelector('[data-minute-hand]');
const secondhand =document.querySelector('[data-second-hand]');

function setclock(){
    const currdate = new Date();
    const secondratio = currdate.getSeconds()/60;
    const minutesratio = (secondratio + currdate.getMinutes()) / 60;
    const hourratio = (minutesratio + currdate.getHours())/12;   


    setrotation(hourhand , hourratio);
    setrotation(minutehand,minutesratio);
    setrotation(secondhand,secondratio);
}

function setrotation(element , rotationratio)
{
    element.style.setProperty('--rotation',rotationratio*360)
}