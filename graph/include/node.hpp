#pragma once

#include <vector>

#include "pos.hpp"

struct Node;
using Nodes = std::vector<Node *>;
using EdgeCosts = std::vector<int>;

struct Node {
    const int id;
    const Pos pos;
    Nodes neighbor;
    EdgeCosts neighbor_cost;

    Node(int _id, int x, int y);

    ~Node();

    int getDegree() const;

    int manhattanDist(const Node &node) const;

    int manhattanDist(const Node *const node) const;

    float euclideanDist(const Node &node) const;

    float euclideanDist(const Node *const node) const;

    void print() const;

    void println() const;

    bool operator==(const Node &v) const;

    bool operator!=(const Node &v) const;

    bool operator==(const Node *const v) const;

    bool operator!=(const Node *const v) const;
};
