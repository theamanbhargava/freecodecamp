function rot13(str) {

  return str.split('').map.call(str, function(char){
    x = char.charCodeAt(0);
    if(x <65 || x>90)
      return String.fromCharCode(x);
    else return String.fromCharCode((x-65+13)%26 + 65);
  }).join('');
}
