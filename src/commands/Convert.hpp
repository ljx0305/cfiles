// cfiles, an analysis frontend for the Chemfiles library
// Copyright (C) Guillaume Fraux and contributors -- BSD license

#ifndef CFILES_CONVERT_HPP
#define CFILES_CONVERT_HPP

#include <chemfiles.hpp>

#include "Command.hpp"
#include "utils.hpp"

class Convert final: public Command {
public:
    struct Options {
        std::string infile;
        std::string outfile;
        std::string input_format = "";
        std::string output_format = "";
        std::string topology = "";
        std::string topology_format = "";
        std::string selection = "";
        bool custom_cell = false;
        chemfiles::UnitCell cell;
        bool guess_bonds = false;
        bool wrap = false;
        std::string wrap_selection = "";
        bool center = false;
        std::string center_selection = "";
        steps_range steps;
    };

    int run(int argc, const char* argv[]) override;
    std::string description() const override;
};

#endif
