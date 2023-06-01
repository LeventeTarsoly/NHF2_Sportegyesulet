#include "FootballTeam.h"
#include "BasketballTeam.h"
#include "HandballTeam.h"
#include "Club.h"
#include "gtest_lite.h"
#include "files.h"

void filetest(){
    std::ofstream File("club.txt");
    File << "F/name/1/tr1/tr2/Adidas"<<endl;
    File << "B/name/2/3/pompom"<<endl;
    File << "H/name/4/5/6"<<endl;
    File.close();
    Club club = read();

    TEST(filetest, Readtest){
            EXPECT_DOUBLE_EQ(3, club.length()); ///length
            Node* iter = club.gethead()->next;

            EXPECT_STREQ("name", iter->data->getname().c_str());///name
            EXPECT_DOUBLE_EQ(1, iter->data->getcount());///cnt
            EXPECT_DOUBLE_EQ(200, iter->data->getprice()); ///price

            iter=iter->next;
            EXPECT_STREQ("name", iter->data->getname().c_str());///name
            EXPECT_DOUBLE_EQ(2, iter->data->getcount());///cnt
            EXPECT_DOUBLE_EQ(0, iter->data->getprice()); ///price-0

            iter=iter->next;
            EXPECT_STREQ("name", iter->data->getname().c_str());///name
            EXPECT_DOUBLE_EQ(4, iter->data->getcount());///cnt
            EXPECT_DOUBLE_EQ(5, iter->data->getprice()); ///price
    }END

    TEST(filetest, Savetest){
            club.save();
            std::ifstream file("club.txt");
            std::string line;

            std::getline(file, line);
            EXPECT_STREQ("F/name/1/tr1/tr2/Adidas", line.c_str());

            std::getline(file, line);
            EXPECT_STREQ("B/name/2/3/pompom", line.c_str());

            std::getline(file, line);
            EXPECT_STREQ("H/name/4/5/6", line.c_str());
    }END
}


void classtest(){
Club club;
TEST(classtest, FootballTest){
        FootballTeam footballTeam1;
        EXPECT_STREQ("", footballTeam1.getname().c_str());///def constr name
        EXPECT_DOUBLE_EQ(0, footballTeam1.getcount());///def constr cnt
        EXPECT_STREQ("", footballTeam1.gettrainer1().c_str());///def constr t1
        EXPECT_STREQ("", footballTeam1.gettrainer2().c_str());///def constr t2
        EXPECT_STREQ("", footballTeam1.getsponsor().c_str());///def constr sponsor
        EXPECT_DOUBLE_EQ(0, footballTeam1.getprice()); ///def price-0

        String trainers[2] = {"T1", "T2"};
        FootballTeam footballTeam2("f", 20, trainers, "sp");
        EXPECT_STREQ("f", footballTeam2.getname().c_str());///constr name
        EXPECT_DOUBLE_EQ(20, footballTeam2.getcount());///constr cnt
        EXPECT_STREQ("T1", footballTeam2.gettrainer1().c_str());///constr t1
        EXPECT_STREQ("T2", footballTeam2.gettrainer2().c_str());///constr t2
        EXPECT_STREQ("sp", footballTeam2.getsponsor().c_str());///constr sponsor
        EXPECT_DOUBLE_EQ(0, footballTeam2.getprice()); ///price-0

        String sp("Nike");
        footballTeam1.setname(sp);
        EXPECT_STREQ("Nike", footballTeam1.getname().c_str());///setname
        footballTeam1.setcount(1);
        EXPECT_DOUBLE_EQ(1, footballTeam1.getcount());///setcount
        footballTeam1.settrainers(trainers);
        EXPECT_STREQ("T1", footballTeam1.gettrainer1().c_str());///settrainers t1
        EXPECT_STREQ("T2", footballTeam1.gettrainer2().c_str());///settrainers t2
        footballTeam1.setsponsor(sp);
        EXPECT_STREQ("Nike", footballTeam1.getsponsor().c_str());///setsponsor
        EXPECT_DOUBLE_EQ(100, footballTeam1.getprice()); ///price-not 0

        std::ofstream File("test.txt");
        footballTeam1.save(File);
        File.close();
        std::ifstream file("test.txt");
        std::string line;
        std::getline(file,line);
        EXPECT_STREQ("F/Nike/1/T1/T2/Nike", line.c_str());///save
        club.add(footballTeam1.clone());
        club.add(footballTeam2.clone());
}END

TEST(classtest, BasketballTest){
        BasketballTeam basketballTeam1;
        EXPECT_STREQ("", basketballTeam1.getname().c_str());///def constr name
        EXPECT_DOUBLE_EQ(0, basketballTeam1.getcount());///def constr cnt
        EXPECT_STREQ("", basketballTeam1.getpompomName().c_str());///def constr pompomName
        EXPECT_DOUBLE_EQ(0, basketballTeam1.getpompomCount());///def constr pompomCount
        EXPECT_DOUBLE_EQ(0, basketballTeam1.getprice()); ///def constr price-0

        BasketballTeam basketballTeam2("b", 20, 10, "pp");
        EXPECT_STREQ("b", basketballTeam2.getname().c_str());///constr name
        EXPECT_DOUBLE_EQ(20, basketballTeam2.getcount());///constr cnt
        EXPECT_STREQ("pp", basketballTeam2.getpompomName().c_str());///constr pompomName
        EXPECT_DOUBLE_EQ(10, basketballTeam2.getpompomCount());///constr pompomCount
        EXPECT_DOUBLE_EQ(0, basketballTeam2.getprice()); ///constr price-0

        String str("str");
        basketballTeam1.setname(str);
        EXPECT_STREQ("str", basketballTeam1.getname().c_str());///setname
        basketballTeam1.setcount(1);
        EXPECT_DOUBLE_EQ(1, basketballTeam1.getcount());///setcount
        basketballTeam1.setpompomName(str);
        EXPECT_STREQ("str", basketballTeam1.getpompomName().c_str());///setpompomName
        basketballTeam1.setpompomCount(1);
        EXPECT_DOUBLE_EQ(1, basketballTeam1.getpompomCount());///setpompomCount
        EXPECT_DOUBLE_EQ(0, basketballTeam1.getprice()); ///price-0

        std::ofstream File("test.txt");
        basketballTeam1.save(File);
        File.close();
        std::ifstream file("test.txt");
        std::string line;
        std::getline(file,line);
        EXPECT_STREQ("B/str/1/1/str", line.c_str());///save
        club.add(basketballTeam1.clone());
        club.add(basketballTeam2.clone());
}END

TEST(classtest, HandballTest){
        HandballTeam handballTeam1;

        EXPECT_STREQ("", handballTeam1.getname().c_str());///def constr name
        EXPECT_DOUBLE_EQ(0, handballTeam1.getcount());///def constr cnt
        EXPECT_DOUBLE_EQ(0, handballTeam1.getsupportAmount());///def constr supportAmount
        EXPECT_DOUBLE_EQ(0, handballTeam1.getsupportSince());///def constr supportSince
        EXPECT_DOUBLE_EQ(0, handballTeam1.getprice()); ///def constr price-0

        HandballTeam handballTeam2("h", 20, 200, 2010);
        EXPECT_STREQ("h", handballTeam2.getname().c_str());///constr name
        EXPECT_DOUBLE_EQ(20, handballTeam2.getcount());///constr cnt
        EXPECT_DOUBLE_EQ(200, handballTeam2.getsupportAmount());///constr supportAmount
        EXPECT_DOUBLE_EQ(2010, handballTeam2.getsupportSince());///constr supportSince
        EXPECT_DOUBLE_EQ(200, handballTeam2.getprice()); ///constr price

        String str("str");
        handballTeam1.setname(str);
        EXPECT_STREQ("str", handballTeam1.getname().c_str());///setname
        handballTeam1.setcount(1);
        EXPECT_DOUBLE_EQ(1, handballTeam1.getcount());///setcount
        handballTeam1.setsupportAmount(200);
        EXPECT_DOUBLE_EQ(200, handballTeam1.getsupportAmount());///setsupportAmount
        handballTeam1.setsupportSince(2010);
        EXPECT_DOUBLE_EQ(2010, handballTeam1.getsupportSince());///setsupportSince
        EXPECT_DOUBLE_EQ(200, handballTeam1.getprice()); ///price

        std::ofstream File("test.txt");
        handballTeam1.save(File);
        File.close();
        std::ifstream file("test.txt");
        std::string line;
        std::getline(file,line);
        EXPECT_STREQ("H/str/1/200/2010", line.c_str());///save
        club.add(handballTeam1.clone());
        club.add(handballTeam2.clone());
}END

TEST(classtest, Clubtest){
        EXPECT_DOUBLE_EQ(6, club.length()); ///length
        Node* iter = club.gethead()->next;

        EXPECT_STREQ("Nike", iter->data->getname().c_str());///name
        EXPECT_DOUBLE_EQ(1, iter->data->getcount());///cnt
        EXPECT_DOUBLE_EQ(100, iter->data->getprice()); ///price

        iter=iter->next;
        EXPECT_STREQ("f", iter->data->getname().c_str());///name
        EXPECT_DOUBLE_EQ(20, iter->data->getcount());///cnt
        EXPECT_DOUBLE_EQ(0, iter->data->getprice()); ///price-0

        iter=iter->next;
        EXPECT_STREQ("str", iter->data->getname().c_str());///name
        EXPECT_DOUBLE_EQ(1, iter->data->getcount());///cnt
        EXPECT_DOUBLE_EQ(0, iter->data->getprice()); ///price-0

        iter=iter->next;
        EXPECT_STREQ("b", iter->data->getname().c_str());///name
        EXPECT_DOUBLE_EQ(20, iter->data->getcount());///cnt
        EXPECT_DOUBLE_EQ(0, iter->data->getprice()); ///price-0

        iter=iter->next;
        EXPECT_STREQ("str", iter->data->getname().c_str());///name
        EXPECT_DOUBLE_EQ(1, iter->data->getcount());///cnt
        EXPECT_DOUBLE_EQ(200, iter->data->getprice()); ///price-0

        iter=iter->next;
        EXPECT_STREQ("h", iter->data->getname().c_str());///name
        EXPECT_DOUBLE_EQ(20, iter->data->getcount());///cnt
        EXPECT_DOUBLE_EQ(200, iter->data->getprice()); ///price

        EXPECT_DOUBLE_EQ(63, club.totalathletes());///totalathletes
        EXPECT_DOUBLE_EQ(500, club.totalprice());///totalprice
}END
    cout << endl;
}

void functiontest(){}