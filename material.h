class Material
{
    public:
    Material(bool borrowed = false): m_is_borrowed(borrowed){}
    virtual ~Material(){}
    
    void borrow() {
        if ( m_is_borrowed) {
            std::cout << "Unavailable" <<std::endl;
            return;
         }
        m_is_borrowed = true;
        std::cout << "A book is borrowed! " << std::endl;
    }
    void returning(){
        if( m_is_borrowed) {
            m_is_borrowed = false;
            std::cout << "Thanks for returning!" << std::endl;
            return;
         }
        std::cout << "You did not borrowed this book" << std::endl;
    }
        
    bool getBorrowed() const {
        return m_is_borrowed;
    }

    protected:
    bool m_is_borrowed;
};


