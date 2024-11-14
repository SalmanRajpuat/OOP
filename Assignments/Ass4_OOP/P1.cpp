#include <iostream>
#include <cmath> 

using namespace std;


class PlanePoint {
protected:
    int X;
    int Y;

public:
    PlanePoint() : X(0), Y(0) {}
    
    PlanePoint(int x, int y) : X(x), Y(y) {}

    // Accessor functions
    int getX() const 
		{ return X; }
    int getY() const 
		{ return Y; }

    //distance calculation
    double planeDistance(PlanePoint& other)  {
        return sqrt(pow(X - other.X, 2) + pow(Y - other.Y, 2));
    }
};

// Derived class to represent a point in a 3D space
class SpacePoint : public PlanePoint {
private:
    int Z;

public:
    SpacePoint() : PlanePoint(), Z(0) {}
    SpacePoint(int x, int y, int z) : PlanePoint(x, y), Z(z) {}

    // Accessor function for Z
    int getZ() const { return Z; }

    // Function to calculate the distance between two SpacePoint objects
    double spaceDistance(const SpacePoint& other) const {
        return pow(X - other.X, 2) + pow(Y - other.Y, 2) + pow(Z - other.Z, 2);
    }
};

int main() {
    // Creating two points in the plane
    PlanePoint point1(3, 4);
    PlanePoint point2(6, 8);

    // Calculating and displaying the distance between the two PlanePoint objects
    double distance2D = point1.planeDistance(point2);
    cout << "Distance between PlanePoint(3, 4) and PlanePoint(6, 8): " << distance2D << endl;

    // Creating two points in the space
    SpacePoint sp1(1, 2, 3);
    SpacePoint sp2(4, 5, 6);

    // Calculating and display the distance between the two SpacePoint objects
    double distance3D = sp1.spaceDistance(sp2);
    cout << "Distance between SpacePoint(1, 2, 3) and SpacePoint(4, 5, 6): " << distance3D << endl;

    return 0;
}

