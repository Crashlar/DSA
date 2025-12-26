class RectangleClass{
    int length;
    int breadth;

    RectangleClass(int length , int breadth )
    {
        this.length = length;
        this.breadth = breadth;
    }


    int area(){
        return length * breadth;
    }


}


public class Rectangle12 {
    public static void main(String[] args) {
        RectangleClass rec = new RectangleClass(10,5);
        System.out.println("Area of Rectangle is: " + rec.area());
    }
    
}
