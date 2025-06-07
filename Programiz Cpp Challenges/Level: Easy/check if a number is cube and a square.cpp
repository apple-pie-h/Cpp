bool isCubeAndSquare(int num) {
    int root = round(pow(num, 1.0 / 6.0));
    return (root * root * root * root * root * root == num);
}
