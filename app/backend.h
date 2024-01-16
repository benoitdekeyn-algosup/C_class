typefdef struct product {
    unsigned int id;
    char name[100];
    unsigned int quantity;
    float price;
} product_t;

int read_report(const char* name, char* content);
int write_report(const char* name, const char* content);
int add_record(const product_t* product);
int view_record(const unsigned int id, product_t* product);
int search_record(); // TODO
int update_record(const unsigned int id, const product_t* product);
int delete_record(const unsigned int id);