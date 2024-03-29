console.log('test');

 
// ----------------------tabs at the header------------------------
var tablinks = document.getElementsByClassName("tab-links");
var tabcontents = document.getElementsByClassName("tab-contents");
function opentab(tabname){
    for(tablink of tablinks){
        tablink.classList.remove("active-link");
    }
    for(tabcontent of tabcontents){
        tabcontent.classList.remove("active-tab");
    }
    event.currentTarget.classList.add("active-link");
    document.getElementById(tabname).classList.add("active-tab");
}





// --------------------sidemenu for small screens or windows--------------------------
var sidemenu = document.getElementById("sidemenu");

function openmenu(){
    sidemenu.style.right = "0";
}

function closemenu(){
    sidemenu.style.right = "-200px";
}






// -----------------------submit to googl button-----------------------
const scriptURL = 'https://script.google.com/macros/s/AKfycbx1jIEAO1W_MXcCzjIHhjIOeJLJgE-EWTj3SdPib1z0LDjthbhXC_KW9je4FnPUWGwhSQ/exec'
const form = document.forms['submit-to-google-sheet']
const msg = document.getElementById("msg")

form.addEventListener('submit', e => {
    e.preventDefault()
    fetch(scriptURL, { method: 'POST', body: new FormData(form)})
    .then(response => {
        msg.innerHTML = "Message sent succesfully"
        setTimeout(function(){
            msg.innerHTML = ""
        },5000)
        form.reset()
    })
    .catch(error => console.error('Error!', error.message))
})







// -------------------scroll to the top buton----------------------
let mybutton = document.getElementById("myBtn");

window.onscroll = function() {scrollFunction()};

function scrollFunction(){
    if (document.body.scrollTop > 20 || document.documentElement.scrollTop > 20){
        mybutton.style.display = "block";

    }
    else{
        mybutton.style.display = "none";
    }
}

function topFunction(){
    document.body.scrollTop = 0;
    document.documentElement.scrollTop = 0;
}





// -----------------------------close secwork button-------------------
let legend = document.getElementById("legend-W");
let allWork = document.getElementById("all-work");

function hidde(){
    legend.style.display = "none";
}
function unhidde(){
    legend.style.display = "flex";
}





// -----------------------see more button-----------------------
let work = document.getElementById("myPDF");//used to be sec-work
let button1 = document.getElementById("sless");
let button2 = document.getElementById("smore");

function showmore(){
    work.style.display = "flex";//used to be block
    button1.style.display = "block";
    button2.style.display = "none";
    // legend.style.display = "flex";
}
function showless(){
    work.style.display = "none";
    button1.style.display = "none";
    button2.style.display = "block";
}





// ---------------------showcase work-------------------
document.addEventListener("mousemove", e => {
    var layer = document.querySelector('.game-feature-box');
    var z = e.clientX;
    var o = e.clientY;
    var x = (0.0*(z/36)-20+20);
    var y = (0.0*(-o/36)+10-10);
    var a = (z-400)*0.2;
    var b = (o-300)*0.2;

    let query = window.matchMedia("(min-width: 600px");

    if(query.matches){
        layer.style = "transform: perspective(2000px) translate("+a/10+"px,"+b/10+"px) rotateX("+y+"deg) rotateY("+x+"deg);";
    }

});




// -----------------------feature slider-----------------------
const track = document.querySelector('.feature_track');
const slides = Array.from(track.children);
const nextButton = document.querySelector('.feature_button--right');
const prevButton = document.querySelector('.feature_button--left');
const dotsNav = document.querySelector('.feature_nav');
const dots = Array.from(dotsNav.children);

const slideWidth = slides[0].getBoundingClientRect().width;

const setSlidePosition = (slide, index) => {
    slide.style.left = slideWidth * index + 'px';
};
slides.forEach(setSlidePosition);

const moveToSlide = (track, currentSlide, targetSlide) => {
    track.style.transform = 'translateX(-' + targetSlide.style.left + ')';
    currentSlide.classList.remove('current-slide');
    targetSlide.classList.add('current-slide');
}

const updateDots = (currentDot, targetDot) => {
    currentDot.classList.remove('current-slide');
    targetDot.classList.add('current-slide');
}

const hideShowArrows = (slides, prevButton, nextButton, targetIndex) => {
    if (targetIndex === 0) {
        prevButton.classList.add('is-hidden');
        nextButton.classList.remove('is-hidden');
    }else if (targetIndex === slides.length - 1){
        prevButton.classList.remove('is-hidden');
        nextButton.classList.add('is-hidden');
    }else {
        prevButton.classList.remove('is-hidden');
        nextButton.classList.remove('is-hidden');
    }
}

prevButton.addEventListener('click', e => {
    const currentSlide = track.querySelector('.current-slide');
    const prevSlide = currentSlide.previousElementSibling;
    const currentDot = dotsNav.querySelector('.current-slide');
    const prevDot = currentDot.previousElementSibling;
    const prevIndex = slides.findIndex(slide => slide === prevSlide);

    moveToSlide(track, currentSlide, prevSlide);
    updateDots(currentDot, prevDot);
    hideShowArrows(slides, prevButton, nextButton, prevIndex);
});


nextButton.addEventListener('click', e => {
    const currentSlide = track.querySelector('.current-slide');
    const nextSlide = currentSlide.nextElementSibling;
    const currentDot = dotsNav.querySelector('.current-slide');
    const nextDot = currentDot.nextElementSibling;
    const nextIndex = slides.findIndex(slide => slide === nextSlide);

    moveToSlide(track, currentSlide, nextSlide);
    updateDots(currentDot, nextDot);
    hideShowArrows(slides, prevButton, nextButton, nextIndex);
})

dotsNav.addEventListener('click', e => {

    const targetDot = e.target.closest('button');

    if (!targetDot)return;

    const currentSlide = track.querySelector('.current-slide');
    const currentDot = dotsNav.querySelector('.current-slide');
    const targetIndex = dots.findIndex(dot => dot === targetDot);
    const targetSlide = slides[targetIndex];

    moveToSlide(track, currentSlide, targetSlide);
    updateDots(currentDot, targetDot);
    hideShowArrows(slides, prevButton, nextButton, targetIndex);
    
})







// ------------------------extra work----------------------
const filt = document.getElementsByClassName("work-legend li");
var listes = document.getElementsByClassName("list");
// filt.addEventListener("onclick",filterEd());

function filterEd(){
    for(lis of listes){
        lis.classList.remove("project-filter-active");
    }
    event.currentTarget.classList.add('project-filter-active');
    // filt.siblings().remove('project-filter-active');
}


            
        
        