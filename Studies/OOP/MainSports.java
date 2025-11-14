class Sports {
    public void play() {
        System.out.println("Playing a sport.");
    }
}

class Football extends Sports {
    @Override
    public void play() {
        System.out.println("Playing football.");
    }
}

class Basketball extends Sports {
    @Override
    public void play() {
        System.out.println("Playing basketball.");
    }
}

class Rugby extends Sports {
    @Override
    public void play() {
        System.out.println("Playing rugby.");
    }
}

class MainSports {
    public static void main(String[] args) {
        Sports mySport = new Sports();
        Football myFootball = new Football();
        Basketball myBasketball = new Basketball();
        Rugby myRugby = new Rugby();

        mySport.play();
        myFootball.play();
        myBasketball.play();
        myRugby.play();
    }
}