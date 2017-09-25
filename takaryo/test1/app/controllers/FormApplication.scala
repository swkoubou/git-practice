package controllers

import javax.inject._
import play.api._
import play.api.mvc._

import play.api.data.Form
import play.api.data.Forms._


@Singleton
class FormApplication @Inject() extends Controller {

  def input = Action {
    Ok(views.html.inputform())
  }

  case class User(name: String, age: Int, sex: String, freeright: String)

  val form = Form(mapping("name" -> nonEmptyText,
                          "age" -> number(min = 0,max = 200),
                          "sex" -> text,
                          "freeright" -> text)(User.apply)(User.unapply))

  def formSample = Action { implicit request =>
    val f = form.bindFromRequest
    if (f.hasErrors) Ok("form error. please fill in the blanks.")
    else Ok(f.get.toString)
  }
}
