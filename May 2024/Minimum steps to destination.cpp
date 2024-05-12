int minSteps(int d) {
        // code here
        int steps = 0, t = 0, i = 1;

        while((t < d) || (t > d && (t-d)%2)) {
            t += i++;
            steps++;
        }

        return steps;
    }