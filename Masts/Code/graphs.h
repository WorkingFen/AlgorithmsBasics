/**
* Name: graphs.h
* Purpose: Declaration of namespace Graphs
*
* @version 0.1 06/12/2018
* @author Piotr Zawadka
*/
#pragma once

#include <string>
#include <SFML/Graphics.hpp>
#include "instructions.h"

#define WIDTH 1366
#define HEIGHT
#define BACKGROUND sf::Color(8,8,16)

///Namespace with graphs logic
namespace Graphs
{
    void events(sf::Window &window, Instructions &instructions, std::vector<Vertex*> &vertices, std::vector<Edge*> &edges,
                    unsigned &idStart, unsigned &idFinish, std::string &algorithm, std::vector<Edge*> &floydsEdges,
                    bool &loaded, Path &path, unsigned &cost, unsigned &displayed, std::vector<Path*> &floydsPaths,
                    std::vector<unsigned> &costs);

    void write(sf::RenderWindow &window, const std::string msg, const unsigned x, const unsigned y,
                    sf::Color color = sf::Color::White, unsigned size = 24);

    void draw(sf::RenderWindow &window, Instructions &instructions, const std::string algorithm,
                    int &frame, int &pause, bool loaded, std::vector<Vertex*> vertices, std::vector<Edge*> edges,
                    std::vector<Edge*> floydsEdges, Path path, unsigned &cost, unsigned displayed,
                    std::vector<Path*> floydsPaths, std::vector<unsigned> costs);

}
