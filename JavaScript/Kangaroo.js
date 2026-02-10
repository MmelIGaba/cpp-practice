function kangaroo(x1, v1, x2, v2) {
    // Write your code here
    if (x1 > x2 && v1 > v2) return "NO";
    if (x2 > x1 && v2 > v1) return "NO";

    return (x1 - x2) % (v2 - v1) == 0 ? "YES" : "NO";
}