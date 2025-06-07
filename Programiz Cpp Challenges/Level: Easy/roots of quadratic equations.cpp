pair<double, double> findRoots(int a, int b, int c) {
    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        cout<< "No real roots";
    }

    double root1 = (-b + sqrt(discriminant)) / (2 * a);
    double root2 = (-b - sqrt(discriminant)) / (2 * a);
    
    return make_pair(root1, root2);
}
