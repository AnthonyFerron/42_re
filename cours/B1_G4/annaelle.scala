import scala.io.StdIn._
object Main {
  def main(args: Array[String]): Unit = {
        //Début
  print("Choisissez votre opération : 1 Dépôt 2 Retrait 3 Consultation du compte 4)) Terminer Votre choix: ")

        //Initialisation valeurs
    val choix = readInt()
    val pin = readLine()
    var tentatives = 3
    
        //Choix 1 2 3
    if ((choix == 1) || (choix == 2) || (choix == 3)){
      print("Saisissez votre code pin > ")
    //Insertion code    
        while (pin != "INTRO1234"){
        tentatives -= 1
      //Encore des tentatives
          if (tentatives <=3){
            print("Code pin erroné, il vous reste "+ tentatives +" tentatives >")
      //Trop de tentatives
        } else {
            print("Pour votre protection, les opérations bancaires vont s’interrompre, récupérez votre carte.")
        }
      }
        //Choix 4
    }else if (choix == 4){
        print("Choisissez votre opération : 1 Dépôt 2 Retrait 3 Consultation du compte 4 Terminer Votre choix: ")
        //Autre choix
    }else{
        print ("Erreur")
    }
  }
}