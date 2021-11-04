#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#include "{{cookiecutter.repo_name}}/version.h"

TEST_CASE( "hello_world", "[hello]" ) {
    std::cout << "{{cookiecutter.repo_name}} "<< {{cookiecutter.repo_name}}::VERSION << " " << {{cookiecutter.repo_name}}::VERSION_SHORT << " unittests\n";
    REQUIRE( true );
}
