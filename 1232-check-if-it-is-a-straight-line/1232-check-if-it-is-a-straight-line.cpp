class Solution {
public:

bool checkStraightLine(std::vector<std::vector<int>>& coordinates) {
    int x0 = coordinates[0][0];
    int y0 = coordinates[0][1];
    int x1 = coordinates[1][0];
    int y1 = coordinates[1][1];

    if (x0 == x1) {
        // All points lie on a vertical line
        for (int i = 2; i < coordinates.size(); i++) {
            if (coordinates[i][0] != x0) {
                return false;
            }
        }
    } else {
        // Calculate the expected slope
        double slope = static_cast<double>(y1 - y0) / (x1 - x0);
        
        // Check if all points have the same slope
        for (int i = 2; i < coordinates.size(); i++) {
            int xi = coordinates[i][0];
            int yi = coordinates[i][1];
            
            if ((yi - y0) != slope * (xi - x0)) {
                return false;
            }
        }
    }

    return true;
}

 
};