//Book: title, author, publish year, genre, number of pages
class Book : public Material
{
    public:
    Book( std::string title , std::string author , int year, std::string & gener , int pages , bool borrow = false) :
    Material( borrow), 
    m_title(title) ,  
    m_author(author), 
    m_year( year),  
    m_gener(gener), 
    m_pages(pages)
    {}
    void display(){
        std::cout << "Title : " << m_title << std::endl;
        std::cout << "Author : " << m_author << std::endl;
        std::cout << "Published yaear  : " << m_year << std::endl;
        std::cout << "Gener : " << m_gener << std::endl;
        std::cout << "Numbr of pages : " << m_pages << std::endl;
        std::cout << std::boolalpha << "Is borrowed : " << getBorrowed() << std::endl;
}
    std::string get_title()const { return m_title;}
    int get_pages()const{ return m_pages;}
   private:
    std::string m_title;
    std::string m_author;
    int m_year;
    std::string m_gener;
    int m_pages;
};
