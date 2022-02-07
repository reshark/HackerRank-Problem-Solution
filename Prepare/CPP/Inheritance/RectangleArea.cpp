#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
 class Rectangle
 {
    public :
        int mynWidth = 0; 
        int mynHeight = 0;
     
    public :
        void read_input()
        {
            cin >> mynWidth >> mynHeight;
        }
        void display()
        {
            cout << mynWidth << " " << mynHeight << endl;
        }
 };
 
 class RectangleArea : public Rectangle {
    public :
        void display() {
            cout << mynWidth * mynHeight << endl;   
        }
 };


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}