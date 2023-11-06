class SeatManager {
public:
    int counter;
    priority_queue<int,vector<int>,greater<int>> hp;

    SeatManager(int n) {
        counter=1;
        
    }
    
    int reserve() {
        if(!hp.empty()&&hp.top()<counter)
        {
            int res_seat=hp.top();
            hp.pop();
            return res_seat;
        }
        counter++;
        return counter-1;
        
    }
    
    void unreserve(int seatNumber) {
        hp.push(seatNumber);
        
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
