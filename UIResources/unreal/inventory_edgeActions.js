/***********************
* Adobe Edge Animate Composition Actions
*
* Edit this file with caution, being careful to preserve 
* function signatures and comments starting with 'Edge' to maintain the 
* ability to interact with these actions from within Adobe Edge Animate
*
***********************/
(function($, Edge, compId){
var Composition = Edge.Composition, Symbol = Edge.Symbol; // aliases for commonly used Edge classes

   //Edge symbol: 'stage'
   (function(symbolName) {
      
      
      Symbol.bindElementAction(compId, symbolName, "${_RoundRect2Copy9}", "mouseover", function(sym, e) {
         
         // Change an Element's contents.
         //  (sym.$("name") resolves an Edge Animate element name to a DOM
         //  element that can be used with jQuery)

      });
      //Edge binding end

      Symbol.bindElementAction(compId, symbolName, "${_RoundRect2Copy9}", "mousedown", function(sym, e) {
         // Change an Element's contents.
         //  (sym.$("name") resolves an Edge Animate element name to a DOM
         //  element that can be used with jQuery)
         
         // reset buttons
         // button 1
         sym.$("RoundRect2Copy9").css("background-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy9").css("border-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy9").css("-webkit-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy9").css("-moz-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy9").css("box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         
         // button 2
         sym.$("RoundRect2Copy8").css("background-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy8").css("border-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy8").css("-webkit-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy8").css("-moz-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy8").css("box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         
         // hide big weapon images
         sym.$("weapon1Big").hide();
         sym.$("weapon2Big").hide();
         
         
         // set info text
         sym.$("InfoText").html("An assault rifle is a selective fire (selective between semi-automatic, fully automatic and/or burst fire) rifle that uses an intermediate cartridge and a detachable magazine.");
         sym.$("infoHeading").html("Assault rifle");
         // set background,border and glow to red
         sym.$("RoundRect2Copy9").css("background-color", "rgba(255,0,0,0.6)");
         sym.$("RoundRect2Copy9").css("border-color", "rgba(255,0,0,0.8)");
         sym.$("RoundRect2Copy9").css("-webkit-box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         sym.$("RoundRect2Copy9").css("-moz-box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         sym.$("RoundRect2Copy9").css("box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         
         // show big weapon image
         sym.$("weapon1Big").show();
         
         

      });
      //Edge binding end

      Symbol.bindElementAction(compId, symbolName, "${_RoundRect2Copy9}", "mouseenter", function(sym, e) {
         

      });
      //Edge binding end

      Symbol.bindElementAction(compId, symbolName, "${_RoundRect2Copy8}", "mousedown", function(sym, e) {
         // Change an Element's contents.
         //  (sym.$("name") resolves an Edge Animate element name to a DOM
         //  element that can be used with jQuery)
         
         // reset buttons
         // button 1
         sym.$("RoundRect2Copy9").css("background-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy9").css("border-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy9").css("-webkit-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy9").css("-moz-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy9").css("box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         
         // button 2
         sym.$("RoundRect2Copy8").css("background-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy8").css("border-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy8").css("-webkit-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy8").css("-moz-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy8").css("box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         
         // hide big weapon images
         sym.$("weapon1Big").hide();
         sym.$("weapon2Big").hide();
         
         
         // set info text
         sym.$("InfoText").html("A railgun comprises a pair of parallel conducting rails, along which a sliding armature is accelerated by the electromagnetic effects of a current that flows down.");
         sym.$("infoHeading").html("Railgun");
         
         // set background,border and glow to red
         sym.$("RoundRect2Copy8").css("background-color", "rgba(255,0,0,0.6)");
         sym.$("RoundRect2Copy8").css("border-color", "rgba(255,0,0,0.8)");
         sym.$("RoundRect2Copy8").css("-webkit-box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         sym.$("RoundRect2Copy8").css("-moz-box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         sym.$("RoundRect2Copy8").css("box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         
         
         // show big weapon image
         sym.$("weapon2Big").show();
         sym.$("weapon2Big").css("opacity", "1");
         
         

      });
      //Edge binding end

      Symbol.bindElementAction(compId, symbolName, "${_RoundRect2Copy25}", "mousedown", function(sym, e) {
         

      });
      //Edge binding end

      Symbol.bindElementAction(compId, symbolName, "${_RoundRect2Copy24}", "mousedown", function(sym, e) {
         

      });
      //Edge binding end

      Symbol.bindElementAction(compId, symbolName, "${_weapon2}", "mousedown", function(sym, e) {
         // Change an Element's contents.
         //  (sym.$("name") resolves an Edge Animate element name to a DOM
         //  element that can be used with jQuery)
         
         // reset buttons
         // button 1
         sym.$("RoundRect2Copy9").css("background-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy9").css("border-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy9").css("-webkit-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy9").css("-moz-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy9").css("box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         
         // button 2
         sym.$("RoundRect2Copy8").css("background-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy8").css("border-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy8").css("-webkit-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy8").css("-moz-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy8").css("box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         
         // hide big weapon images
         sym.$("weapon1Big").hide();
         sym.$("weapon2Big").hide();
         
         
         // set info text
         sym.$("InfoText").html("An assault rifle is a selective fire (selective between semi-automatic, fully automatic and/or burst fire) rifle that uses an intermediate cartridge and a detachable magazine.");
         sym.$("infoHeading").html("Assault rifle");
         // set background,border and glow to red
         sym.$("RoundRect2Copy9").css("background-color", "rgba(255,0,0,0.6)");
         sym.$("RoundRect2Copy9").css("border-color", "rgba(255,0,0,0.8)");
         sym.$("RoundRect2Copy9").css("-webkit-box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         sym.$("RoundRect2Copy9").css("-moz-box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         sym.$("RoundRect2Copy9").css("box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         
         // show big weapon image
         sym.$("weapon1Big").show();
         
         
         

      });
      //Edge binding end

      Symbol.bindElementAction(compId, symbolName, "${_weapon-n2}", "mousedown", function(sym, e) {
         // Change an Element's contents.
         //  (sym.$("name") resolves an Edge Animate element name to a DOM
         //  element that can be used with jQuery)
         
         // reset buttons
         // button 1
         sym.$("RoundRect2Copy9").css("background-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy9").css("border-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy9").css("-webkit-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy9").css("-moz-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy9").css("box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         
         // button 2
         sym.$("RoundRect2Copy8").css("background-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy8").css("border-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy8").css("-webkit-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy8").css("-moz-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy8").css("box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         
         // hide big weapon images
         sym.$("weapon1Big").hide();
         sym.$("weapon2Big").hide();
         
         
         // set info text
         sym.$("InfoText").html("A railgun comprises a pair of parallel conducting rails, along which a sliding armature is accelerated by the electromagnetic effects of a current that flows down.");
         sym.$("infoHeading").html("Railgun");
         
         // set background,border and glow to red
         sym.$("RoundRect2Copy8").css("background-color", "rgba(255,0,0,0.6)");
         sym.$("RoundRect2Copy8").css("border-color", "rgba(255,0,0,0.8)");
         sym.$("RoundRect2Copy8").css("-webkit-box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         sym.$("RoundRect2Copy8").css("-moz-box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         sym.$("RoundRect2Copy8").css("box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         
         
         // show big weapon image
         sym.$("weapon2Big").show();
         sym.$("weapon2Big").css("opacity", "1");
         
         
         

      });
      //Edge binding end

      Symbol.bindElementAction(compId, symbolName, "${_item1group}", "mousedown", function(sym, e) {
         // reset item buttons
         // button 1
         sym.$("RoundRect2Copy25").css("background-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy25").css("border-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy25").css("-webkit-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy25").css("-moz-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy25").css("box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         
         // button 2
         sym.$("RoundRect2Copy24").css("background-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy24").css("border-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy24").css("-webkit-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy24").css("-moz-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy24").css("box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         
         
         
         // set info text
         sym.$("infoHeading").html("Plasma grenade");
         sym.$("InfoText").html(" Plasma grenades are lethal, causing death by serious burns or the melting of targets, or non-lethal and intended to disrupt electronics using an electromagnetic pulse.");
         
         
         // set background,border and glow to red
         sym.$("RoundRect2Copy25").css("background-color", "rgba(255,0,0,0.6)");
         sym.$("RoundRect2Copy25").css("border-color", "rgba(255,0,0,0.8)");
         sym.$("RoundRect2Copy25").css("-webkit-box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         sym.$("RoundRect2Copy25").css("-moz-box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         sym.$("RoundRect2Copy25").css("box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         
         
         
         

      });
      //Edge binding end

      Symbol.bindElementAction(compId, symbolName, "${_item2Group}", "mousedown", function(sym, e) {
         // reset item buttons
         // button 1
         sym.$("RoundRect2Copy25").css("background-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy25").css("border-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy25").css("-webkit-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy25").css("-moz-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy25").css("box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         
         // button 2
         sym.$("RoundRect2Copy24").css("background-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy24").css("border-color", "rgba(0,151,255,0.28)");
         sym.$("RoundRect2Copy24").css("-webkit-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy24").css("-moz-box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         sym.$("RoundRect2Copy24").css("box-shadow", "rgba(0,151,255,0.28) 0px 0px 10px 2px");
         
         
         
         // set info text
         sym.$("infoHeading").html("Plasma grenade");
         sym.$("InfoText").html(" Plasma grenades are lethal, causing death by serious burns or the melting of targets, or non-lethal and intended to disrupt electronics using an electromagnetic pulse.");
         
         
         // set background,border and glow to red
         sym.$("RoundRect2Copy24").css("background-color", "rgba(255,0,0,0.6)");
         sym.$("RoundRect2Copy24").css("border-color", "rgba(255,0,0,0.8)");
         sym.$("RoundRect2Copy24").css("-webkit-box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         sym.$("RoundRect2Copy24").css("-moz-box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         sym.$("RoundRect2Copy24").css("box-shadow", "rgba(255,0,0,0.6) 0px 0px 12px 8px");
         
         
         
         
         

      });
      //Edge binding end

   })("stage");
   //Edge symbol end:'stage'

})(jQuery, AdobeEdge, "EDGE-21960227");