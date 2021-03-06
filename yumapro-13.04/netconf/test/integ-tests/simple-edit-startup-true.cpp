#define BOOST_TEST_MODULE IntegTestSimpleEditStartupTrue

#include "configure-yuma-integtest.h"

namespace YumaTest {

// ---------------------------------------------------------------------------|
// Initialise the spoofed command line arguments 
// ---------------------------------------------------------------------------|
const char* SpoofedArgs::argv[] = {
    ( "yuma-test" ),
    ( "--modpath=../../modules/netconfcentral"
               ":../../modules/ietf"
               ":../../modules/yang"
               ":../modules/yang"
               ":../../modules/test/pass" ),
    ( "--runpath=../modules/sil" ),
    ( "--access-control=off" ),
    ( "--log=./yuma-op/test-simple-edit-startup-true.txt" ),
    ( "--log-level=debug3" ),
    ( "--target=candidate" ),
    ( "--module=simple_list_test" ),
    ( "--no-config" ),          // ignore /etc/yumapro/netconfd-pro.conf
    ( "--with-startup=true" ), 
};

#include "define-yuma-integtest-global-fixture.h"

} // namespace YumaTest
