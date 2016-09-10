// Controller
let sortByAvarageState = 0;
let showFirstFiveState = 0;
let showLastThreeState = 0;

window.copyArray = workers.slice();

let tableController = new Vue({
  el: '#view-worker',
  
  data: {
    sortKey: 'id',
    reverse: 1,
    items: workers
  }, 

  methods: {
      // сортировка по среднемесячной зарплате
      sortBysalaryAvarage: function(sortKey) {

        document.querySelector('#first').checked = false;
        document.querySelector('#last').checked = false;
        this.items = window.copyArray.slice();
        showFirstFiveState = 0;
        showLastThreeState = 0;

        if (!sortByAvarageState) {
            this.reverse = -1; // по убыванию
            this.sortKey = sortKey;
            sortByAvarageState = 1;
        } else {
            this.reverse = 1; // по возрастанию
            this.sortKey = 'id';
            sortByAvarageState = 0;
        }

      },

      showFirstFive: function(){

        // сбрасываем в исходное состояние
        document.querySelector('#sort').checked = false;
        document.querySelector('#last').checked = false;
        this.reverse = 1; 
        this.sortKey = 'id';
        this.items = window.copyArray.slice();
        sortByAvarageState = 0;
        showLastThreeState = 0;

        if (!showFirstFiveState) {

          this.items = this.items.slice(0, 5); // первые 5
          showFirstFiveState = 1;

        } else {

          showFirstFiveState = 0;
        }

      },

      showLastThree: function(){

        // сбрасываем в исходное состояние
        document.querySelector('#sort').checked = false;
        document.querySelector('#first').checked = false;
        this.reverse = 1; // по возрастанию
        this.sortKey = 'id';
        this.items = window.copyArray.slice();
        sortByAvarageState = 0;
        showFirstFiveState = 0;

        if (!showLastThreeState) {
          
          let len = this.items.length;
          this.items = this.items.slice(1).slice(-3); // последние 3
          showLastThreeState = 1;

        } else {

          showLastThreeState = 0;

        }

      }
  }
});
