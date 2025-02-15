#pragma once
#include "Item.h"
#include "Animation.h"
#include "Collider.h"

class Sword: public Item
{
private:

    Collider* m_Collider;
    Animation* m_AimationS;

public:
    Sword(int quantity, const std::string& name, const std::string& type, const std::string& texture, int price, int endurance, int damage);

    std::string getDescription() override;


    Sword* clone() const override {
        return new Sword(*this);
    }

    void use() override;
    void draw() override;

    int getX() override;
    int getY() override;

};


