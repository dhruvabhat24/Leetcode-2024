
type deque []int

func (d *deque) pushBack(val int) {
	*d = append(*d, val)
}

func (d *deque) popFront() int {
	front := (*d)[0]
	*d = (*d)[1:]
	return front
}

func deckRevealedIncreasing(deck []int) []int {
	ans := make([]int, len(deck))
	dq := make(deque, 0)
	for i := 0; i < len(deck); i++ {
		dq.pushBack(i)
	}
	sort.Ints(deck)
	for i := 0; i < len(deck); i++ {
		card := deck[i]
		front := dq.popFront()
		ans[front] = card
		if len(dq) > 0 {
			dq.pushBack(dq.popFront())
		}
	}
	return ans
}
