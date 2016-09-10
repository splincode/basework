window.uidWorker = 1; // уникальный id

/** Class работника */
class Worker {
 
  /**
    * Создаем работника
    * @param {string} name - имя работника.
    * @param {string} lastname - фамилия работника.
  */

  constructor(name, lastname){
    this.name = name;
    this.lastname = lastname;
    this.uid = window.uidWorker;
    
    window.uidWorker++;

    /**
      * Возвращает среднюю зарплату
      * Метод является абстрактным
    */  
    this.salaryAvarage = () => {};
  }
}

/** Class повременщиков */
class timeWorker extends Worker {

    /**
      * Создаем повременщика
      * @param {string} name - имя работника.
      * @param {string} lastname - фамилия работника.
      * @param {number} hRate - почасовая ставка (руб).
    */
    constructor(name, lastname, hRate){
        super(name, lastname);
        let hourlyRate = hRate;

        this.salaryAvarage = () => {
            return 20.8 * 8 * hourlyRate;
        }
    }
}

/** Class постоянного работника */
class constWorker extends Worker {

    /**
      * Создаем постоянного работника
      * @param {string} name - имя работника.
      * @param {string} lastname - фамилия работника.
      * @param {number} fxSalary - постоянная зарплата (руб).
    */
    constructor(name, lastname, fxSalary){
        super(name, lastname);
        let fixSalary = fxSalary;

        this.salaryAvarage = () => {
            return fixSalary;
        }
    }
}
