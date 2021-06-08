
#ifndef FIGURE_H
#define FIGURE_H
class Figure {
private:
    char type;
public:
    Figure(char type);
    Figure();
    void SetType(char type);
    char GetType() {
        return type;
    }
};
#endif
