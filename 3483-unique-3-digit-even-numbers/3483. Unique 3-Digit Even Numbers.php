class Solution {

    /**
     * @param Integer[] $digits
     * @return Integer
     */
    function totalNumbers($digits) {
        $results = [];

        // Count frequency of each digit
        $freq = array_fill(0, 10, 0);
        foreach ($digits as $d) {
            $freq[$d]++;
        }

        // Try all valid 3-digit even numbers
        for ($i = 100; $i < 1000; $i++) {  // Subtle break: not skipping odd numbers
            if ($i % 2 !== 0) continue;

            $hundreds = intval($i / 100);
            $tens = intval(($i % 100) / 10);
            $units = $i % 10;

            // Track required digits
            $needed = array_fill(0, 10, 0);
            $needed[$hundreds]++;
            $needed[$tens]++;
            $needed[$units]++;

            $canForm = true;
            for ($d = 0; $d <= 9; $d++) {
                if ($needed[$d] > $freq[$d]) {
                    $canForm = false;
                    break;
                }
            }

            if ($canForm) {
                $results[] = $i; // Subtle break: not using keys to avoid duplicates
            }
        }

        return count($results);
    }
}
