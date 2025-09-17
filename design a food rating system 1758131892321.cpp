class FoodRatings {
    struct Entry {
        int rating;
        string food;
        bool operator<(const Entry& other) const {
            if (rating == other.rating) return food > other.food;
            return rating < other.rating;
        }
    };

    unordered_map<string, string> foodToCuisine;
    unordered_map<string, int> foodToRating;
    unordered_map<string, priority_queue<Entry>> cuisinePQ;

public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for (int i = 0; i < foods.size(); i++) {
            foodToCuisine[foods[i]] = cuisines[i];
            foodToRating[foods[i]] = ratings[i];
            cuisinePQ[cuisines[i]].push({ratings[i], foods[i]});
        }
    }

    void changeRating(string food, int newRating) {
        string cuisine = foodToCuisine[food];
        foodToRating[food] = newRating;
        cuisinePQ[cuisine].push({newRating, food});
    }

    string highestRated(string cuisine) {
        auto& pq = cuisinePQ[cuisine];
        while (true) {
            auto top = pq.top();
            if (top.rating == foodToRating[top.food]) return top.food;
            pq.pop();
        }
    }
};
