bool inBetween(int p1[], int q1[], int p2[], int q2[]){
        return (p2[0]>=p1[0] && p2[0]<=q1[0]) || (q2[0]>=p1[0] && q2[0]<=q1[0]);
    }
    string doIntersect(int p1[], int q1[], int p2[], int q2[]) {
        if(p1[0]>q1[0]) swap(p1, q1);
        double m1 = double(p1[1]-q1[1])/(p1[0]-q1[0]);
        double m2 = double(p2[1]-q2[1])/(p2[0]-q2[0]);
        
        //Points of second line w.r.t. first line
        bool check1 = p2[1]-p1[1] - m1*(p2[0]-p1[0])>0?true:false;
        bool check2 = q2[1]-p1[1] - m1*(q2[0]-p1[0])>0?true:false;
        
        //If collinear
        if(p2[1]-p1[1] - m1*(p2[0]-p1[0])==0 && m1==m2 && inBetween(p1, q1, p2, q2))
        return "true";
        
        // Points of first line w.r.t. second line
        bool check3 = p1[1]-p2[1] - m2*(p1[0]-p2[0])>0?true:false;
        bool check4 = q1[1]-p2[1] - m2*(q1[0]-p2[0])>0?true:false;
        
        // Point are on the same side
        if(check1 == check2 || check3 == check4) return "false";
        else return "true";
    }