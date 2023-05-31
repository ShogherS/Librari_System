//Library class. It havs methods for adding and removing materials, checking if a material is in the library, and borrowing and returning materials.
//  Library class has copy constructors, copy assignment operators, and destructors for proper dynamic memory management.

class Library
{
    public:
    ~Library(){ 
        for( auto & it : m_library) {
            delete it;
        }
    }
    void add_book(const Book &);
//    void remove()
    int  find(std::string & title);
    Material* & operator[](int);
    private:
    std::vector <Material *> m_library;
};

void Library:: add_book(const Book & item){
    m_library.push_back(new Book {item});
}
//void Library::remove(){
    
int  Library::find(std::string & title){
    for (int i{} ; i< m_library.size() ; i++) {
        Book * ptr = dynamic_cast<Book *>(m_library[i]);
        if ( title == ptr->get_title() ) {
            std::cout << "A title is found" << std::endl;
            ptr->display();
            return i;
         }
     }
     std::cout << "A title is not found! " << std::endl;
     return -1;
} 
Material* & Library::operator[](int index){
    return m_library[index];
}
