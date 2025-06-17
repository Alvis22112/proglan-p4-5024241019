#include <iostream>
#include <iomanip>
#include <cmath>

class ElementalDamage {
private:
    double baseDamage, elementalMultiplier;

public:
    // Constructor
    ElementalDamage(double base = 0, double multiplier = 0) : baseDamage(base), elementalMultiplier(multiplier) {}

    // Operator overloading untuk penjumlahan
    ElementalDamage operator+(const ElementalDamage& other) const {
        return ElementalDamage(baseDamage + other.baseDamage, elementalMultiplier + other.elementalMultiplier);
    }

    // Operator overloading untuk pengurangan
    ElementalDamage operator-(const ElementalDamage& other) const {
        return ElementalDamage(baseDamage - other.baseDamage, elementalMultiplier - other.elementalMultiplier);
    }

    // Operator overloading untuk perkalian
    ElementalDamage operator*(const ElementalDamage& other) const {
        // (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
        double newBase = baseDamage * other.baseDamage - elementalMultiplier * other.elementalMultiplier;
        double newMultiplier = baseDamage * other.elementalMultiplier + elementalMultiplier * other.baseDamage;
        return ElementalDamage(newBase, newMultiplier);
    }

    // Operator overloading untuk pembagian
    ElementalDamage operator/(const ElementalDamage& other) const {
        // (a + bi) / (c + di) = [(ac + bd) + (bc - ad)i] / (c² + d²)
        double denominator = other.baseDamage * other.baseDamage + other.elementalMultiplier * other.elementalMultiplier;
        if (denominator == 0) {
            std::cout << "Error: Division by zero!" << std::endl;
            return ElementalDamage(0, 0);
        }
        double newBase = (baseDamage * other.baseDamage + elementalMultiplier * other.elementalMultiplier) / denominator;
        double newMultiplier = (elementalMultiplier * other.baseDamage - baseDamage * other.elementalMultiplier) / denominator;
        return ElementalDamage(newBase, newMultiplier);
    }

    // Operator overloading untuk perbandingan kesamaan
    bool operator==(const ElementalDamage& other) const {
        const double EPSILON = 1e-9;
        return (std::abs(baseDamage - other.baseDamage) < EPSILON && 
                std::abs(elementalMultiplier - other.elementalMultiplier) < EPSILON);
    }

    // Friend function untuk input stream
    friend std::istream& operator>>(std::istream& is, ElementalDamage& damage) {
        is >> damage.baseDamage >> damage.elementalMultiplier;
        return is;
    }

    // Friend function untuk output stream
    friend std::ostream& operator<<(std::ostream& os, const ElementalDamage& damage) {
        if (damage.elementalMultiplier >= 0) {
            os << damage.baseDamage << " + " << damage.elementalMultiplier << "i";
        } else {
            os << damage.baseDamage << " - " << std::abs(damage.elementalMultiplier) << "i";
        }
        return os;
    }

    // Getter methods
    double getBaseDamage() const { return baseDamage; }
    double getElementalMultiplier() const { return elementalMultiplier; }
};

// KERJAKAN MAIN SAJA
int main() {
    ElementalDamage d1, d2;

    std::cin >> d1 >> d2;

    std::cout << std::fixed << std::setprecision(1);

    std::cout << "Elemental Damage 1: " << d1 << std::endl;
    std::cout << "Elemental Damage 2: " << d2 << std::endl;

    ElementalDamage tambah = d1 + d2;
    std::cout << "Reaction (Addition): " << tambah << std::endl;

    ElementalDamage kurang = d1 - d2;
    std::cout << "Reaction (Subtraction): " << kurang << std::endl;

  
    ElementalDamage kali = d1 * d2;
    std::cout << "Reaction (Multiplication): " << kali << std::endl;

    ElementalDamage bagi = d1 / d2;
    std::cout << "Reaction (Division): " << bagi << std::endl;

    std::cout << "Apakah damage sama? " << (d1 == d2 ? "Ya" : "Tidak") << std::endl;

    return 0;
}
