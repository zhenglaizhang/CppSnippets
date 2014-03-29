

class Vector
{
public:

    //this allows me to access my data as an array or the elements.
    union
    {
        double _coord[3];
        struct
        {
            double _x;
            double _y;
            double _z;
        };
    };
};


// // dimension from left to right   // union for the left to right dimension
union LRDimension
{
    unsigned int m_width;
    unsigned int m_sizeX;
    unsigned int m_columns;
};

// dimension from top to bottom   // union for the top to bottom dimension
union TBDimension
{
    unsigned int m_height;
    unsigned int m_sizeY;
    unsigned int m_rows;
};

struct VAROBJECT
{
    enum o_t { Int, Double, String } objectType;

    union
    {
        int intValue;
        double dblValue;
        char *strValue;
    } value;
} object;

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}