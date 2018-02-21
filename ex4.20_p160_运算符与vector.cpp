/*ex4.20：假设iter的类型是vector::iterator, 说明下面的表达式是否合法。如果合法，表达式的含义是什么？如果不合法，错在何处？
(a) *iter++;
(b)(*iter)++;
(c)*iter.empty()
(d)iter->empty()
(e)++*iter;
(f)iter++->empty();

(a)正确 等价于（iter++），返回（iter）值，迭代器后移一位
(b).错误（*iter）是string类型，后面接着++运算符，错误
(c).点运算符的优先级高于解引用。所以等价于*(iter.empty()), iter是一个迭代器，没有empty()这个成员函数。
(d)正确, 等价于(*iter).empty();
(e).正确，等价于++（*iter）
(f).正确，等价于（(iter++)）.empty().返回（iter）.empty()结果，迭代器后移一位
*/