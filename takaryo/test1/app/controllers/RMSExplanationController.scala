package controllers

import javax.inject._
import play.api._
import play.api.mvc._

/**
  * This controller creates an `Action` to handle HTTP requests to the
  * application's home page.
  */
@Singleton
class RMSExplanationController @Inject() extends Controller {

  def rms = Action {
    /*Ok(views.html.index("Your new application is ready."))*/
    Ok(views.html.rms("Scalaの表示確認です."))
  }

}
