class Music{
    String songName;
    String singerName;

    Music(String songName, String singerName){
        this.songName = songName;
        this.singerName = singerName;
    }

    public void allMethods(){
        System.out.println("All methods of music class applicable");
    }

    public void play(){
        System.out.println("Song is being played from a third-party music library");
    }
}

class Sony extends Music{

    Sony(String songName, String singerName){
        super(songName, singerName);
    }
    public void play(){
        System.out.println("Song is being played from original library");
    }
}

class Panasonic extends Music{

    Panasonic(String songName, String singerName){
        super(songName, singerName);
    }
    
    public void play(){
    super.play();
    }
}

public class RunMusic{
    public static void main(String[] args){
        Sony s = new Sony("Kaagazi", "Kartik Sachdeva");
        Panasonic p = new Panasonic("Kun Faya Kun", "Javed Ali");
        System.out.println("Sony: ");
        s.play();
        System.out.println("Panasonic: ");
        p.play();
        p.allMethods();
    }
}