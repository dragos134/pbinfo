using AlgoLeetCode;
using AlgoLeetCode.Common;

// See https://aka.ms/new-console-template for more information
Console.WriteLine("Hello, World!");


var prb215 = AlgoLeetCode19Aug.FindKthLargest2([1, 3, 2], 2);
Console.WriteLine(prb215);

var prb318_1 = AlgoLeetCode19Aug.MaxProduct1(["a", "ab", "abc", "d", "cd", "bcd", "abcd"]);
Console.WriteLine(prb318_1);

var prb318_2 = AlgoLeetCode19Aug.MaxProduct2(["abcw", "baz", "foo", "bar", "xtfn", "abcdef"]);
Console.WriteLine(prb318_2);

var prb217_1 = AlgoLeetCode19Aug.ContainsDuplicate1([1, 2, 3, 1]);
Console.WriteLine(prb217_1);

var prb118_1 = AlgoLeetCode20Aug.Generate1(5);
Console.WriteLine(prb118_1);

var prb258_1 = AlgoLeetCode20Aug.AddDigits1(38);
Console.WriteLine(prb258_1);

var prb367_1 = AlgoLeetCode20Aug.IsPerfectSquare1(16);
Console.WriteLine(prb367_1);

var prb338_1 = AlgoLeetCode20Aug.CountBits1(5);
Console.WriteLine(prb338_1);

var prb125_1 = AlgoLeetCode20Aug.IsPalindrome1("A man, a plan, a canal: Panama");
Console.WriteLine(prb125_1);

var prb169_1 = AlgoLeetCode21Aug.MajorityElement1([3, 2, 3]);
Console.WriteLine(prb169_1);

var prb58_1 = AlgoLeetCode21Aug.LengthOfLastWord1("a");
Console.WriteLine(prb58_1);

AlgoLeetCode21Aug.MoveZeroes1([0, 1, 0, 3, 12]);

var prb345_1 = AlgoLeetCode21Aug.ReverseVowels1(",.");
Console.WriteLine(prb345_1);

var prb349_1 = AlgoLeetCode22Aug.Intersection1([1, 2, 2, 1], [2, 2]);
Console.WriteLine(prb349_1);

var prb387_1 = AlgoLeetCode22Aug.FirstUniqChar1("loveleetcode");
Console.WriteLine(prb387_1);

var prb14_1 = RandomProblems.LongestCommonPrefix(["dog", "racecar", "car"]);
Console.WriteLine(prb14_1);

var prb26_1 = RandomProblems.RemoveDuplicates([0, 0, 1, 1, 1, 2, 2, 3, 3, 4]);
Console.WriteLine(prb26_1);

var prb35_1 = RandomProblems.SearchInsert([1, 3, 5, 6], 7);
Console.WriteLine(prb35_1);

var prb67_1 = RandomProblems.AddBinary("1111", "1111");
Console.WriteLine(prb67_1);

var prb70_1 = RandomProblems.ClimbStairs(5);
Console.WriteLine(prb70_1);

ListNode test = new ListNode();
test.val = 1;
test.next = new ListNode()
{
    val = 1,
    next = new ListNode()
    {
        val = 2,
        next = new ListNode()
        {
            val = 3,
            next = new ListNode()
            {
                val = 3,
                next = null
            }
        }
    }
};

TreeNode testTree94 = new TreeNode()
{
    val = 1,
    left = new TreeNode
    {
        val = 2,
        left = new TreeNode
        {
            val = 4,
            left = null,
            right = null
        },
        right = new TreeNode
        {
            val = 5,
            left = new TreeNode
            {
                val = 6,
                left = null,
                right = null
            },
            right = new TreeNode
            {
                val = 7,
                left = null,
                right = null
            }
        }
    },
    right = new TreeNode
    {
        val = 3,
        left = null,
        right = new TreeNode
        {
            val = 8,
            left = new TreeNode
            {
                val = 9,
                left = null,
                right = null
            },
            right = null
        }
    }
};

var prb94_1 = RandomProblems.InorderTraversal(testTree94);

var prb119_1 = RandomProblems.GetRow(4);


//for (int i = 2; i < 1000; i++)
//{
//    var mySqrt = RandomProblems.MySqrt2(i);
//    var realSqrt = (int)Math.Sqrt(i);
//    if (mySqrt != realSqrt)
//    {
//        Console.WriteLine($"{i} - srqt = {realSqrt} - mySqrt = {mySqrt}");
//    }
//}


RandomProblems.MySqrt2(2);

ListNode test141_1 = new ListNode(), test141_2 = new ListNode(), test141_3 = new ListNode(), test141_4 = new ListNode();

test141_1.val = 3;
test141_1.next = test141_2;

test141_2.val = 2;
test141_2.next = test141_3;

test141_3.val = 0;
test141_3.next = test141_4;

test141_4.val = -3;
test141_4.next = test141_2;

RandomProblems.HasCycle1(test141_1);

var prb190_1 = RandomProblems.ReverseBits(4);
var prb190_2 = RandomProblems.ReverseBits(43261596);

var prb202_1 = RandomProblems.IsHappy(5);

ListNode test203_1 = new ListNode
{
    val = 1,
    next = new ListNode
    {
        val = 2,
        next = new ListNode
        {
            val = 6,
            next = new ListNode
            {
                val = 3,
                next = new ListNode
                {
                    val = 4,
                    next = new ListNode
                    {
                        val = 5,
                        next = new ListNode
                        {
                            val = 6,
                            next = null
                        }
                    }
                }
            }
        }
    }
};

var prb203_1 = RandomProblems.RemoveElements(test203_1, 6);