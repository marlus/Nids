/* global $ */
/* global GameMenu */
/* global engine */
/* global window */

(function () {
    'use strict';
    $(function () {
        var menuParent = $('#inGameMenu');

        function resumeGame() {
			toggleInGameMenu();
            engine.trigger('onResumeGame');
        }

        function mainMenu() {
            engine.trigger('onGoToMenu');
        }

        function quit() {
            engine.trigger('onQuit');
        }

		function hideHud(){
		}

		function showHud(){
		}

        var menu = [
            {id: 1, label: 'Resume Game', callback: resumeGame},
            {id: 2, label: 'Main Menu', callback: mainMenu},
            {id: 3, label: 'Quit', callback: quit}
        ];

        var gameMenu = new GameMenu(menu, menuParent);

        function toggleInGameMenu() {
            var menu = $('#inGameMenu');
            if ($(menu).hasClass('hidden')) {
                hideHud();
				gameMenu.show();
                engine.trigger('onShowInGameMenu');
            } else {
                showHud();
				gameMenu.hide();
                engine.trigger('onCloseInGameMenu');
            }

            $(menu).toggleClass('hidden');
        }

        engine.on('ToggleInGameMenu', function () {
            toggleInGameMenu();
        });
    });

}());