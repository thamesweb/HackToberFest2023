// ----------nav bar--------
menu=document.querySelector(".menu");
menu.onclick=function(){
    nav_section=document.querySelector(".nav-section");
    nav_section.classList.toggle("active");
}


// ---------------------search
let movie=document.getElementById("movie-name");
let search_btn=document.getElementById("search-btn");
let result=document.getElementById("result");
let front=document.getElementById("flip-card-front");
let back=document.getElementById("flip-card-back");

let key=`5a02c20a`;
let res=[];
let getMovie=()=>{
  let movie_name=movie.value;
  res=movie_name.split(" ");
  movie_name=res[0];
  
   for(let i=1;i<res.length;i++)
   {
    movie_name+="+"+res[i];
   }
  console.log(movie_name);
  let url=`http://www.omdbapi.com/?t=${movie_name}&apikey=${key}`;
  if(movie_name.length<=0)
  {
      result.innerHTML='<h3 class="msg">Enter a Movie Name</h3>'
  }
  else{
      fetch(url).then(Response=>Response.json())
      .then(data=>{
         referrerPolicy: "unsafe_url" 
         console.log(data.Response)
         console.log(data.Title)
         console.log(data.Year)
         console.log(data.Actors)
         console.log(data.Genre)
         console.log(data.Director)
         console.log(data.Plot)
         console.log(data.Poster)
         console.log(data.Ratings[0].Source)
         console.log(data.Ratings[0].Value)
         
         if(data.Response==`True`)
         {
          let count=data.Ratings.length;
          let rated='';
          for(let i=0;i<count;i++)
               {
                  rated+= data.Ratings[i].Value+"⭐"+data.Ratings[i].Source+"<br></br>";
                 
               }
               front.innerHTML=`
               <div class="content">
               <img src=${data.Poster} alt="">
               <div class="name">${data.Title}</div>`;
               back.innerHTML=`
               <div class="info">
               <h1 >${data.Title}:(${data.Year})</h1> 
               <p class="genre">Genre ::${data.Genre}</p>
               <h2 class="by">By :${data.Director}</h2>
               <h2 class="cast">CAST :${data.Actors}</h2>
               <p class="plot">Plot :${data.Plot}</p>
                  <h2 class="rating">Rating   : : ${rated}</h2>
            </div>`;
              
         }
         else {
          result.innerHTML='<h3 class="msg">Not Found In Database</h3>'
         }
      

         
      });
  }


};

window.addEventListener("load",async()=>{
   await getMovie();
});
search_btn.addEventListener("click",getMovie);


box=document.getElementsByClassName("box");
const movie_arr=["Avatar","Avengers+Endgame","Avatar: The Way of Water","Titanic","Star Wars: Episode VII - The Force Awakens","Avengers: Infinity War","Spider-Man: No Way Home","Jurassic World","The Lion King","The Avengers",
"The Shawshank Redemption","The Godfather","The Dark Knight","The Godfather: Part II","12 Angry Men","Schindler's List","The Lord of the Rings: The Return of the King","Pulp Fiction","The Lord of the Rings: The Fellowship of the Ring","The Good, the Bad and the Ugly",
"Spirited Away","Soul","Zootopia","WALL·E","UP"
];
for(let i=0;i<box.length;i++)
{
   box[i].onclick=()=>{
      movie.value=movie_arr[i];
      console.log(movie_arr[i]);
           getMovie();
   }
   
}