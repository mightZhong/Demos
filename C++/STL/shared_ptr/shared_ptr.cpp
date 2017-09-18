#include <>

int create_shared_ptr()
{
    //use make_shared function when possible.
    auto sp1 = make_shared<song>(L"The Beatles", L"Im Happy Just to Dance With You");

    //ok, but sightly less efficient.
    shared_ptr<song> sp2(new Song(L"Lady Gaga", L"Just Dance"));

    //Equivalent to: shared_ptr<Song> sp3;
    shared_ptr<song> sp3(nullptr);
    sp3 = make_shared<song>(L"Elton John", L"I'm Still Standing");

    auto sp4(sp3);
    auto sp5 = sp3;

}

//https://msdn.microsoft.com/en-us/library/hh279669.aspx