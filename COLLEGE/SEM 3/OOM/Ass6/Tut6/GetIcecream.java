class ABCIcecream{
    void icecream(){
        return;
    }
}

class XIcecream extends ABCIcecream{
    void icecream(){
        System.out.println("The icecream has vanilla flavour");
    }
}
class YIcecream extends ABCIcecream{
    void icecream(){
        System.out.println("The icecream has vanilla and chocolate flavour");
    }
}

public class GetIcecream{
    public static void main(String[] args){
        XIcecream x = new XIcecream();
        YIcecream y = new YIcecream();
        x.icecream();
        y.icecream();
    }
}