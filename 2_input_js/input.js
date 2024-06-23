window.onload = setup

function setup() {
    let aInput = document.getElementById('a')
    let bInput = document.getElementById('b')
    let cInput = document.getElementById('c')
    let dInput = document.getElementById('d')
    let calculate = document.getElementById('calculate')
    let resultView = document.getElementById('result')
    let result2View = document.getElementById('result2')

    calculate.onclick = function() {
        let a = Number.parseInt(aInput.value);
        let b = Number.parseInt(bInput.value);
        let c = Number.parseInt(cInput.value);
        let result = a + b * c
        resultView.textContent = result.toString()
        let d = Number.parseInt(dInput.value);
        result2View.textContent = (result * d).toString()
    }
}
