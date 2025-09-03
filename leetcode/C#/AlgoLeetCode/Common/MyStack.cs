namespace AlgoLeetCode.Common
{
    public class MyStack
    {
        private Queue<int> _queue1;
        private Queue<int> _queue2;
        public MyStack()
        {
            _queue1 = new Queue<int>();
            _queue2 = new Queue<int>();
        }

        public void Push(int x)
        {
            _queue1.Enqueue(x);
        }

        public int Pop()
        {
            _queue2.Clear();
            while (_queue1.Count > 1)
            {
                _queue2.Enqueue(_queue1.Dequeue());
            }
            var last = _queue1.Dequeue();
            _queue1 = _queue2;
            return last;
        }

        public int Top()
        {
            _queue2 = _queue1;
            while (_queue2.Count > 1)
            {
                _queue2.Dequeue();
            }
            return _queue2.Dequeue();
        }

        public bool Empty()
        {
            return _queue1.Count == 0;
        }
    }
}
