/* global $ */
/* exported GameMenu */
var GameMenu = function(menuOptions, parent){
	'use strict';
	var menu = null;
	function createMenu(){
		if (menu !== null) {
			$(parent).append(menu);
			return;
		}
		menu = $('<div class="cui-menu"></div>');
		for (var i=0; i < menuOptions.length; i++) {
			var buttonOption = menuOptions[i];
			var button = $('<button type="button" class="btn btn-large btn-primary"></button>');
			button.html(buttonOption.label);
			button.click(buttonOption.callback);
			if (buttonOption.disabled === true)
			{
				button.attr('disabled', 'disabled');
			}
			menu.append(button);
		}
		$(parent).append(menu);
	}

	this.show=function(){
		createMenu();
	};

	this.hide=function(){
		menu.detach();
	};
};
