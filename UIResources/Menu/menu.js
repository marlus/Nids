function showOptions() {
    gameOptions.show();
}

$(function () {
    document.getElementById('play').onclick = function () {
        engine.trigger('onStartGame');
    };

    document.getElementById('quit').onclick = function () {
        engine.trigger('onQuit');
    };
});
