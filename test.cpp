#define BOOST_TEST_MODULE Simple testcase 
#include <C:/Program Files/boost/include/boost-1_67/boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(suite01)

BOOST_AUTO_TEST_CASE(simple_test00)
{
    BOOST_CHECK(Gethora() == 0);
{
BOOST_AUTO_TEST_CASE(simple_test01)
{
    BOOST_CHECK(GetMinuto() == 0);
}
BOOST_AUTO_TEST_CASE(simple_test02)
{
    BOOST_CHECK(GetSegundo() == 0);
}
BOOST_AUTO_TEST_CASE(simple_test03)
{
    BOOST_CHECK(Horastring() == "00:00:00");
{

BOOST_AUTO_TEST_SUITE_END()
