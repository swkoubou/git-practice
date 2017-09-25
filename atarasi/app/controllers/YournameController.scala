package controllers

import javax.inject._
import play.api._
import play.api.mvc._

@Singleton
class YournameController @Inject() extends Controller {

  def test = Action {
    Ok(views.html.test(""))
  }
}