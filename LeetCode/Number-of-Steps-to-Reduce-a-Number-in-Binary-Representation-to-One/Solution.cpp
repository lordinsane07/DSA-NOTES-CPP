func numSteps(s string) int {
	steps, carry := 0, byte(0)
	for i := len(s) - 1; i > 0; i-- {
		steps += int(s[i]+carry)&1 + 1
		carry |= s[i] & 1
	}
	return steps + int(carry)
}