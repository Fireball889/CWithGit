function showAlertWindow() {
  window.alert('showAlertWindow() ran');
}

function readScreenWidth() {
  console.log('Screen Width: ' + screen.width);
  document.getElementById('screenWidthOutput').value = 'Screen Width: ' + screen.width + 'px';
}

function readScreenHeight() {
  console.log('Screen Height: ' + screen.height);
  document.getElementById('screenHeightOutput').value = 'Screen height: ' + screen.height + 'px';
}
