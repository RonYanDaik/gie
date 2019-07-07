//
// Created by alex on 4/27/19.
//

#include <gie/Node.h>

#include <iostream>

std::optional<Node> makeNode(NodeTypeManager& typeManager, std::string name, std::vector<ArgumentValue> arguments)
{
    auto type = typeManager.getId(name);

    if(!type.has_value())
        return std::nullopt;

    return Node
            {
                    {},
                    {std::move(arguments)},
                    *type
            };
}