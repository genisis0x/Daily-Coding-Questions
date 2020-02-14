function isopenbracket(char)
{
    return (char == '(' || char == '[' || char =='{' || char == '(');
}

function isclosebracket(char)
{
    return (char == ')' || char == ']' || char =='}' || char == ')');
}

function validbracket(charone, charsecond)
{
    return ((charone == '(' && charsecond == ')') || (charone == '[' && charsecond == ']') 
    || (charone == '{' && charsecond == '}'));
}

function isoperator(char)
{
    return (char == '+' || char == '-' || char == '*' || char == '/');
}

function calculate(value1, operator, value2)
{
    if(operator == '*')
        return ((value1 - '0') * (value2 - '0'));
    else if(operator == '+')
        return ((value1 - '0') + (value2 - '0'));
    else if(operator == '-')
        return ((value1 - '0') - (value2 - '0'));
    else if(operator == '/')
        return ((value1 - '0') / (value2 - '0'));
}

function isalphabet(char){
    return (char >= 'a' && char <= 'b');
}

function validstring(string){

    const length = string.length;

    let bracketarr = [];
    let valuearray = [];
    for(let iterator = 0; iterator < length; iterator++)
    {
        if(isopenbracket(string[iterator]))
        {
            bracketarr.push(string[iterator]);
            continue;
        }
        else if(isclosebracket(string[iterator]))
        {
            if(bracketarr.length == 0)
                return false;
            let openbracket = bracketarr.pop();
            if(!validbracket(openbracket, string[iterator]))
                return false;
            continue;
        }
        else if(isoperator(string[iterator]))
        {
            continue;
        }
        else if(isalphabet(string[iterator]))
        {
            if(iterator + 1 != length && !isalphabet(string[iterator + 1]))
                valuearray.push(string[iterator]);
            else if(iterator + 1 != length && isalphabet(string[iterator + 1]))
                return false;
            continue;
        }
        else
            return false;
    }
    if(bracketarr.length != 0)
        return false;
    return true;
}

let str = "({aa+b})";
if(validstring(str))
    console.log("Valid String");
else
    console.log("Invalid String");
