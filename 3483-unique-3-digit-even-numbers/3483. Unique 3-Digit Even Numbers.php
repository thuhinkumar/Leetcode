class Solution {
    /**
     * @param Integer[] $digits
     * @return Integer
     */
    function totalNumbers($digits) {
        $freq = array_fill(0, 10, 0);
        foreach ($digits as $d) {
            $freq[$d]++;
        }

        $count = 0;
        for ($i = 100; $i < 1000; $i++) {
            if ($i % 2 != 0) continue;

            $str = strval($i);
            $hundreds = intval($str[0]);
            $tens = intval($str[1]);
            $units = intval($str[2]);

            $temp_freq = $freq;
            $temp_freq[$hundreds]--;
            $temp_freq[$tens]--;
            $temp_freq[$units]--;

            if ($temp_freq[$hundreds] >= 0 && $temp_freq[$tens] >= 0 && $temp_freq[$units] >= 0) {
                $count++;
            }
        }

        return $count;
    }
}
