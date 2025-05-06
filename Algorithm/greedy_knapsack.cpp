#include <iostream>
#include <vector>

struct Item {
    int weight;
    int value;
    double valuePerWeight;
};

void sortItems(std::vector<Item> &items) {
    for (size_t i = 0; i < items.size(); i++) {
        for (size_t j = i + 1; j < items.size(); j++) {
            if (items[i].valuePerWeight < items[j].valuePerWeight) {
                std::swap(items[i], items[j]);
            }
        }
    }
}

double greedyKnapsack(int capacity, std::vector<Item> &items) {
    sortItems(items);
    double totalValue = 0.0;

    for (const auto &item : items) {
        if (capacity >= item.weight) {
            capacity -= item.weight;
            totalValue += item.value;
        } else {
            totalValue += item.valuePerWeight * capacity;
            break;
        }
    }
    return totalValue;
}

int main() {
    int n, capacity;
    std::cin >> n >> capacity;

    std::vector<Item> items(n);
    for (int i = 0; i < n; i++) {
        std::cin >> items[i].weight >> items[i].value;
        items[i].valuePerWeight = static_cast<double>(items[i].value) / items[i].weight;
    }

    std::cout << greedyKnapsack(capacity, items) << "\n";
    return 0;
}

//3 50
//10 60
//20 100
//30 120
