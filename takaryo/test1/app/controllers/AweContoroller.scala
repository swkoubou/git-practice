package controllers

import javax.inject._
import play.api._
import play.api.mvc._

/**
  * This controller creates an `Action` to handle HTTP requests to the
  * application's home page.
  */
@Singleton
class AweController @Inject() extends Controller {

  var a="He"
  var b="llo"
  def number ={
    a + b
  }
  def aim: String ={
    s"Your new application is ready & ${number}"
  }
  def index = Action {
    Ok(views.html.awe(aim :String))
  }

}